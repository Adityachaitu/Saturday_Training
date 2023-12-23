#include<stdio.h>
#include<math.h>
    
int main(){
    
    float l1, l2, g1, g2;
    printf("Enter Latitude Coordinates (l1, l2): ");
    scanf("%f %f",&l1,&l2);
    printf("\nEnter Longitude Coordinates (g1, g2): ");
    scanf("%f %f",&g1,&g2);

    float p1 = sin(l1) * sin(l2);
    float p2 = cos(l1) * cos(l2) * cos(g2-g1);

    float dist = 3963 * acos(p1+p2);
    printf("\nThe Distance between (%.2f, %.2f) and (%.2f, %.2f) in nautical miles is %.2f",l1,l2,g1,g2,dist);
    return 0;
}