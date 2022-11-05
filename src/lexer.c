#include "../include/lexer.h"
#include <stdlib.h>

char* read_file(const char* path) {
    FILE* file = fopen(path, "r");

    if (!file) {
        print("lexer", "Couldn't open file");
        return NULL;
    }

    fseek(file, 0, SEEK_END);
    int size = ftell(file);
    fseek(file, 0, SEEK_SET);

    char* buf = (char*)malloc(sizeof(char) * (size + 1));
    if (!buf) {
        print("lexer", "Couldn't allocate memory");
        return NULL;
    }
    fread(buf, 1, size, file);
    buf[size] = '\0';
    fclose(file);

    return buf;
}