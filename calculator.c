#include <stdio.h>
int main()
{
    int a, b, sum, sub, mul, div;
    char operand;
    printf("Enter operand: ");
    scanf("%c", &operand);
    printf("Enter operators: ");
    scanf("%d %d", &a, &b);
    switch (operand)
    {
    case '+':
        sum = a + b;
        printf("Sum is: %d", sum);
        break;
    case '-':
        sub = a - b;
        printf("Sub is: %d", sub);
        break;
    case '*':
        mul = a * b;
        printf("Mul is: %d", mul);
        break;
    case '/':
        if (b != 0)
        {
            div = a / b;
            printf("Div is: %d", div);
        }
        else
        {
            printf("Error: Division by zero\n");
        }
        break;
    default:
        printf("Enter valid operator");
    }
    return 0;
}