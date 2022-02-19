#ifndef SUPPLIER_FILE
#define SUPPLIER_FILE
#include<stdlib.h>
#define BUFFER_SIZE 1000

void viewsupplier()
{
    FILE * ptr;
    int c;
    ptr=fopen("Pharmacy_Suppliers_Module/SupplierInfo.txt","r");

    if(ptr == NULL)
    {
        printf("File not found\n");
    }
    else
    {
        printf("File opened in read mode");
    } 
    while((c=fgetc(ptr))!=EOF)
    {
        printf("%c",c);
    }

}
#endif