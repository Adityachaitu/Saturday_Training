#include<stdio.h>
#include<math.h>
    
int main(){
    
    int num;
    int new_num=0;
    printf("Enter 5 digit number: ");
    scanf("%d",&num);

    int place = 4;

    while(num!=0){
        int n = num%10;
        new_num+=(n*pow(10,place));
        place--;
        num/=10;
    }

    printf("\nThe Reverse of given Number is %d",new_num+1);
    return 0;
}