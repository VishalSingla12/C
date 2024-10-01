#include <stdio.h>
#include <math.h> 

int main() {
    char function;
    double num1, num2, result;
    printf("Enter a function (+, -, *, /, s for sin, c for cos, t for tan): ");
    scanf(" %c", &function);

    if (function == 's' || function == 'c' || function == 't') {
        printf("Enter the angle in rad: ");
        scanf("%lf", &num1);
        switch (function) {
            case 's':
                result = sin(num1);
                printf("sin(%.2lf) = %.2lf\n", num1, result);
                break;
            case 'c':
                result = cos(num1);
                printf("cos(%.2lf) = %.2lf\n", num1, result);
                break;
            case 't':
                result = tan(num1);
                printf("tan(%.2lf) = %.2lf\n", num1, result);
                break;
            default:
                printf("Error function is not correct.\n");
                break;
        }
    } else {
        
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);
        switch (function) {
            case '+':
                result = num1 + num2;
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
                } else {
                    printf("infinte value .\n");
                }
                break;
            default:
                printf("Error function is not correct.\n");
                break;
        }
    }

    return 0;
}
