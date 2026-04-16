1. Project Members
    - Samuel Habib smh389
    - Victor Peng vmp134

2. Testing Plan
    - Unit Tests (shellTest.c)
        - read_line() 
            - Tested read_line()'s correctness and input buffer to see if read string was same as command in shellTest1.sh
        - tokenize()
            - Tests if tokenize() gets correct amount of tokens, and that the read tokens in tokens[] are correct
        - parse_job()
            - 
        - is_builtin()
            - Tested all four built-in commands to see if they are equal to BUILTIN_CD, BUILTIN_PWD, etc.
        - resolve_path()
            - 
        - execute_command()
            - 
        - execute_job()
            - 
    - Integration Tests (./mysh) 
        - Interactive Mode   
            - "./crash" 
                - Confirmed output of "Terminated by signal 11: Segmentation fault"
            - "ls -l" 
                - Confirmed output of "-rwxr-x--- 1 vmp134 vmp134 41296 Apr 15 15:32 mysh" alongside other entries in the same directory. entries are the same as listed. 
            - "which ls" 
                - Confirmed output of "/usr/bin/ls"
            - "pwd"
                - Confirmed output of "/common/home/vmp134/RutgersCoursework/cs214/Assignments/Assignment3"
            - "exit"
                - Confirmed exited out of mysh
        - Batch Mode
            - "./mysh shellTest1.sh" 
                - Confirmed output of "hello"
            - "./mysh shellTest2.sh"

3. Design Notes
    - 