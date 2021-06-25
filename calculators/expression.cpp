#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    char v[20];
    int sign, n, i;
    float result, nr, aux, c;
    while (1)
    {
        cout << "insert the expression:" << endl;
        scanf("%s", v);
        n = strlen(v);
        result = 0, nr = 0, aux = 0, c = 0;
        sign = 1, n, i = 0;
        while (i < n) //loops only once through the array
        {
            while (v[i] >= '0' && v[i] <= '9') //builds the number
            {
                nr = nr * 10 + (v[i] - '0');
                i++;
            }
            switch (v[i]) //identifies the operations
            {
            case '+':
            {

                if (v[i - 1] != '*' && v[i - 1] != '/') //if a*-b or a/-b occurs it does nothing
                {
                    if (c == 1) // * was found before: 2*2+1
                    {
                        result += aux * nr * sign; // updates the end result
                        aux = 0;                   //aux is reseted
                    }
                    else if (c == 2) // / was found before: 2/2+1
                    {
                        result += aux / nr * sign;
                        aux = 0;
                    }
                    else
                    {
                        result += nr * sign;
                    }
                    nr = 0;
                    c = 0;
                }

                sign = 1;

                break;
            }
            case '-':
            {
                if (!(v[i - 1] == '*') && !(v[i - 1] == '/'))
                {
                    if (c == 1)
                    {
                        result += aux * nr * sign;
                        aux = 0;
                    }
                    else if (c == 2)
                    {
                        result += aux / nr * sign;
                        aux = 0;
                    }
                    else
                    {
                        result += nr * sign;
                    }
                    c = 0;
                    nr = 0;
                }
                sign = -1;
                break;
            }
            case '*':
            {
                if (!aux)
                {
                    aux = nr * sign; // aux hold the result from * and / operations
                }
                else if (c == 2)
                {
                    aux /= nr * sign;
                }
                else
                {
                    aux *= nr * sign;
                }
                c = 1;
                nr = 0;
                sign = 1;
                break;
            }
            case '/':
            {
                if (!aux)
                {
                    aux = nr * sign;
                }
                else if (c == 1)
                {
                    aux *= nr * sign;
                }
                else
                {
                    aux /= nr * sign;
                }
                c = 2;
                nr = 0;
                sign = 1;
                break;
            }
            default:;
            }
            if (i >= (n - 1)) // updates the result because there is no + or - at the end of the string.
            {
                if (c == 1)
                {
                    result += aux * nr * sign;
                }
                else if (c == 2)
                {
                    result += aux / nr * sign;
                }
                else
                {
                    result += nr * sign;
                }
            }
            i++;
        }
        cout << "=" << result << endl;
        system("pause");
        system("cls");
    }
}