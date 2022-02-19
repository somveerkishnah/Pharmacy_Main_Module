#ifdef VIEW_DOCTOR_FILE
#define VIEW_DOCTOR_FILE
void read()
{
   FILE *ptr;
    int c;
    ptr=fopen("DoctorsDetailsNew.txt", "r");
    if(ptr==NULL)
    {
        printf("\nFile not found\n");
    }
    else
    {
        printf("\nThe file contains:\n");
    }
    while((c=fgetc(ptr))!=EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
}
#endif