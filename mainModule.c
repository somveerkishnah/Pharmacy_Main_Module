/* 
    @Author: Mr Somveer KISHNAH
    Date: 16.02.2022

    Description:
    this is the main moduke for the Pharmacy Project

*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

 #include "Pharmacy_Customer_Module/customer_Menu.h"
 #include "Pharmacy_Suppliers_Module/supplier_Menu.h"
 #include "Pharmacy_Inventory_Module/Inventory_Menu.h"

int main()
{
    float result;
  
    int choice, num;
 
    printf("\n\n\n\n\n\t~~~~\tWELCOME TO ROYAL PAHRMACY\t~~~~\t\n\n\n\n\n");
      
    while(true)
    {
      printf("\nCHOOSE FROM THE FOLLOWING OPTIONS\n");

      printf("1. PRODUCTS\n\n");
      printf("2. CUSTOMERS\n\n");
      printf("3. SUPPLIERS\n\n");
      printf("4. DOCTORS\n\n");
      printf("5. SALES\n\n");
      printf("6. ORDERS\n\n");
      printf("7. INVENTORY\n\n");
      printf("8. EXIT");
 
      printf("\nENTER YOUR CHOICE HERE:");
      scanf("%d",&choice);
 
      switch (choice)
      {
        /*case 1: {
            #include "Pharmacy_Product_Module/product_menu.h"
            break;
        }*/
          
        case 2: {
            
             customer_Menu();
             break;
        }
        
        case 3: {
              
              supplier_Menu();
              break;
        }
       /*   
        case 4: {
              #include "Pharmacy_Doctors_Module/doctors_Menu.h"
              break;
        }
       */   
        case 5: {
              Sales_Menu();
              break;
        }
      /*
        case 6: {
              #include "Pharmacy_Orders_Module/orders_Menu.h"
              break;
        }
      */
        case 7: {
              Inventory_Menu();
              break;
        }
      
        case 8: {
              exit(0);
        }
         
        
        default:
        printf("Wrong input, try again!\n");
      }//switch
     
       
     }//while
      return 0;
}//main