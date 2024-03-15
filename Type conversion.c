
#include <stdio.h>

int main() {
    int i = 0;
    int j = (int)(float)i;

    while (i == j) {
        i++;
        j = (int)(float)i;
    }

    printf("i=%d\nj=%d\n", i, j);
    return 0;
}
