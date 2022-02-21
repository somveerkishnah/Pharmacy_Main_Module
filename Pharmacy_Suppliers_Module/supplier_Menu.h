#include "view_Supplier.h"
<<<<<<< HEAD
//#include "add_Supplier.h"
=======
#include "add_Supplier.h"
>>>>>>> bf4ba23be7f26897858acb7eeab1879152b04a03
#include "delete_Supplier.h"
 
void output(float);
 
int menu()
{
    float result;
  
  int choice, num;
 
    printf("\n\n\n\n\n\t~~~~\tWELCOME TO SUPPLIERS MENU\t~~~~\t\n\n\n\n\n");
   
      printf("\nChoose from the following:\n");
      printf("1. View Supplier\n");
      printf("2. Delete line\n");
      printf("3. Add supplier\n");

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
=======
            break;
         }
          case 3: {
             addsupplier();
            break;
          }
>>>>>>> bf4ba23be7f26897858acb7eeab1879152b04a03
         
         
          default:
          printf("Wrong input, try again!\n");
     
      }
      return 0;
}
 




