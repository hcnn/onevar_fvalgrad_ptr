
CC ?= gcc
CFLAGS += -std=c99 -Wall -Wextra -Ideps

.DEFAULT_GOAL := validate

test: test.o 

demo: demo.o

validate: test
	./$<

showcase: demo
	./$<

clean:
	rm -f test.o test demo.o demo

.PHONY: showcase clean
