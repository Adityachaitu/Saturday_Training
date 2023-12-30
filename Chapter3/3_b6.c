#include<stdio.h>
    
int main(){
    
    int x = 30, y = 40 ;
    if ( x == y )
        printf ( "x is equal to y\n" ) ;
    elseif ( x > y )
        printf ( "x is greater than y\n" ) ;
    elseif ( x < y )
        printf ( "x is less than y\n" ) ;
    return 0;
}

/* else if should have a space between them, here there is no space so it will not compile (Wimplicit function declaration)*/