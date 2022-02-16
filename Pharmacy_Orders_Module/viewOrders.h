
void viewO()
{
    FILE * ptr;
    int c;
    ptr = fopen("orders.txt","r");

    if (ptr == NULL)
    {
        printf("File not found\n");
    }
    else
    {
        printf("File opened in read mode\n");
    }
    while((c = fgetc(ptr)) != EOF)
    {
        printf("%c",c);

    }
}