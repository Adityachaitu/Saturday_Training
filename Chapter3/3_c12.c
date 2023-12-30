// P.ADITYA - CH.EN.U4CYS21055
#include<stdio.h>
    
int main(){
    
    int x, y;
    printf("Enter Coordinates x y: ");
    scanf("%d %d",&x,&y);

    if(x==0 && y==0){
        printf("\nThe Given Coordinates are of Origin.");
    }
    else if(x==0){
        printf("\nThe Given Coordinates lies on Y-axis.");
    }
    else if(y==0){
        printf("\nThe Given Coordinates lies on X-axis.");
    }
    else {
        printf("\nThe Given Coordinates neither lies on X or Y axis.");
    }
    return 0;
}