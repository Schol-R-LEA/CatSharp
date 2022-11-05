#include "../include/examples.h"
#include "../include/lexer.h"

void CreateExample(char* exampleName, FILE* path) {
    FILE* file = fopen(path, "w");
    fputs(read_file("./examples/first.example.cat#"), file);
    fclose(file);
}