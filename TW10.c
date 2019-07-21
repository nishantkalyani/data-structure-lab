//Develop and execute a program in c using suitable data structure to perform Searching a data item in an ordered
list of items in both directions and implement the following operations:
a.create a double linked list by adding each node at the start.
b.insert a new node at the end of the list.
c.display the content of a list.
An integer number identifies a data item.    
#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *tail=NULL;
struct node *newNode;
struct node *temp;
void main()
{
    int opt;
    while(1)
    {
        printf("Enter your choice: \n");
        printf("1. Add element at the start.\n");
        printf("2. Add element at the last.\n");
        printf("3. Display the list.\n");
        printf("4. Exit.\n");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:   newNode = (struct node*)malloc(sizeof(struct node));
                      newNode -> prev = NULL;
                      newNode -> next = NULL;
                      printf("Enter data: \n");
                      scanf("%d",&newNode -> data);
                      if(head==NULL)
                      {
                          head=newNode;
                          tail=newNode;
                      }
                      else
                      {
                          if(newNode -> data<head -> data)
                          {
                            newNode -> next = head;
                            head -> prev = newNode;
                            head=newNode;
                          }
                          else
                          {
                              printf("Number should be smaller than %d\n",head -> data);
                          }
                      }
                      break;
            case 2:   newNode = (struct node*)malloc(sizeof(struct node));
                      newNode -> prev = NULL;
                      newNode -> next = NULL;
                      printf("Enter data: \n");
                      scanf("%d",&newNode -> data);
                      if(head==NULL)
                      {
                          head=newNode;
                          tail=newNode;
                      }
                      else
                      {
                          if(newNode -> data > tail -> data)
                          {
                              newNode -> prev = tail;
                              tail -> next = newNode;
                              tail=newNode;
                          }
                          else
                          {
                              printf("Number should be greater than %d\n",tail -> data);
                          }
                      }
                      break;
            case 3:   temp=head;
                      if(head==NULL)
                      {
                          printf("List is empty.\n");
                      }
                      else
                      {
                          while(temp!=NULL)
                          {
                              printf("%d\t",temp->data);
                              temp=temp->next;
                          }
                      }
                      printf("\n");
                      break;
            case 4: exit(0);
        }
    }
}

output:



