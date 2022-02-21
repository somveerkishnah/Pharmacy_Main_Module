#ifndef PRODUCT_NAME_H_INCLUDED
#define PRODUCT_NAME_H_INCLUDED

int viewProducts()
{
    int n = 0;
    FILE *ptr;
    int c; char add[20];

    ptr = fopen("productDetails.txt", "r");

    if(ptr == NULL)
        printf("File not found\n");
    else 
        printf("\nFile opened in read mode\n\n");

    while( (c = fgetc(ptr)) != EOF)
    {
        printf("%c", c);

    }
    printf("\n\n");  
    fclose(ptr);
}

#endif