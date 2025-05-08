main: main.c
	clang -std=c23 -Wall -Wextra -Werror -g -O0 -o ./main main.c
	./main the quick brown fox jumps over the lazy dog
clean:
	rm main
grind: main
	valgrind -s --leak-check=full ./main the quick brown fox jumps over the lazy dog
