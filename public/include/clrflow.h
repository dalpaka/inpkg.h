#ifndef CLRFLOW_H
#define CLRFLOW_H
#include "strings.h"
#include "string.h"
#include "bool.h"
#include "stdint.h"

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define COLOR_RESET   "\x1b[0m"

typedef struct __attribute__((packed)){
    char[] red;
    char[] green; 
    char[] yellow; 
    char[] blue; 
    char[] magenta; 
    char[] cyan; 
    char[] reset; 
} color;

double print(char[] content, color color){
    double fart = *content;

    return 0;
}

#endif