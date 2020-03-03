#include <stdio.h>

int main() {
    int a, b, c;
    int diff;
    scanf("%d %d %d", &a, &b, &c);
    diff = c - b;
    if (diff <= 0)
        printf("-1\n");
    else
        printf("%d\n", a / diff + 1);
    return 0;
}
