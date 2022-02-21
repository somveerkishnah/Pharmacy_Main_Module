#ifndef SUPPLIER_FILE
#define SUPPLIER_FILE
#include<stdlib.h>

void viewsupplier()
{
    FILE * ptr;
    int c;

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