#ifndef VIEW_Sales_FILE
#define VIEW_Sales_FILE
#include <stdlib.h>

void viewSales()
{
    FILE *fptr;
    int ch;

    fptr=fopen("SalesDetail.txt","r");
    if(fptr == NULL)
    {
        printf("File is not present\n");
        
    }
    else
    {
        printf("file opened in read mode \n\n");
    }
    while((ch = fgetc(fptr))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fptr);
}
#endif