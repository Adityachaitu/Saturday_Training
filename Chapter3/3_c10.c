// P.ADITYA - CH.EN.U4CYS21055
#include<stdio.h>
    
int main(){
    
    float x1,y1,x2,y2,x3,y3;
    printf("Enter x1 & y1: ");
    scanf("%f %f",&x1,&y1);
    printf("\nEnter x2 & y1: ");
    scanf("%f %f",&x2,&y2);
    printf("\nEnter x3 & y3: ");
    scanf("%f %f",&x3,&y3);
    
    if(x1==x2 || x2==x3){
        if(x2==x3 && x1==x2){
            printf("\nThe given points are of same line.");
        }
        else {
            printf("\nThe given points are not on same line.");
        }
    }
    else {
        float slope1 = (y2-y1)/(x2-x1);
        float slope2 = (y3-y2)/(x3-x2);

        if(slope1==slope2){
            printf("\nThe given points are of same line.");
        }
        else {
            printf("\nThe given points are not on same line.");
        }
    }
    return 0;
}