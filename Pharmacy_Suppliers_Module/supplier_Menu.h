#include "view_Supplier.h"
#include "add_Supplier.h"
#include "delete_Supplier.h"
#include <stdlib.h>
#include <stdbool.h>
 
//void output(float);
 
int supplier_Menu()
{
    float result;
  
  int choice, num;
 
    printf("\n\n\n\n\n\t~~~~\tWELCOME TO SUPPLIER\t~~~~\t\n\n\n\n\n");
      
      while(true)
    {
      printf("\nChoose from the following:\n");
      printf("1. View Supplier\n");
      printf("2. Delete line\n");
      printf("3. Add Supplier\n");
      printf("4. Exit\n");
      printf("5. Return to main menu\n");
 
 
      scanf("%d",&choice);
 
      switch (choice)
      {
          case 1: {
            viewsupplier();
            break;
         }
          case 2: {
             deleteSupplier();
             break;
         }
          case 3: {
              addsupplier();
              break;
          }

          case 4: {
              exit(0);
          }

          case 5:{
              return 0;
          }
         
          default:
          printf("Wrong input, try again!\n");
     
       }
     }
      return 0;
}
