CC = gcc

CFLAGS = -gdwarf-4 -ggdb3 -O0 -std=c11 \
         -Wall -Werror -Wextra \
         -Wno-sign-compare \
         -Wno-unused-parameter -Wno-unused-variable -Wno-unused-but-set-variable \
         -Wshadow

LDLIBS = -lcrypt -lcs50 -lm

EXE = test

SRCS = test.c
OBJS = $(SRCS:.c=.o)

$(EXE): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LDLIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -f $(EXE) $(OBJS)
