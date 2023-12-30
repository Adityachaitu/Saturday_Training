#include<stdio.h>
    
int main(){
    
    float angle1, angle2, angle3;
    printf("Enter 1st Angle: ");
    scanf("%f",&angle1);
    printf("\nEnter 2nd Angle: ");
    scanf("%f",&angle2);
    printf("\nEnter 3rd Angle: ");
    scanf("%f",&angle3);

    if(angle1+angle2+angle3==180.0){
        printf("\nThe Entered Angle's are of a valid Triangle.");
    }
    else {
        printf("\nThe Entered Angle's are not of a valid Triangle.");
    }
    return 0;
}