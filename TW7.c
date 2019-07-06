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
