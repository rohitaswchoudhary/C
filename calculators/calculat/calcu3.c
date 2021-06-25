#include <stdio.h>

int main()
{

    char exp[100];
    char op;
    int op1 = 0;
    int op2 = 0;
    int i = 0;

    printf("Enter Expression:");
    scanf("%s", &exp);

    while (*(exp + i) != '\0')
    {

        if (i == 0)
            op1 = *(exp + i++) - '0';
        op = *(exp + i++) - '0';
        op2 = *(exp + i++) - '0';

        switch (op)
        {

        case '+':
            op1 = op1 + op2;
            break;

        case '-':
            opt1 = op1 - op2;
            break;

        case '*':
            opt1 = opt1 * op2;
            break;

        case '/':
            opt1 = opt1 / opt2;
            break;
        }

        printf("%d\n", opt1);

        return (1);
    }
}