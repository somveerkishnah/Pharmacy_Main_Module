void read()
{
    FILE *ptr;
    int c;
    char name[10];
    ptr=fopen("doctorsDetails.txt","r");

   if(ptr==NULL)
   {
       printf("File not found\n");
   }
   else
   {
      printf("File opened in read mode");
   }
   while((c=fgetc(ptr))!=EOF)
   {
    printf("%c",c);
   }
   
   ptr=fopen("doctorsDetail.txt","w");
   if(ptr==NULL)
   {
       printf("Error\n");
       exit(1);
   }
}
   

