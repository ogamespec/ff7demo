int CALLBACK MainWindowProc (HWND Hwnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
	PGameData GameData;
	Result = 0;

	GameData = GetGlobalGameData ();

	if ( GameData )
	{
		GameData->MainWnd = Hwnd;

		switch ( Msg )
		{
			case WM_DESTROY:
				break;

			case WM_MOVE:
			 	dword.[GameData + 0x10] = LOWORD(lParam); 		
			 	dword.[GameData + 0x14] = HIWORD(lParam); 		
				break;

			case WM_SIZE:
				dword.[GameData + 0x18] = LOWORD(lParam); 		// Width
				dword.[GameData + 0x1C] = HIWORD(lParam); 		// Height

				if ( wParam == SIZE_MINIMIZED )
					GameData->SizeMinimized = 1;
				else
					GameData->SizeMinimized = 0;
				break;

			case WM_ACTIVATE:
				break;

			case WM_PAINT:
				BeginPaint ( Hwnd, &Paint );

				EndPaint ( Hwnd, &Paint );
				break;

			case WM_CLOSE:
				LogOutput ( "WM_CLOSE \n" );

				GameClose ( GameData );

				PostQuitMessage (0);
				break;

			case WM_QUIT:
				LogOutput ( "WM_QUIT \n" );

				GameData->ExitCode = wParam;
				break;

			case WM_ACTIVATEAPP:
				if ( GameData->AppActivate )
					GameData->AppActivate ( wParam, GameData );
				break;

			case WM_KEYDOWN:
			case WM_KEYUP:
			case WM_CHAR:
				if ( GameData->KbdHandler )
					GameData->KbdHandler ( Msg, wParam, lParam, GameData );

				//
				// Check Ctrl+Q
				//

				if ( Msg == WM_KEYUP && wParam == VK_Q )
				{
					State = GetAsyncKeyState ( VK_CONTROL );
					if ( State & 1 ) 		// Pressed
					{
						if ( GameData->AllowQuitHandler )
						{
							if ( GameData->AllowQuitHandler ( GameData ) )
								GameData->QuitSignal = 1;
						}
						else
							GameData->QuitSignal = 1;
					}
				}
				break;

			case WM_TIMER:
				break;

			case WM_MOUSEMOVE:
			case WM_LBUTTONDOWN:
			case WM_LBUTTONUP:
			case WM_LBUTTONDBLCLK:
			case WM_RBUTTONDOWN:
			case WM_RBUTTONUP:
			case WM_RBUTTONDBLCLK:
			case WM_MBUTTONDOWN:
			case WM_MBUTTONUP:
			case WM_MBUTTONDBLCLK:
				if ( GameData->MouseHandler )
				{
					GameData->MouseHandler ( Msg, wParam, lParam, GameData );
				}
				break;

			case WM_DEVICECHANGE:
				if ( GameData->DeviceChangedHandler )
				{
					GameData->DeviceChangedHandler ( wParam, lParam, GameData );
				}
				break;

			default:
				Result = 1;
				break;
		}
	}

	if ( Result )
	{
		Result = DefWindowProc ( Hwnd, Msg, wParam, lParam );
	}

	return Result;
}
