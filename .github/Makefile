CC = gcc
CFLAGS = -Wall -I c-calculator/src
APP_SRC = c-calculator/src/calculator.c c-calculator/src/main.c
TEST_SRC = c-calculator/src/calculator.c c-calculator/tests/test_calculator.c

all: calculator

calculator: $(APP_SRC)
	$(CC) $(CFLAGS) $(APP_SRC) -o $@

test: test_calculator

test_calculator: $(TEST_SRC)
	$(CC) $(CFLAGS) $(TEST_SRC) -o $@
	./$@

clean:
	rm -f calculator test_calculator

.PHONY: all test clean