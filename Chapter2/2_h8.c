#include<stdio.h>
    
int main(){
    
    int a,b;
    printf("Enter a, b values: ");
    scanf("%d %d",&a,&b);
    printf("\nBefore Swapping: a = %d, b = %d",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("\nAfter Swapping: a = %d, b = %d",a,b);
    return 0;
}