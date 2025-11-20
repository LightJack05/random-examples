#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
  char **foo = calloc(sizeof(char *), 20 * 1000);

  for (int i = 0; i < 20 * 1000; i++) {
    foo[i] = calloc(sizeof(char *), 20 * 1000);
  }

  for (int i = 0; i < 20 * 1000; i++) {
    for (int j = 0; j < 20 * 1000; j++) {
      foo[j][i] = foo[j][i] * 2;
    }
  }
  printf("%d", foo[0][0]);
}
