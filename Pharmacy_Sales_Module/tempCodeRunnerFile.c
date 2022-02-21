#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD

=======
#include <string.h>
#include <stdbool.h>
 
>>>>>>> 27d51bd413b59f3eb6c03409eebb84656e63626c
int main()
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
   scanf("%d\n", &num);
   fprintf(fptr, "%d\n",num);

   fclose(fptr);


   return 0;
}