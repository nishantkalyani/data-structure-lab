#include<stdio.h>
void main()
{
    struct token
    {
        int tid;
        int tno;
        char td;
    };
    struct token queue[5];
    int front=0,rear=-1,choice,i;
    printf("Welcome to Bank queue system!\n");
    while(1)
    {
        printf("Enter your choice:\n");
        printf("1. Insert.\n");
        printf("2. Delete.\n");
        printf("3. Display.\n");
        printf("4. Exit.\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: if(rear<4)
                    {
                        ++rear;
                        printf("Enter token id, transaction number and transaction description(c or d):\n");
                        scanf("%d %d %c",&queue[rear].tid,&queue[rear].tno,&queue[rear].td);

                    }
                    else
                    {
                        printf("Queue is full.\n");
                    }
                    break;
            case 2: if(front>4)
                    {
                        printf("Queue is empty.\n");
                    }
                    else
                    {
                        printf("The token id %d, the transaction number %d and the transaction description %c has been deleted.",queue[front].tid,queue[front].tno,queue[front].td);
                        front++;
                    }
                    break;
            case 3: for(i=front;i<=rear;i++)
                    {
                        printf("The token id is %d, the transaction number is %d and the transaction description is %c.",queue[i].tid,queue[i].tno,queue[i].td);
                    }
                    break;
            case 4: exit(0);
            default: printf("Invalid entry.\n");
        }
    }
}
