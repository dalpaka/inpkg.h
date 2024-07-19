# Getting started

To get started you have to download the latest source code (Precompiled binaries for cfgl_win coming soon...).

## Installation

##### Will it take much of my precious storage and RAM?

Clrflow is a minimal header-only library which means you wont need dll's or .lib files.  
So the total size of clrflow is about *~100kb* and even less!


## File Tree
```bash
.
├── CODE_OF_CONDUCT.md
├── LICENSE
├── Makefile
├── README.md
├── SECURITY.md
├── docs
│   ├── docs
│   │   ├── about.md
│   │   ├── getting_started.md
│   │   └── index.md
│   └── mkdocs.yml
├── main.c
└── src
    ├── include
    │   ├── GLFW
    │   │   ├── glfw3.h
    │   │   └── glfw3native.h
    │   └── clrflow
    │       ├── build.bat
    │       ├── cfgl_win.h
    │       ├── clrflow.c
    │       └── clrflow.h
    └── lib
        ├── glfw3.dll
        ├── libglfw3.a
        └── libglfw3dll.a
```

#### First 

Simply run 

```
git clone https://github.com/dalpaka/clrflow.h
```
#### Then

Add the public/include directory to your include path which is ```C:\MinGW\include``` for Windows and ```/usr/include``` for Linux. (I already have Windows and Linux vscode C/C++ configs in the '.vscode' folder)

### Important notice

Must have MinGW installed with gcc for Windows config

(Linux is not that important because gcc should usually be preinstalled for the vast majority of distros)

## Quickstart

#### Recommended option

If you've followed the above steps and you can now include  
Clrflow.h without issues like so ```#include "clrflow/clrflow.h"```

#### Easier option 

You can directly interact within the 'main.c' file assuming you've downloaded the source code.

## Reference

#### Functions

- red("hi, mom in red");
- green("hi, mom in green");
- blue("hi, mom in blue");

## Note

###### This project is still in very early daily developement so dont get mad at me for not having the most complete framework please 
