#include <limits.h>
#include <stdio.h>
int test(int a) {
    return a + 1 > a;
}

int main(int argc, char *argv[]) {
    int a = INT_MAX;
    printf(test(a) ? "%i is greater than %i\n" : "%i is less than %i\n", a + 1, a);
    return 0;
}
