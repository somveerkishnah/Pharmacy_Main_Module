#ifndef INVENTORY_MENUH_INCLUDED
#define INVENTORY_MENU_H_INCLUDED
#include "ViewInventory.h"
void Inventory_Menu(){
  
  int choice, num;
 
    printf("\n\n\n\n\n\t~~~~\tWELCOME TO INVENTORY\t~~~~\t\n\n");
      
      while(true){
      printf("\n\n\nChoose from the following:\n");
      printf("1. View Inventory\n");
      printf("2. Exit Program completely\n");
      printf("3. Return to Main Menu\n");
      printf("\n  CHOICE: ");
      scanf("%d",&choice);
 
      switch (choice)
      {
          case 1: {
            inventoryView();
            break;
         }
          case 2: {
             exit(0);
             break;
         }
         
          case 3:{
              return;
          }
          default:
          printf("Wrong input, try again!\n");
     
       }
     }
      return 0;
}
#endif