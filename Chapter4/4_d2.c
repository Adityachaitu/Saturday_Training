// P.ADITYA - CH.EN.U4CYS21055
#include<stdio.h>
    
int main(){
    
    char inp;
    printf("Enter a Character: ");
    scanf("%c",&inp);

    if(inp>=65 && inp<=90){
        printf("%c is a Capital Letter.",inp);
    }
    else if(inp>=97 && inp<=122){
        printf("%c is a Small Letter.",inp);
    }
    else if(inp>=48 && inp<=57){
        printf("%c is a Number.",inp);
    }
    else {
        printf("%c is a Special Character.",inp);
    }
    return 0;
}