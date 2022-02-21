#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *ptr;

   if ((ptr = fopen("SalesDetail.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

    while((c = fgetc(ptr)) != EOF)
    {
        printf("%c",c);

    }
  
   return 0;
}