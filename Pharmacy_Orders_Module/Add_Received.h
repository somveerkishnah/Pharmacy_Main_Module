#ifndef ADD_RECEIVED
#define ADD_RECEIVED
void addReceived()
{
    int quantity;
    char name[10000];
    char date[10000];
    FILE *ptr;
    ptr = fopen("received.txt","a");

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