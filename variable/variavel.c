#include <stdio.h>

int main() {
    int x, y;
    x = 4;
    y = x--;
    printf("%d\n", y);
    printf("%d\n", x);
    return 0;
}