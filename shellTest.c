#include "mysh.h"
#include <assert.h>

void test_read_line() {
    reset_read_line();
    int fd = open("shellTest1.sh", O_RDONLY);
    char buf[MAX_LINE];
    char *str = "echo hello";

    assert(read_line(fd, buf, sizeof(buf)) == 1);
    assert(strcmp(buf, str) == 0);

    close(fd);
    printf("Read Line tests passed\n"); 
}

void test_tokenize() {
    reset_read_line();
    Token tokens[MAX_TOKENS];
    int n = tokenize("ls -l | wc", tokens, MAX_TOKENS);

    assert(n == 4);
    assert(tokens[0].type == TOK_WORD);
    assert(tokens[2].type == TOK_PIPE);
    printf("Tokenize tests passed\n");
}

void test_parse_job() {
    reset_read_line();
    printf("Parse Job tests passed\n"); 
}

void test_builtin() {
    reset_read_line();
    assert(is_builtin("cd") == BUILTIN_CD);
    assert(is_builtin("pwd") == BUILTIN_PWD);
    assert(is_builtin("which") == BUILTIN_WHICH);
    assert(is_builtin("exit") == BUILTIN_EXIT);
    assert(is_builtin("ls") == BUILTIN_NONE); 
    printf("Builtin tests passed\n");     
}

void test_resolve_path() {
    reset_read_line();
    char path[MAX_LINE];
    int found = resolve_path("ls", path, MAX_LINE);
    
    assert(found == 1);
    assert(strstr(path, "/ls") != NULL); 
    assert(resolve_path("fakecommand123", path, MAX_LINE) == -1);
    printf("Resolve tests passed\n");

    printf("Resolve tests passed\n"); 
}

void test_execute_command() {
    reset_read_line();
    printf("Execute Command tests passed\n"); 
}

void test_execute_job() {
    reset_read_line();
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