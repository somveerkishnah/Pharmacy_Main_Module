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
#include "deleteDoctors.h"
#include "addDoctors.h"
#include<stdio.h>
#include<stdbool.h>

int menu()
{
    float result;
<<<<<<< HEAD
    int choice,num;

    printf("\n\n\n\n\t ~~~~~~Welcome to Doctors\t~~~~~~\t\n\n\n\n\n\n");
     while(true)
    {
      printf("\nChoose from the following:\n");
      printf("1. View Doctors\n");
      printf("2. Delete Doctor Details\n");
      printf("3. Add Doctors\n");
      printf("4. Exit");
 
 
=======
  
  int choice, num;
 
    printf("\n\n\n\n\n\t~~~~\tWELCOME TO DOCTORS\t~~~~\t\n\n\n\n\n");
      
      while(true)
    {
      printf("\nChoose from the following:\n");
      printf("1. View Doctors\n");
      printf("2. Delete Doctor's Detail\n");
      printf("3. Add Doctor\n");
      printf("4. Exit\n");
 
      printf("Enter your choice:\n");
>>>>>>> ea975634888169a7cf57342e25e882221d83df8f
      scanf("%d",&choice);
 
      switch (choice)
      {
          case 1: {
<<<<<<< HEAD
            viewsDoctors();
            break;
         }
          case 2: {
             deleteDoctors();
             break;
         }
          case 3: {
              addDoctors();
              break;
          }

          case 4: {
              exit(0);
          }
         
          default:
          printf("Wrong input, try again!\n");
     
       }
     }
      return 0;
}
}
=======
            view();
            break;
         }
          case 2: {
             delete();
             break;
         }
          case 3: {
              add();
              break;
          }
>>>>>>> ea975634888169a7cf57342e25e882221d83df8f

          case 4: {
              exit(0);
          }
         
          default:
          printf("Wrong input, try again!\n");
     
       }
     }
      return 0;
}