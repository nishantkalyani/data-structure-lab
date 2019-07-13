#include<stdio.h>

void hanoi( int n, char source, char dest, char temp )
 {
   if( n == 1 )
   {
       printf("\n Move disk %d from %c -> %c ", n , source , dest );
   }
   else
   {
       hanoi( n-1 , source, temp, dest );
       printf("\n Move disk %d from %c -> %c ", n , source , dest );
       hanoi( n-1 , temp, dest, source );
   }
 }

int main()
{
    int n;
    printf("\n Enter the number of disks: ");
    scanf("%d", &n );
    hanoi( n , 's' , 'd' , 't' );
    return 0;
}
