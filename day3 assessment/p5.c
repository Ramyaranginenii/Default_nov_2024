#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num; 
    }

    while (num > 0) {
        digit = num % 10; 
        if (digit % 2 == 0) { 
            sum += digit; 
        }
        num = num / 10; 
    }
    printf("The sum of even digits is: %d\n", sum);
    
    return 0;
}