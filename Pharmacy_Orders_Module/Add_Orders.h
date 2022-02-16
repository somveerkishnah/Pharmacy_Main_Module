#ifndef ADD_ORDERS
#define ADD_ORDERS
void addOrders()
{
    int quantity;
    char name[10000];
    char date[10000];
    FILE *ptr;
    ptr = fopen("orders.txt","a");

    if (ptr == NULL)
        printf("File not found\n");
    else
        printf("File opened in write mode");
    printf("\n");
    printf("Enter the name of the product to be added: ");
    scanf("%s",name);
    printf("\nEnter quantity of the items: ");
    scanf("%d", &quantity);
    printf("Enter the date: ");
    scanf("%s",date);

    fprintf(ptr,"\nDATE : %s ",date);
    fprintf(ptr,"\nORDER : %s",name);
    fprintf(ptr,"\nQUANTITY : %d",quantity);
   
    fclose(ptr);

}
#endif