#include <stdio.h>

int main() {

    int n, i, sum=0;

    printf("Enter the range of natural numbers you want to get sum:  ");
    scanf("%d", &n);

    for (i=1; i <= n; i++) {
        
        sum += i;

        if (i ==1){
            printf("first natural number is 1\n");
        }
        else{
        printf("sum of first %d natural number(s) is:  %d\n", i, sum);
        }
    }
    // return 0;

    printf("\n\nSum of first %d natural number(s) is = %d",n,sum);
    
    // return 0;
}

