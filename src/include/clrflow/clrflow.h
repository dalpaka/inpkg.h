#ifndef CLRFLOW_H
#define CLRFLOW_H
#include "strings.h"
#include "string.h"
#include "stdbool.h"
#include "stdint.h"
#include "stdio.h"
#include "malloc.h"

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define COLOR_RESET   "\x1b[0m"

typedef struct __attribute__((packed)){
    char green[sizeof(GREEN)];
    char red[sizeof(RED)];
    char blue[sizeof(BLUE)];
} palette;

palette colors;


void red(char red_content[]) {
    printf(RED     "%s"     COLOR_RESET "\n", red_content);
}

void green(char green_content[]) {
    printf(GREEN   "%s"     COLOR_RESET "\n", green_content);
}

void blue(char blue_content[]) {
    printf(GREEN   "%s"     COLOR_RESET "\n", blue_content);
}



#endif
