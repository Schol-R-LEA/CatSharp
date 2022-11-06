#ifndef CATS_TOKENS
#define CATS_TOKENS

struct {
    char* c;
    enum {
        TOKEN_ID,
        TOKEN_COMMENT
    } type;
} t_Tokens;

#endif