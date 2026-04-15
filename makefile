CC     = gcc
CFLAGS = -Wall -Wextra -g

SRCS = mysh.c input.c token.c resolve.c execute.c
OBJS = $(SRCS:.c=.o)

mysh: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c mysh.h
	$(CC) $(CFLAGS) -c -o $@ $<

crash: crash.c
	$(CC) $(CFLAGS) -o crash crash.c

clean:
	rm -f $(OBJS) mysh
