#include <stdio.h>

int main() {
    int num1, num2, i, hcf;
    scanf("%d", &num1);
    scanf("%d", &num2);
    int min = (num1 < num2) ? num1 : num2;
    for (i = 1; i <= min; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }
    printf("%d", hcf);

    return 0;
}