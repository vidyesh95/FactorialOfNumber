#include <stdio.h>

int main() {
    char ans = 'n';
    do {
        int fact = 1, num;
        printf("Enter a number :");
        scanf(" %d", &num);
        for (int i = 1; i <= num; i++) {
            fact = fact * i;
        }
        printf("Factorial of %d is : %d", num, fact);
        printf("\nDo you want to get fibonacci series again (y/n)");
        scanf(" %c", &ans);
    } while(ans == 'y');
    return 0;
}