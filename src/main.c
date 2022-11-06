#include <stdio.h>
#include <stdlib.h>
#include "../include/printer.h"
#include "../include/lexer.h"
#include <string.h>

int main(int argc, char** argv) {
    if (strcmp(argv[1], "compile") == 0) {
        if (argc < 3) {
            print("Cat#", "Not enough arguments!");
            return -1;
        }
        char* content = read_file(argv[2]);

        if (!content) {
            return -1;
        }

        print("Cat#", content);

        free(content);
    } else if (strcmp(argv[1], "--help") == 0) {
        print("Cat#", "Commands:");
        print("Cat#", "cats compile <file path>");
        print("Cat#", "cats --help [command]");
    }
    
    return 0;
}