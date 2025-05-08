main: main.c
	clang -std=c23 -Wall -Wextra -Werror -g -O0 -o ./build/main main.c
	./build/main the quick brown fox jumps over the lazy dog
clean:
	rm build/main
grind: main
	valgrind -s --leak-check=full ./build/main the quick brown fox jumps over the lazy dog
