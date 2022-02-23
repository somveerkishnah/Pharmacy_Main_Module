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
     char name[20];
     char cat[20];
    char rev[10];
   // char dataToAppend[BUFFER_SIZE];

    printf("Enter the number of suppliers that you want to add info:\n");
    scanf("%d",&num);

    FILE *fptr;
    fptr=fopen("Supplier_Details.txt","a");

    if(fptr==NULL)
    {
        printf("Error!");
        exit(EXIT_FAILURE);
    }
    printf("\n");
     for(int i=0;i<num;++i)
    {
        printf("Enter Supplier Name:\n");
        scanf("%s",name);
        printf("Enter Supplier Address:\n");
        scanf("%s",cat);
        printf("Enter Supplier Telephone number:\n");
        scanf("%s",rev);
        fprintf(fptr,"%s \t\t %s \t %s\n",name,cat,rev);
    } 

  /* printf("Enter data to append\n");
   fflush(stdin);
   fgets(dataToAppend,BUFFER_SIZE,stdin);
   fputs(dataToAppend,fptr);
   printf("\n");*/


   fptr=freopen("Supplier_Details.txt","r",fptr);
   printf("\nSuccessfully appended data\n");
   readFile(fptr);
   printf("\n");

    fclose(fptr);
}
#endif