#include<stdio.h>

int main(){

    //(a)
    //question
    int a, float b, int c ;
    a = 25 ; b = 3.24 ; c = a + b * b - 35 ;  /*Give an error of placing ',' in between declarations of variables, which must be converted to ';'*/

    //solution
    int a; float b; int c;
    a = 25; b = 3.24; c = a+b*b-35; /*Now it will not give any error but it will give a wrong output as the output data type is 'int',it needs to be converted to 'float'*/

    //(b)
    // question && solution
    int a = 35 ; float b = 3.24 ;
    printf ( "%d %f %d", a, b + 1.5, 235 ); /*This have no Error but it is not realated to calculating average*/

    //(c)
    //question
    int a, b, c ;
    scanf ( "%d %d %d", a, b, c ) ; /*In this code there is no address location is given to enter the values, it just gave the values directly so it results in 'Undefined Behavior'*/

    //solution
    int a, b, c;
    scanf ( "%d %d %d", &a, &b, &c); /*In this we mentioned memory address by specifying '&'*/

    //(d)
    //question
    int m1, m2, m3
    printf ( "Enter values of marks in 3 subjects" )
    scanf ( "%d %d %d", &m1, &m2, &m3 )
    printf ( "You entered %d %d %d", m1, m2, m3 ) ; /*This have no ';' at the end of each line so doesn't compile.*/

    //solution
    int m1, m2, m3;
    printf ( "Enter values of marks in 3 subjects" );
    scanf ( "%d %d %d", &m1, &m2, &m3 );
    printf ( "You entered %d %d %d", m1, m2, m3 ) ; /*Error Solved*/

}