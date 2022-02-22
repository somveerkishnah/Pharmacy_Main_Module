#ifndef CUSTOMER_MENU_FILE
#define CUSTOMER_MENU_FILE



int customer_Menu()
{
    float result;
  
    int choice, num;
 
    printf("\n\n\n\n\n\t~~~~\tCUSTOMER MENU\t~~~~\t\n\n\n\n\n");
      
    while(true)
    {
      printf("\nCHOOSE FROM THE FOLLOWING OPTIONS\n");

      
      printf("1. VIEW CUSTOMERS\n\n");
      printf("2. ADD CUSTOMERS\n\n");
      printf("3. DELETE CUSTOMERS\n\n");
      printf("4. BACK TO MAIN MENU");
 
      printf("\nENTER YOUR CHOICE HERE:");
      scanf("%d",&choice);
 
      switch (choice)
      {
        case 1: {
            #include "customer_View.h"
            customerview();
            break;
        }
        /*  
        case 2: {
             #include "Pharmacy_Customer_Module/customer_Menu.h";
             break;
        }
          
        case 3: {
              #include "Pharmacy_Suppliers_Module/supplier_Menu.h"
              break;
        }
        */
        case 4: {

            return;
            //exit(0);
        }
    
           
        default:

        printf("Wrong input, try again!\n");
      }
     
       
     }
      
    return 0;

}

#endif