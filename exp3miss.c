/*
  Expt3-task1
  Module 2:control structures switch
  Aim:WAP to design a menu driven calculator using
      switch statement.
*/
#include <stdio.h>

int main() {
    float num1, num2, result;
    int mod_result;
    char operator;

    printf("\t\t\t*** Calculator ***\n\n");
    printf("\t Operation:\n");
    printf("\t\t +: Addition\n");
    printf("\t\t -: Subtraction\n");
    printf("\t\t *: Multiplication\n");
    printf("\t\t /: Division\n");
    printf("\t\t %%: Modulus\n");

    do {
        printf("Enter first operand: ");
        scanf("%f", &num1);
        printf("Enter second operand: ");
        scanf("%f", &num2);
        printf("Enter operation: ");
        scanf(" %c", &operator); // Note the space before %c to consume newline

        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("%.1f + %.1f = %.1f\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("%.1f - %.1f = %.1f\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("%.1f * %.1f = %.1f\n", num1, num2, result);
                break;
            case '/':
                if (num2 == 0) {
                    printf("Cannot divide by zero.\n");
                } else {
                    result = num1 / num2;
                    printf("%.1f / %.1f = %.1f\n", num1, num2, result);
                }
                break;
            case '%':
                if ((int)num2 == 0) {
                    printf("Cannot divide by zero for modulus.\n");
                } else {
                    mod_result = (int)num1 % (int)num2;
                    printf("%.0f %% %.0f = %d\n", num1, num2, mod_result);
                }
                break;
            default:
                printf("Invalid operator. Try again.\n");
                break;
        }

        printf("Continue? (Y/N): ");
        scanf(" %c", &operator); // Note the space before %c to consume newline
    } while (operator == 'Y' || operator == 'y');

    printf("Thank you for using the calculator.\n");
    return 0;
}
