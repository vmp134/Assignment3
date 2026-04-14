CC     = gcc
CFLAGS = -Wall -Wextra -g

SRCS = main.c input.c tokenizer.c resolve.c
OBJS = $(SRCS:.c=.o)

mysh: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c mysh.h
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) mysh
