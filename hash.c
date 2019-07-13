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
