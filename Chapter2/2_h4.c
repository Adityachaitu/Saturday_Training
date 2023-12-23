#include<stdio.h>
#include<math.h>
    
int main(){
    
    int x, y;
    printf("Enter (x,y): ");
    scanf("%d %d",&x,&y);

    float r, pi;
    r = sqrt((pow(x,2)+pow(y,2)));

    float in_bw = (float) y/x;

    pi = atan(in_bw);

    printf("The Polar Coordinates of given Coordinates (%d, %d) is (%.2f, %.2f)",x,y,r,pi);
    return 0;
}