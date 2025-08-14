#include <stdio.h>

int main() {
    int num, originalNum, remainder, n = 0, result = 0, power, i;

    printf("Enter a number to check whether it is Armstrong number: ");
    scanf("%d", &num);

    originalNum = num;

    // Count number of digits
    while (originalNum != 0) {
        n++;
        originalNum /= 10;
    }

    originalNum = num;

    // Calculate sum of nth powers of digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        power = 1;
        for (i = 0; i < n; i++) {
            power *= remainder;
        }
        result += power;
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}