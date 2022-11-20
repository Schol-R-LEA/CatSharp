#include <stdio.h>
#include "include/lexer.h"
#include "include/parser.h"
#include "include/visitor.h"

int main(int argc, char* argv) {
    lexer_T* lexer = init_lexer(
        "var name = \"Cat's are the best product that you can buy on internet!\";\n"
        "var yt = \"Subscribe to `Olex7iMatix`\";\n"
        "log(name, \"kot\", yt);\n"
    );

    parser_T* parser = init_parser(lexer);
    AST_T* root = parser_parse(parser);
    visitor_T* visitor = init_visitor();
    visitor_visit(visitor, root);

    return 0;
}