//Consider a warehouse where the items have to be arranged in an ascending order.Develop and
execute a program in c using suitable data structure to implement warehouse such that items
can be traced easily.
#include<stdio.h>
int main()
{
    int wh[8]={1,3,6,9,12,15,18,20};
    int low=0,high=7,item,mid=(low+high)/2;
    printf("Enter item to be searched:\n");
    scanf("%d",&item);
    while(low<=high)
    {
        if(item==wh[mid])
        {
            printf("Element found!\n");
            return 0;
        }
        else if(item<wh[mid])
        {
            high=mid-1;
            mid=(low+high)/2;
        }
        else
        {
            low=mid+1;
            mid=(low+high)/2;
        }
    }
    printf("Element not found\n");
}

output:

