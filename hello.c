#include <stdio.h> #include <string.h> #include <stdlib.h>
int main()
 {
     char infix[10];
     char stack[10];
     int top = -1;
     int i;
     printf("\n Enter parathesized expresssion:");
     scanf("%s", &infix );
     printf("\n Original expresssion = %s " , infix );
     printf("\n Postfix expresssion = ");
     for( i=0; i < strlen( infix ) ; i++ )
     {
         if( isalpha( infix[i] ) ) // operand
             printf( " %c " , infix[i] );
         else // operator
         {
             if( infix[i] == '('  ||  infix[i] == '*' ||  infix[i] == '/'  )
                 stack[ ++top ] = infix[i];
             else if( infix[i] == ')' )
             {
                 while( top != -1 && stack[top] != '(' )
                     printf( " %c " , stack[ top-- ] );

                 if( top == -1 )
                 {
                     printf("\nInvalid Expression"); return 0;
                 }
                 top--;
             }
             else if( infix[i] == '+' || infix == '-'   )
             {
                 if( top != -1 )
                 {
                     while( stack[top] == '*' || stack[top] == '/' )
                         printf( " %c " , stack[top--] );
                 }
                 stack[ ++top ] = infix[i];
             }
         }
     }
     for( i=top ; i>=0 ; i--  )
     {
         if( stack[i] == '(' )
         {
             printf("\nInvalid Expression"); return 0;
         }
         printf(" %c ", stack[i] );
     }
     return(0);
 }
