1. Project Members
    Samuel Habib smh389, Victor Peng vmp134

2. Testing Plan
    - Unit Tests (shellTest.c)
    - Integration Tests (./mysh) 
        - Interactive Mode   
            - Ran "./crash" in mysh and confirmed output of "Terminated by signal 11: Segmentation fault"
            - Ran "ls -l" in mysh and confirmed output of "-rwxr-x--- 1 vmp134 vmp134 41296 Apr 15 15:32 mysh" alongside other entries in the same directory. entries are the same as listed. 
            - Ran "which ls" in mysh and confirmed output of "/usr/bin/ls"
        - Batch Mode
            - Ran "./mysh shellTest.sh" and confirmed output of "hello"

3. Design Notes
    - 