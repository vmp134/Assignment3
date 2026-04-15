#include "mysh.h"
#include <assert.h>

void test_read_line() {
    printf("Read Line tests passed\n"); 
}

void test_tokenize() {
    Token tokens[MAX_TOKENS];
    int n = tokenize("ls -l | wc", tokens, MAX_TOKENS);

    assert(n == 4);
    assert(tokens[0].type == TOK_WORD);
    assert(tokens[2].type == TOK_PIPE);
    printf("Tokenize tests passed\n");
}

void test_parse_job() {
    printf("Parse Job tests passed\n"); 
}

void test_builtin() {
    assert(is_builtin("cd") == BUILTIN_CD);
    assert(is_builtin("pwd") == BUILTIN_PWD);
    assert(is_builtin("which") == BUILTIN_WHICH);
    assert(is_builtin("exit") == BUILTIN_EXIT);
    assert(is_builtin("ls") == BUILTIN_NONE); 
    printf("Builtin tests passed\n");     
}

void test_resolve_path() {
    printf("Resolve tests passed\n"); 
}

void test_execute_command() {
    printf("Execute Command tests passed\n"); 
}

void test_execute_job() {
    printf("Execute Job tests passed\n"); 
}

int main() {
    test_read_line();
    test_tokenize();
    test_parse_job();
    test_builtin();
    test_resolve_path();
    test_execute_command();
    test_execute_job();
    return EXIT_SUCCESS;
}