/*#ifndef DOCTORS_MENU_FILE
#define DOCTORS_MENU_FILE

int testDoctors()
{
    printf("this is the doctor's call");
}

#endif*/
// C program to illustrate
// Menu-Driven program
// using Switch-case
#include "viewDoctors.h"
#include "addDoctors.h"
#include "deleteDoctors.h"
#include <stdlib.h>
#include <stdbool.h>
 

 void menu()
{
    
  
  int choice, num;
 
    printf("\n\n\n\n\n\t~~~~\tWELCOME TO DOCTORS\t~~~~\t\n\n\n\n\n");
      
      while(true)
    {
      printf("\nChoose from the following:\n");
      printf("1. View Doctors\n");
      printf("2. Add Doctors\n");
      printf("3. Delete Doctors\n");
      printf("4. Exit\n");
      printf("5. Return to main menu\n");
 
      printf("Enter choice\n");
      scanf("%d",&choice);
 
      switch (choice)
      {
          case 1: {
            view();
            break;
         }
          case 2: {
             add();
             break;
         }
          case 3: {
              delete();
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