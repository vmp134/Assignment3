#include "mysh.h"

//Parsing commands
int parser() {

}

//Main
int main(int argc, char **argv) {
    //Flags for our parsing loop
    int inputFD = 0;
    int isInteractive = 0;

    //Checking flags
    /*
        If argc == 2, always run batch mode
            If open() returns -1, the file failed to open
        If there is no arg, check stdin with isatty()
        If too many args, return fail
    */
    if (argc == 2) {
        inputFD = open(argv[1], O_RDONLY);
        if (inputFD < 0) {
            perror("Error opening batch file");
            return EXIT_FAILURE;
        }
        isInteractive = 0;
    }
    else if (argc == 1){
        if (isatty(STDIN_FILENO)) {
            isInteractive = 1;
            printf("Welcome to my shell!");
        }
        else isInteractive = 0;
    }
    else return EXIT_FAILURE;
    
    //Parsing loop
    



    if (isInteractive) printf("Exiting my shell.");
    return EXIT_SUCCESS;
}