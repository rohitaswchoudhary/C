/*Program to calculate Sum, Product of all elements.*/
 
#include <stdio.h>
 
/** funtion :   readArray() 
    input   :   arr ( array of integer ), size 
    to read ONE-D integer array from standard input device (keyboard). 
**/
void readArray(int arr[], int size) 
{ 
    int i =0; 
 
    printf("\nEnter elements : \n"); 
    for(i=0; i<size; i++) 
    { 
        printf("Enter arr[%d] : ",i); 
        scanf("%d",&arr[i]); 
    } 
} 
 
 
/** funtion :   getSum() 
    input   :   arr ( array of integer ), size 
    to get sum of all elements of array. 
**/
int getSum(int arr[], int size) 
{ 
    int i=0,sum=0; 
 
    for(i=0; i<size; i++) 
    { 
        sum = arr[i]; 
    } 
    return sum; 
} 
 
/** funtion :   getProduct() 
    input   :   arr ( array of integer ), size 
    to get product of all elements of array. 
**/
int getProduct(int arr[], int size) 
{ 
    int i=0,product=1; 
 
    for(i=0;i < size; i++) 
    { 
        product *= arr[i]; 
    } 
      
    return product; 
} 
 
int main() 
{ 
    int arr[5]; 
 
    readArray(arr,5); 
      
    printf("\nSum of array is     : %d"  , getSum    (arr,10)   ); 
    printf("\nProduct of array is : %d\n", getProduct(arr,10)   ); 
 
    return 0; 
}
