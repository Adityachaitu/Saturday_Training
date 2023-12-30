#include<stdio.h>
#include<math.h>
    
int main(){
    
    int inp;
    printf("Enter a 5 digit number: ");
    scanf("%d",&inp);

    int place = 4;
    int copy = inp;
    int reverse = 0;

    while(inp!=0){
        reverse+=((inp%10)*pow(10,place));
        inp/=10;
        place--;
    }

    reverse+=1;

    if(reverse==copy){
        printf("\n The Reverse and the Original are the same.");
    }
    else {
        printf("\n The Reverse and the Original are not the same.");
    }

    return 0;
}