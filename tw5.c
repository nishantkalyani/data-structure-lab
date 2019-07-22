//Consider a super market senario where sales manager wants to search for the customer details
using a customer-id .customer information like (custid,custname,&custphno) are stored as a 
structure and custid will be used as hash key.develop and execute a program in c using 
suitable data structure to implement the following operations:
a.Insertion of a new data entry 
b.search for customer information using custid
c.display the records(demonstrate collision and its handling using linear probing method)
#include <stdio.h>
struct cust
 {
     int id;      char name[10];      int phone;
 };
struct cust customer[10];
int main()
 {
     int i;      int option;
     int hashKey;
     int hashValue;
     int nextHashValue;
     for ( i=0; i<10; i++ ) customer[i].id = 0;
     while(1)
     {
         printf("\n 1: Insert, 2: Search: 3: Display = ");
         scanf( "%d", &option );
         switch( option )
          {
              case 1:   printf("\n Enter Customer Id: ");
                        scanf("%d", &hashKey);
                        hashValue = hashKey % 10;
                        if ( customer[ hashValue ].id == 0 )
                        {
                            customer[ hashValue ].id = hashKey;
                            printf("\n Enter Customer Name, Phone");
                            scanf("%s%d", &customer[ hashValue ].name,
                                  &customer[ hashValue ].phone);
                        }
                        else
                        {
                            hashValue++;
                            if ( customer[ hashValue ].id == 0 )
                            {
                              customer[ hashValue ].id = hashKey;
                              printf("\n Enter Customer Name, Phone");
                              scanf("%s%d", &customer[ hashValue ].name,
                                  &customer[ hashValue ].phone);
                            }
                            else
                            printf("\n Next immediate location not available");
                        }

                        break;
              case 2:   printf("\n Enter Customer Id to search: ");
                        scanf("%d", &hashKey);
                        hashValue = hashKey % 10;
                        nextHashValue = hashValue + 1;
                        if ( customer[ hashValue ].id == hashKey
                            ||
                             customer[ nextHashValue ].id == hashKey )
                        {
                            printf("\n Customer Id found");
                            printf("\n %d %s %d ",customer[i].id,
                                   customer[i].name , customer[i].phone );
                        }
                        else
                        {
                            printf("\n Customer Id Not found");
                        }
                        break;

              case 3:   for ( i=0; i<10; i++ )
                         {
                          if(customer[i].id==0)printf("\n empty");
                          else printf("\n %d %s %d ",customer[i].id,customer[i].name , customer[i].phone );
                         }
                        break;
          }
     }
     return(0);
 }

output:

 1: Insert, 2: Search: 3: Display = 1

 Enter Customer Id: 1

 Enter Customer Name, Phone abc
123

 1: Insert, 2: Search: 3: Display = 3

 empty
 1 abc 123
 empty
 empty
 empty
 empty
 empty
 empty
 empty
 empty
 1: Insert, 2: Search: 3: Display =
