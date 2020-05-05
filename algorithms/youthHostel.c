#include <stdio.h>

int main() {
    int arrival;
    scanf("%d", &arrival);
    int base = 10;
    int penalty = 5 * arrival;
    int total = base + penalty;
    if(total <= 53) {
        printf("%d\n", total);
        return 0;
    }
    printf("%d\n", 53);
}