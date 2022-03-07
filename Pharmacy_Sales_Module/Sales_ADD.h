#ifndef VIEW_Sales_FILE
#define VIEW_Sales_FILE

#include <stdio.h>
#include <stdlib.h>

int Add()
{
   int num,n;
   char name[100];
   FILE *fptr;
    
   //This code appends to the text file
   fptr = fopen("SalesDetail.txt","a");

   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }

   printf("Enter item name:");
   scanf("%s", &name);
   fprintf(fptr, "%s       ",name);

   printf("Enter Quantity Sold: ");
   scanf("%d", &num);
   fprintf(fptr, "%d\n",num);

   fclose(fptr);


   return 0;
}