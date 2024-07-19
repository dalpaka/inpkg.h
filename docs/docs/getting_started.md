# Getting started

To get started you have to download the latest source code (Precompiled binaries for cfgl_win coming soon...).

## Installation

##### Will it take much of my precious storage and RAM?

Clrflow is a minimal header-only library which means you wont need dll's or .lib files.  
So the total size of clrflow is about *~100kb* and even less!

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
