# Project README

## Overview
This project is a C/C++ application that demonstrates the use of version control features, such as creating branches and updating branch information. The application also includes a simple test module to showcase basic input/output operations.

## Features
- Branch creation and update functionalities
- Input/output operations using standard library functions
- Cross-platform build support (Linux, Windows, Wine, WebAssembly)

## Project Structure
```
Cmd_VCtl/
├── build/              # .exe files produced by Main.c
├── src/                # Source code directory
│   ├── Main.c          # Entry point of the application
│   └── VCtl.h          # Header file for version control functions
├── Makefile.linux      # Linux Build configuration
├── Makefile.windows    # Windows Build configuration
├── Makefile.wine       # Wine Build configuration
└── Makefile.web        # Emscripten Build configuration
```

## Prerequisites
- C/C++ Compiler and Debugger (GCC, Clang)
- Make utility
- Standard development tools

## Build & Run
### Linux
To build the project for Linux:
```sh
cd Cmd_VCtl/
make -f Makefile.linux all
```
To run the application:
```sh
./build/Main
```

### Windows
To build the project for Windows:
```cmd
cd Cmd_VCtl\
make -f Makefile.windows all
```
To run the application:
```cmd
build\Main.exe
```

### Wine
To build the project for cross-compilation on Linux to Windows using Wine:
```sh
cd Cmd_VCtl/
make -f Makefile.wine all
```
To run the application in Wine:
```sh
WINEPREFIX=~/wine64 WINEARCH=win64 wine build/Main.exe
```

### WebAssembly (Emscripten)
To build the project for WebAssembly:
```sh
cd Cmd_VCtl/
make -f Makefile.web all
```
To run the application using `wasmtime`:
```sh
wasmtime build/Main.wasm
```