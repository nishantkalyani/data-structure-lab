//Develop and execute a program in c using suitable data structure data structures to implement 
baggage carousel at airport,where the carousel rotates circulary with maximum capacity of 10 bags .
Each passenger should pick up his/her baggage with token provided.perform following operations.
a.Addition of new bag at carousel.
b.picking of bag from the carosel.
c.show carosel status.    
#include<stdio.h>
void main()
{
    int car[10]={0,0,0,0,0,0,0,0,0,0};
    int i,tok,choice;
    printf("Welcome to Baggage Carousel system!\n");
    while(1)
    {
        printf("Enter your choice:\n");
        printf("1. Addition of new bag to carousel.\n");
        printf("2. Picking of bag from the carousel.\n");
        printf("3. Show carousel status.\n");
        printf("4. Exit.\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: for(i=0;i<10;i++)
                    {
                        if(car[i]==0)
                        {
                            printf("Space found!\n");
                            printf("Enter token number:\n");
                            scanf("%d",&tok);
                            car[i]=tok;
                        }
                    }
                    if(i==10)
                    {
                        printf("Space not found.\n");
                    }
                    break;
            case 2: printf("Enter token number:\n");
                    scanf("%d",&tok);
                    for(i=0;i<10;i++)
                    {
                        if(car[i]==tok)
                        {
                            printf("Bag found!\n");
                            car[i]=0;
                            break;
                        }
                    }
                    if(i==10)
                    {
                    printf("Bag not found.\n");
                    }
                    break;
            case 3: printf("Carousel status:\n");
                    for(i=0;i<10;i++)
                    {
                           printf("%d\t",car[i]);
                    }
                    printf("\n");
                    break;
            case 4: exit(0);
            default: printf("Invalid entry.\n");
        }
    }
}

output:

