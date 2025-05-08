#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char vowels[] = {'a', 'e', 'i', 'o', 'u'};

int main(int argc, char *argv[]) {
  // printf("%d\n", argc);

  for (int iter = 1; iter < argc; iter++) {
    // printf("Arg %d: %s\n", iter, argv[iter]);

    char *string = argv[iter];
    int len = strlen(string);

    for (int striter = 0; striter < len; striter++) {
      for (int vowiter = 0; vowels[vowiter]; vowiter++) {
        // printf("%c", vowels[vowiter]);
        if (string[striter] == vowels[vowiter]) {
          // printf("Found a vowel, %c is in %s \n", vowels[vowiter], string);
          string[striter] = ' ';
        }
      }
    }
    printf("%s ", string);
  }

  printf("\n");

  return EXIT_SUCCESS;
}
