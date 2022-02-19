#ifndef SUPPLIER_FILE
#define SUPPLIER_FILE
#include<stdlib.h>

void viewsupplier()
{
    FILE * ptr;
    int c;
<<<<<<< HEAD

    ptr=fopen("SupplierInfo.txt","r");

    ptr=fopen("supplier_Details.txt","r");
=======
>>>>>>> 01868c0c4489ceb0c36296d0a6c49123eef6ffd0

    ptr=fopen("supplier_Details.txt","r");

    if(ptr == NULL)
    {
        printf("File not found\n");
    }
    else
    {
        printf("File opened in read mode\n");
    } 
    while((c=fgetc(ptr))!=EOF)
    {
        printf("%c",c);
    }

}
#endif