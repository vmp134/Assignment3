1. Project Members
    - Samuel Habib smh389
    - Victor Peng vmp134

2. Testing Plan
    - Unit Tests (shellTest.c)
    - Integration Tests (./mysh) 
        - Interactive Mode   
            - "./crash" 
                - Confirmed output of "Terminated by signal 11: Segmentation fault"
            - "ls -l" 
                - Confirmed output of "-rwxr-x--- 1 vmp134 vmp134 41296 Apr 15 15:32 mysh" alongside other entries in the same directory. entries are the same as listed. 
            - "which ls" 
                - Confirmed output of "/usr/bin/ls"
        - Batch Mode
            - "./mysh shellTest.sh" 
                - Confirmed output of "hello"

3. Design Notes
    - 