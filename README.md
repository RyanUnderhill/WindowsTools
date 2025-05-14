# WindowsTools

Useful code I've written to solve various problems I've seen. I decided to collect it together and post it on github for others to hopefully use.

## DetermineLoadLibraryError

Ever called LoadLibrary and wanted to know what dependent DLL is missing? Call this function and it'll tell you exactly what is wrong:

```c++
std::string DetermineLoadLibraryError(const char* filename)
```

Will give an error like:

`Error loading a.dll which depends on b.dll which is missing. (Error 126: "The specified module could not be found.")`
