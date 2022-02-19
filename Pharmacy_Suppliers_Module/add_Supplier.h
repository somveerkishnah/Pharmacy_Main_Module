#ifdef ADD_SUPPLIER_FILE
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

void addSupplier()
{
    int num;
    char dataToAppend[BUFFER_SIZE];

    printf("Enter the number of supplier you want to add:\n");
    scanf("%d",&num);

    FILE *fptr;
    fptr=fopen("supplier_Details.txt","a");

    if(fptr==NULL)
    {
        printf("Error!");
        exit(EXIT_FAILURE);
    }

    printf("Enter data to append\n");
   fflush(stdin);
   fgets(dataToAppend,BUFFER_SIZE,stdin);
   fputs(dataToAppend,fptr);

   fptr=freopen("supplier_Details.txt","r",fptr);
   printf("\nSuccessfully appended data\n");
   readFile(fptr);
   printf("\n");

    fclose(fptr);
}
#endif