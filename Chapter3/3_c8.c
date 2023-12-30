// P.ADITYA - CH.EN.U4CYS21055
#include<stdio.h>
    
int main(){
    
    int inp;
    printf("Enter a integer: ");
    scanf("%d",&inp);

    if(inp<0){
        printf("\nThe Absolute Value is %d",-(inp));
    }
    else {
        printf("\nThe Absolute Value is %d",inp);
    }
    return 0;
}