#ifndef CUSTOMER_VIEW_FILE
#define CUSTOMER_VIEW_FILE
#include <stdio.h>
#include <stdlib.h>

void customerview()
{
    FILE *ptr;
    int c;
    
    ptr = fopen("customerview.txt", "r");

    if(ptr == NULL)
    {
        printf("File not found\n");
    }
    else
    {
        printf("\nFile opened in read mode\n\n");
    }

}

#endif