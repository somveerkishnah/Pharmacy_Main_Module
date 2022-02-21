#include "view_Supplier.h"
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
          case 3: {
             addsupplier();
            break;
          }
         
         
          default:
          printf("Wrong input, try again!\n");
     
      }
      return 0;
}
 




