//consider a polynomial evalution in certain application.Devlope and execute a program in c
using suitable data structure to implement polynomial evaluation for certain value of x,read
from the user.
#include<stdio.h>
#include<math.h>
int main()
{
    int n=3,coeff[10]={8,-10,1},deg[10]={5,1,0},x,result=0,i;
    printf("Enter the value of x:\n");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        result=result+(pow(x,deg[i])*coeff[i]);
    }
    printf("Result is: %d",result);
    return(0);
}

output:
Enter the value of x:
25
Result is: 78124751
Process returned 0 (0x0)   execution time : 6.395 s
Press any key to continue.





