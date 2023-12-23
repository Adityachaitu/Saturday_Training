#include<stdio.h>
    
int main(){
    
    int marks[5];
    int sum = 0;
    for(int i=0;i<5;i++){
        printf("\nEnter Marks of Subject %d : (for 100)",i+1);
        scanf("%d",&marks[i]);
        sum+=marks[i];
    }

    printf("\nThe Average Marks Obtained: %d",sum);
    printf("\nThe Percentage of Marks Obtained: %d %",(sum/5));
    return 0;
}