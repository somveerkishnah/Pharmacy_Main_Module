#ifndef DELETE_DOCTORS_H_INCLUDED
#define DELETE_DOCTORS_H_INCLUDED
struct Doctor
{
    int id;
    char dname[30];
    char hname[30];
    int yoe;

};

void delete()
{  
   FILE *fp1, *fp2;
   int id;
   struct Doctor d;
   printf("Enter the id you want to delete:\n");
   scanf("%d",&id);
   //create a pointer to the file intitally
   fp1=fopen("doctorsDetails.txt","r+");
   fp2=fopen("copy.txt","a+");

   if(fp1==NULL)
{
    fprintf(stderr,"Can't open file");
    exit(0);
}

while(fread(&d,sizeof(struct Doctor),1,fp1))
{
    if(d.id!=id)
    {
        fwrite(&d,sizeof(struct Doctor),1,fp2);
    }
}     
fclose(fp1);
fclose(fp2);

remove("doctorsDetails.txt");
rename("copy.txt","doctorsDetails.txt");

printf("Record deleted successfully\n");

/*void read()
{  
  
   FILE *ptr;
    int c;
    char name[10];
    ptr=fopen("C:/Users/23059/OneDrive/Desktop/Amiira/Year 2 Sem 1/Software Engineering/Project/Pharmacy_Main_Module/Pharmacy_Doctors_Module/doctorsDetails.h","r");

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
}*/

#endif