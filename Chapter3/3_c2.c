#include<stdio.h>
    
int main(){
    
    int inp;
    printf("Enter an integer input: ");
    scanf("%d",&inp);

    if(inp%2==0){
        printf("\n%d is a even number.",inp);
    }
    else{
        printf("\n%d is a odd number.",inp);
    }
    return 0;
}