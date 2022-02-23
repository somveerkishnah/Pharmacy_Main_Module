#ifndef ADD_PRODUCT_H_INCLUDED
#define ADD_PRODUCT_H_INCLUDED

void addProducts()
{
    char productName[50];
    int quantity,cost,i,n;

    printf("Enter the number of products you want to add: ");
    scanf("%d",&n);

    FILE *fptr;
    fptr = (fopen("productDetails.txt", "a"));

    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    for(i=0;i<n;i++){
        printf("For Product%d\nEnter Product name: ",i+1);
        scanf("%s",productName);

        printf("Enter the cost per unit: ");
        scanf("%d",&cost);

        printf("Enter quantity: ");
        scanf("%d",&quantity);

<<<<<<< HEAD
        fprintf(fptr,"%s \t\t\t\t%d \t\t\t\t%d\n",productName,cost,quantity);
=======
        fprintf(fptr,"%2s%10d%10d\n",productName,cost,quantity);
>>>>>>> ea975634888169a7cf57342e25e882221d83df8f
    }
    fclose(fptr);
}

    


#endif
//test