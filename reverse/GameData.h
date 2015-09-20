typedef struct _GameData
{
    //
    // 0 - Force game to close
    //

    ULONG GameRunning;             // +0x00

    //
    // Ширина Hdc главного окна
    //

    ULONG HdcWidth;             // +0x4

    //
    // Высота Hdc главного окна
    //

    ULONG HdcHeight;             // +0x8

    //
    // Глубина цвета Hdc главного окна
    //

    ULONG HdcBpp;             // +0xС

    //
    // Window minimized state
    //

    ULONG SizeMinimized;        // +0x20

    //
    // Application instance
    //

    HINSTANCE Instance;         // +0x58

    //
    // Main window handle
    //

    HWND MainWnd;               // +0x5C

    //
    // Exit code
    //

    ULONG ExitCode;             // +0x60

    //
    // Profiler data (Tick Counts)
    //

    PVOID ProfilerData;         // +0x794

    //
    // Координаты указателя мыши
    //

    ULONG MouseX;              // +0x840

    ULONG MouseY;               // +0x844

    //
    // Начальные размеры создаваемого главного окна
    //

    ULONG CreateWidth;          // 0x954

    ULONG CreateHeight;         // 0x958

    //
    // Глубина цвета, требуемое приложением
    //

    LONG RequestedBpp;          // +0x95C

    //
    // Не проверять BPP рабочего стола на требуемую глубину цвета, если равно 1
    //

    ULONG SkipBppCheck;         // +0x964

    //
    // Показывать курсор мыши
    //

    ULONG ShowCursor;           // 0x974

    //
    // Random seed (0 - use system time)
    //

    ULONG SeedValue;            // +0x9B0

    //
    // Имя главного окна ("DEFAULT")
    //

    PCHAR WndName;              // +0x9B4

    //
    // Имя класса окна ("DEFAULT CLASS")
    //

    PCHAR WndClassName;         // +0x9B8

    //
    // Использовать WndClass из GameData при создании окна, или заполнять его
    // 

    ULONG UseWndClass;          // +0x9BC

    //
    // WNDCLASS для главного окна
    //

    WNDCLASS WndClass;          // +0x9C0  (0x28 bytes)

    //
    // Вызывается после создания главного окна
    //

    BOOL (*AppInitHandler) (PGAMEDATA);         // +0x9F0

    //
    // Application shutdown handler
    //

    VOID (*AppShutdownHandler) (PGAMEDATA);         // +0x9F4

    //
    // Вызывается перед вхождением в Main Game Loop и после AppInitHandler
    //

    BOOL (*MainEnter) (PGAMEDATA);              // +0x9F8

    //
    // Вызывается перед App Shutdown
    //

    VOID (*MainExit) (PGAMEDATA);           // +0x9FC

    //
    // One game frame
    //

    VOID (*FrameHandler) (PGAMEDATA);           // +0xA00

    //
    // Обработчик сообщений от мыши
    //

    VOID (*MouseHandler) ( MSG, WPARAM, LPARAM, PGAMEDATA );        // +0xA04

    //
    // Обработчик событий от клавиатуры
    //

    VOID (*KbdHandler) (MSG, WPARAM, LPARAM, PGAMEDATA);        // +0xA08

    //
    // Обработчик WM_ACTIVATEAPP
    //

    VOID (*AppActivate) ( WPARAM, PGAMEDATA );          // +0xA28

    //
    // Обработчик WM_DEVICECHANGE
    //

    VOID (*DeviceChangedHandler) ( WPARAM, LPARAM, PGAMEDATA );         // +0xA2C

    //
    // Вершина стека
    //

    PVOID StackBase;        // +0xA44

    //
    // Сигнал завершения работы
    //

    ULONG QuitSignal;       // +0xA54

    //
    // Вызывается после получения QuitSignal
    //

    VOID (*QuitHandler) (PGAMEDATA);        // +0xA58

    //
    // Процедура позволяет сработать Ctrl + Q, если возвращает 1
    //

    BOOL (*AllowQuitHandler) (PGAMEDATA);       // +0xA5C

/*
        dword.[GameData + 0x99C] = 0x42B40000;
        dword.[GameData + 0x9A0] = 0x42FA0000;
        dword.[GameData + 0x9A4] = 0x47435000;

        dword.[GameData + 0x954] = 640;
        dword.[GameData + 0x958] = 480;
        dword.[GameData + 0x848] = 0;
        dword.[GameData + 0x84C] = 0;
        dword.[GameData + 0x850] = 640;
        dword.[GameData + 0x854] = 480;

        dword.[GameData + 0x858] = dword.[GameData + 0x850] + dword.[GameData + 0x848] - 1;
        dword.[GameData + 0x85C] = dword.[GameData + 0x854] + dword.[GameData + 0x84C] - 1;

        dword.[GameData + 0x964] = 1;
        dword.[GameData + 0x968] = 1;
        dword.[GameData + 0x96C] = 0;
        dword.[GameData + 0x960] = 2;
        dword.[GameData + 0xA60] = 0;
        dword.[GameData + 0x97C] = 1;
        dword.[GameData + 0x988] = 1;
        dword.[GameData + 0x98C] = 1;
        dword.[GameData + 0x994] = 1;
        dword.[GameData + 0x998] = 0x20;
        dword.[GameData + 0xA48] = 1;

            case WM_MOVE:
                dword.[GameData + 0x10] = LOWORD(lParam);       
                dword.[GameData + 0x14] = HIWORD(lParam);       
                break;

            case WM_SIZE:
                dword.[GameData + 0x18] = LOWORD(lParam);       // Width
                dword.[GameData + 0x1C] = HIWORD(lParam);       // Height

*/

} GameData, *PGameData;
