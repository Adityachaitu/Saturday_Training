#include<stdio.h>
    
int main(){
    
    int amount;
    printf("Enter the Amount: ");
    scanf("%d",&amount);
    int count = 0;
    int arr[] = {100, 50, 10, 5, 2, 1};

    for(int i=0;i<6 && amount!=0;i++){
        if(amount/arr[i]!=0){
            int n = amount/arr[i];
            count+=n;
            amount = amount%(n*arr[i]);
        }
    }

    printf("Required number of notes is %d",count);
    return 0;
}