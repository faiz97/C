#include <stdio.h>

int main() {
    long nc;
    int c;

    nc = 0;
    while((c = getchar()) != EOF) {
        putchar(c);
        // printf("\n");
        nc++;
        printf("%ld\n", nc);
    }
}