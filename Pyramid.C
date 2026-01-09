#include <stdio.h>

int main() {
    int i, height = 5;

    for(i = 1; i <= height; i++) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}