#include "include/io.h"
#include <stdio.h>
#include <stdlib.h>

char* get_file_content(const char* filename) {
    FILE* fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Couldn't open file!");
        return NULL;
    }
}