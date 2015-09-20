    /*** IUnknown methods ***/
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj) PURE;            // +0x00
    STDMETHOD_(ULONG,AddRef) (THIS)  PURE;                                      // +0x04
    STDMETHOD_(ULONG,Release) (THIS) PURE;                                      // +0x08

    STDMETHOD(Compact)(THIS) PURE;                          // +0x0C
    STDMETHOD(CreateClipper)(THIS_ DWORD, LPDIRECTDRAWCLIPPER FAR*, IUnknown FAR * ) PURE;              // +0x10
    STDMETHOD(CreatePalette)(THIS_ DWORD, LPPALETTEENTRY, LPDIRECTDRAWPALETTE FAR*, IUnknown FAR * ) PURE;          // +0x14
    STDMETHOD(CreateSurface)(THIS_  LPDDSURFACEDESC, LPDIRECTDRAWSURFACE FAR *, IUnknown FAR *) PURE;               // +0x18
    STDMETHOD(DuplicateSurface)( THIS_ LPDIRECTDRAWSURFACE, LPDIRECTDRAWSURFACE FAR * ) PURE;                       // +0x1C
    STDMETHOD(EnumDisplayModes)( THIS_ DWORD, LPDDSURFACEDESC, LPVOID, LPDDENUMMODESCALLBACK ) PURE;                // +0x20
    STDMETHOD(EnumSurfaces)(THIS_ DWORD, LPDDSURFACEDESC, LPVOID,LPDDENUMSURFACESCALLBACK ) PURE;                   // +0x24
    STDMETHOD(FlipToGDISurface)(THIS) PURE;                                                             // +0x28
    STDMETHOD(GetCaps)( THIS_ LPDDCAPS, LPDDCAPS) PURE;                                                 // +0x2C
    STDMETHOD(GetDisplayMode)( THIS_ LPDDSURFACEDESC) PURE;                                             // +0x30
    STDMETHOD(GetFourCCCodes)(THIS_  LPDWORD, LPDWORD ) PURE;                                           // +0x34
    STDMETHOD(GetGDISurface)(THIS_ LPDIRECTDRAWSURFACE FAR *) PURE;                                     // +0x38
    STDMETHOD(GetMonitorFrequency)(THIS_ LPDWORD) PURE;                                     // +0x3C
    STDMETHOD(GetScanLine)(THIS_ LPDWORD) PURE;                                         // +0x40
    STDMETHOD(GetVerticalBlankStatus)(THIS_ LPBOOL ) PURE;                              // +0x44
    STDMETHOD(Initialize)(THIS_ GUID FAR *) PURE;                                       // +0x48
    STDMETHOD(RestoreDisplayMode)(THIS) PURE;                                           // +0x4C
    STDMETHOD(SetCooperativeLevel)(THIS_ HWND, DWORD) PURE;                             // +0x50
    STDMETHOD(SetDisplayMode)(THIS_ DWORD, DWORD,DWORD) PURE;                           // +0x54
    STDMETHOD(WaitForVerticalBlank)(THIS_ DWORD, HANDLE ) PURE;                         // +0x58

    /*** Added in the v2 interface ***/

    STDMETHOD(GetAvailableVidMem)(THIS_ LPDDSCAPS, LPDWORD, LPDWORD) PURE;              // +0x5C

    