#include "mysh.h"

//Parsing commands
void parser(char *line) {
    
}

//Executing commands
int execute() {

}

//Main
int main(int argc, char **argv) {
    //Flags for our parsing loop
    int inputFD = 0;            //The File Descriptor we're using, either 0 for terminal or anything else
    int isInteractive = 0;      //If we are in Interactive (1) or Batch(0)

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
        if (isatty(STDIN_FILENO)) isInteractive = 1;
        else isInteractive = 0;
    }
    else return EXIT_FAILURE;
    
    //Entry message, as per p3.pdf
    if (isInteractive) printf("Welcome to my shell!\n");

    //Setup
    char line[BUFFERLENGTH];
    size_t bytesRead = 0;
    int pos = 0;
    char c;

    //Parsing loop
    while (1) {
        //Interactive mode checks
        if (isInteractive) {

        }

        //Reading & Parsing
        /*
        This reads until a newline char, at which point it breaks
        It also terminates the line, so we have a full line command
        We also check if nothing is read at all
        */
        pos = 0;
        while ((bytesRead = read(inputFD, &c, 1)) > 0) {
            if (c == '\n') break;
            if (pos < BUFFERLENGTH-1) {
                line[pos] = c;
                pos++;
            }
        }
        line[pos] = '\0';
        if (pos == 0 && bytesRead == 0) break;
        parser(line);


        //Execution

    }

    //Exit message, as per p3.pdf
    if (isInteractive) printf("Exiting my shell.\n");

    return EXIT_SUCCESS;
}