CC     = gcc
CFLAGS = -Wall -Wextra -g

SRCS = mysh.c input.c token.c resolve.c execute.c
OBJS = $(SRCS:.c=.o)

mysh: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c mysh.h
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) mysh
