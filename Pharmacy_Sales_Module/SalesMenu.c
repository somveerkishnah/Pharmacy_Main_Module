#ifndef SALES_MENU_FILE
#define SALES_MENU_FILE

#include <stdio.h>
#include <stdlib.h>
#include "Sales_ADD.h"
#include "Sales_Delete.h"
#include "Sales_Read.h"
<<<<<<< HEAD
<<<<<<< HEAD


int main()
{
  Add();
  Delete();
  viewSales();
}
=======


int main()
{
  int choice;
    printf("1.View sales\n");
    printf("2.Add new Sales\n");
    printf("3.Delete sales\n");
    printf("0.exit");
    do{
        printf("\nEnter your choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
               viewSales();
               break;
            }
            case 2:
            {
              Add();
              break; 
            }
            case 3:
            {
              Delete();
              break;
            }
            default:
            {
                printf("Invalid choice");
            }

        }
        
      }while(choice !=0);

}
#endif


>>>>>>> 2502e02b05be733f5821dcb6fe81b36dc306ae34

=======


int main()
{
  int choice;
    printf("1.View sales\n");
    printf("2.Add new Sales\n");
    printf("3.Delete sales\n");
    printf("0.exit");
    do{
        printf("\nEnter your choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
               viewSales();
               break;
            }
            case 2:
            {
              Add();
              break; 
            }
            case 3:
            {
              Delete();
              break;
            }
            default:
            {
                printf("Invalid choice");
            }

        }
        
      }while(choice !=0);

}
#endif



>>>>>>> 50ab66de8cba3bc11efa1e147234dab7c814b67b
