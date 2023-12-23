#include<stdio.h>
    
int main(){
    
    int num;
    int sum = 0;
    printf("Enter 5 digit number: ");
    scanf("%d",&num);

    while(num!=0){
        sum+=(num%10);
        num = num/10;
    }

    printf("\nThe Sum of Digits: %d",sum);
    return 0;
}