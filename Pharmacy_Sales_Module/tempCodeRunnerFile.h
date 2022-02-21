#include <stdlib.h>
#include<stdio.h>
//#ifndef VIEW_Sales_FILE
//#define VIEW_Sales_FILE


int main()
{
    FILE *fptr;
    int ch;

    fptr=fopen("C:/Users/praveer/Desktop/software engineering 1/projects/SalesDetail.txt","r");
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
    return 0;
}



//#endif
