#ifndef ADD_PRODUCT_H_INCLUDED
#define ADD_PRODUCT_H_INCLUDED

void Addproducts()
{
    char productName[50];
    int quantity,i,n;

    printf("Enter the number of products you want to add: ");
    scanf("%d",&n);

    FILE *fptr;
    fptr = (fopen("Products.txt", "a"));

    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    for(i=0;i<n;i++){
        printf("For Product%d\nEnter Product name: ",i+1);
        scanf("%s",productName);

        printf("Enter quantity: ");
        scanf("%d",&quantity);

        fprintf(fptr,"\nName: %s \nQuantity: %d \n",productName,quantity);
    }
    fclose(fptr);
}
 #endif