void read()
{
   FILE *ptr;
    int c;
    char name[10];
    ptr=fopen("C:/Users/23059/OneDrive/Desktop/Amiira/Year 2 Sem 1/Software Engineering/Project/Pharmacy_Main_Module/Pharmacy_Doctors_Module/doctorsDetail.txt","r");

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
   
   
       fclose(ptr);
     
}
