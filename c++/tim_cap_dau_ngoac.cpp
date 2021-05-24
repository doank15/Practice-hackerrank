#include <stdio.h>
int top;
void  check (char str[ ], int n, char stack [ ])
{
    for(int i = 0 ; i < n ; i++ )
    {
        if (str [ i ] == '(')
        {
            top = top + 1;
            stack[ top ] = '(';
        }
        if(str[ i ] == ')' )
        {
            if(top == -1 )
            {
                break;
             }
            else
            {
                 top = top -1 ;
            }
        }
    }
    if(top == -1)
        printf("String is balanced!\n");
    else
        printf("String is unbalanced!\n");
}
 
int main ( ) 
{
    //balanced parenthesis string.
    char str[ ] = "(())()";
 
    // unbalanced string . 
    char str1 [] = "((()";
    char stack [15] ;
    top = -1;   
    check (str , 9 , stack );      //Passing balanced string   
    top = -1 ;
    check(str1 , 5 , stack) ;    //Passing unbalanced string
    return 0;
 
}