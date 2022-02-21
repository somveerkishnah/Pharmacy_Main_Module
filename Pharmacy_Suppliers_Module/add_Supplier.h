#ifndef ADD_SUPPLIER_FILE
#define ADD_SUPPLIER_FILE
#include <stdlib.h>
#define BUFFER_SIZE 1000

void readFile(FILE *fptr)
{
    char ch;
    do
    {
        ch=fgetc(fptr);
        putchar(ch);
    } while (ch!=EOF);
    
}
void addsupplier()
{
    int num;

    char dataToAppend[BUFFER_SIZE];

    printf("Enter the number of suppliers that you want to add info:\n");
    scanf("%d",&num);

    FILE *fptr;
    fptr=fopen("SupplierInfo.txt","a");

    if(fptr==NULL)
    {
        printf("Error!");
        exit(EXIT_FAILURE);
    }

   printf("Enter data to append\n");
   fflush(stdin);
   fgets(dataToAppend,BUFFER_SIZE,stdin);
   fputs(dataToAppend,fptr);


   fptr=freopen("SupplierInfo.txt","r",fptr);
   printf("\nSuccessfully appended data\n");
   readFile(fptr);
   printf("\n");

    fclose(fptr);
}
#endif