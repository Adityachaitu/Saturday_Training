// P.ADITYA - CH.EN.U4CYS21055
#include<stdio.h>
#include<math.h>
    
int main(){
    
    int sides[3];
    for(int i=0;i<3;i++){
        printf("Enter %d side length: ",i+1);
        scanf("%d",&sides[i]);
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(sides[i%3]>sides[(i+1)%3]){
                int temp = sides[i%3];
                sides[i%3] = sides[(i+1)%3];
                sides[(i+1)%3] = temp;
            }
        }
    }

    for(int i=0;i<3;i++){
        printf("%d",sides[i]);
    }

    int sum = pow(sides[0],2) + pow(sides[1],2);
    printf("\n%d",sum);
    int sq = pow(sides[2],2)+1;
    printf("\n%d",sq);

    if( sum == sq){
        printf("\nIt Forms a Right Triangle.");
    }
    else if(sides[0] == sides[1] && sides[1] == sides[2]){
        printf("\nIt Forms an Equilateral Triangle.");
    }
    else if(sides[0] == sides[1] || sides[1] == sides[2]){
        printf("\nIt Forms an Isosceles Triangle.");
    }
    else {
        printf("\nIt Forms a Scalen Triangle.");
    }
    return 0;
}