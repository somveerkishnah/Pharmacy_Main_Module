#ifndef PRODUCT_NAME_H_INCLUDED
#define PRODUCT_NAME_H_INCLUDED

void products()
{
    FILE *ptr;
    int c; char add[20];

    ptr = fopen("Pharmacy_Product_Module/productDetails.txt", "r");

    if(ptr == NULL)
        printf("File not found\n");
    else 
        printf("\nFile opened in read mode\n\n");

    while( (c = fgetc(ptr)) != EOF)
    {
        printf("%c", c);
    }
       
}

#endif