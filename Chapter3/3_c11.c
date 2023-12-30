// P.ADITYA - CH.EN.U4CYS21055
#include<stdio.h>
#include<math.h>
    
int main(){
    
    float x, y, r;
    printf("Enter the Coordinates of the center of the Circle: ");
    scanf("%f %f",&x,&y);
    printf("\nEnter the Radius of the Circle: ");
    scanf("%f",&r);

    float x1,y1;
    printf("\nEnter the Coordinates of a random point: ");
    scanf("%f %f",&x1,&y1);

    float dist;

    dist = sqrt((pow((x1-x),2)+pow((y1-y),2)));

    if(dist<r){
        printf("\nThe given point lies inside the circle.");
    }
    else if(dist>r){
        printf("\nThe given point lies outside the circle.");
    }
    else{
        printf("\nThe given point lies on the circle.");
    }
    return 0;
}