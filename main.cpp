#include <windows.h>
#include <memory>
#include <string>

std::string DetermineLoadLibraryError(const char* filename);

// WinMain
int WINAPI WinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, LPSTR /*lpCmdLine*/, int /*nCmdShow*/) {

  // DLL Load error test
  HMODULE hModule = LoadLibrary("example.dll");
  if (!hModule) {
    std::string error = DetermineLoadLibraryError("example.dll");
    // Example errors:
    // Error loading "example.dll" which is missing. (Error 126: The specified module could not be found.)
    // If example.dll was found but a dependency was missing:
    // Error loading "example.dll" which depends on "something.dll" which is missing. (Error 126: The specified module could not be found.)
    MessageBoxA(NULL, error.c_str(), "Error", MB_OK);
    return 1;
  }
  return 0;
}
