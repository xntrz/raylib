/**********************************************************************************************
*
*   rcore_null - Functions stubs
*
*   PLATFORM: NULL
*       - For all platforms to use SDL2 instead
*
**********************************************************************************************/

//----------------------------------------------------------------------------------
// Global Variables Definition
//----------------------------------------------------------------------------------
extern CoreData CORE;                   // Global CORE state context
extern bool isGpuReady;                 // Flag to note GPU has been initialized successfully


void OpenURL(const char* url)
{
    (void)url;
};


int SetGamepadMappings(const char* mappings)
{
    (void)mappings;
    return -1;
};


void SetGamepadVibration(int gamepad, float leftMotor, float rightMotor, float duration)
{
    (void)gamepad;
    (void)leftMotor;
    (void)rightMotor;
    (void)duration;
};


void SetMousePosition(int x, int y)
{
    (void)x;
    (void)y;
};


void SetMouseCursor(int cursor)
{
    (void)cursor;
};


const char* GetKeyName(int key)
{
    (void)key;
    return "";
}


double GetTime(void)
{
    return 0.0;
};


void SwapScreenBuffer(void)
{
    ;
};


void PollInputEvents(void)
{
    ;
};


int InitPlatform(void)
{
    int w = CORE.Window.screen.width;
    int h = CORE.Window.screen.height;

    CORE.Window.currentFbo.width = w;
    CORE.Window.currentFbo.height = h;
    CORE.Window.display.width = w;
    CORE.Window.display.height = h;

    SetupFramebuffer(w, h);

    return 0;
};


void ClosePlatform(void)
{
    ;
};


bool WindowShouldClose(void)
{
    return true;
};


void ToggleFullscreen(void)
{
    ;
};


void ToggleBorderlessWindowed(void)
{
    ;
};


void MaximizeWindow(void)
{
    ;
};


void MinimizeWindow(void)
{
    ;
};


void RestoreWindow(void)
{
    ;
};


void SetWindowState(unsigned int flags)
{
    (void)flags;
};


void ClearWindowState(unsigned int flags)
{
    (void)flags;
};


void SetWindowIcon(Image image)
{
    (void)image;
};


void SetWindowIcons(Image *images, int count)
{
    (void)images;
    (void)count;
};


void SetWindowTitle(const char *title)
{
    (void)title;
};


void SetWindowPosition(int x, int y)
{
    (void)x;
    (void)y;
};


void SetWindowMonitor(int monitor)
{
    (void)monitor;
};


void SetWindowMinSize(int width, int height)
{
    (void)width;
    (void)height;
};


void SetWindowMaxSize(int width, int height)
{
    (void)width;
    (void)height;
};


void SetWindowSize(int width, int height)
{
    (void)width;
    (void)height;
};


void SetWindowOpacity(float opacity)
{
    (void)opacity;
};


void SetWindowFocused(void)
{
    ;
};


void *GetWindowHandle(void)
{
    return 0;
};


Vector2 GetWindowPosition(void)
{
    Vector2 temp;
    temp.x = 0.0f;
    temp.y = 0.0f;
    return temp;
};


Vector2 GetWindowScaleDPI(void)
{
    Vector2 temp;
    temp.x = 1.0f;
    temp.y = 1.0f;
    return temp;
};


int GetMonitorCount(void)
{
    return 0;
};


int GetCurrentMonitor(void)
{
    return -1;
};


int GetMonitorWidth(int monitor)
{
    (void)monitor;
    return 0;
};


int GetMonitorHeight(int monitor)
{
    (void)monitor;
    return 0;
};


int GetMonitorPhysicalWidth(int monitor)
{
    (void)monitor;
    return 0;
};


int GetMonitorPhysicalHeight(int monitor)
{
    (void)monitor;
    return 0;
};


int GetMonitorRefreshRate(int monitor)
{
    (void)monitor;
    return 0;
};


Vector2 GetMonitorPosition(int monitor)
{
    (void)monitor;    
    Vector2 temp;
    temp.x = 0.0f;
    temp.y = 0.0f;
    return temp;
};


const char *GetMonitorName(int monitor)
{
    (void)monitor;
    return 0;
};


void SetClipboardText(const char *text)
{
    (void)text;
};


const char *GetClipboardText(void)
{
    return 0;
};


void ShowCursor(void)
{
    ;
};


void HideCursor(void)
{
    ;
};


void EnableCursor(void)
{
    ;
};


void DisableCursor(void)
{
    ;
};
