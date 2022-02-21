#include "view_Supplier.h"
#include "add_Supplier.h"
#include "delete_Supplier.h"
 
void output(float);
 
int menu()
{
    float result;
  
  int choice, num;
 
    printf("\n\n\n\n\n\t~~~~\tWELCOME TO SUPPLIER\t~~~~\t\n\n\n\n\n");
   
      printf("\nChoose from the following:\n");
      printf("1. View Supplier\n");
      printf("2. Delete line\n");
 
 
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
          }
         
          default:
          printf("Wrong input, try again!\n");
     
      }
      return 0;
}
