/*void read()
{
   FILE *ptr;
    int c;
    char name[10];
    ptr=fopen("C:/Users/23059/OneDrive/Desktop/Amiira/Year 2 Sem 1/Software Engineering/Project/Pharmacy_Main_Module/Pharmacy_Doctors_Module/Doctorsdetail.txt","r");

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

/*#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <stdbool.h>

#define FILENAME_SIZE 1024
#define MAX_LINE 2048

int delete ()
{
  // file handles for the original file and temp file
  FILE *file, *temp;

  // store the filename and temp filename
  char filename[FILENAME_SIZE];
  char temp_filename[FILENAME_SIZE];

  // will store each line in the file, and the line to delete
  char buffer[MAX_LINE];
  int delete_line = 0;
  
  // have the user enter the filename, store it into the filename char array
  printf("File: ");
  scanf("%s", filename);
  
  // creates a temp filename "temp___filename.txt" where filename.txt is the 
  // name of the file entered by the user by first copying the prefix temp____
  // to temp_filename and then appending the original filename
  strcpy(temp_filename, "temp____");
  strcat(temp_filename, filename);
  
  // have the user enter the line number to delete, store it into delete_line
  printf("Delete Line: ");
  scanf("%d", &delete_line);
  
  // open the original file for reading and the temp file for writing
  file = fopen(filename, "r");
  temp = fopen(temp_filename, "w");
  
  // if there was a problem opening either file let the user know what the error
  // was and exit with a non-zero error status
  if (file == NULL || temp == NULL)
  {
    printf("Error opening file(s)\n");
    return 1;
  }
  
  // current_line will keep track of the current line number being read
  bool keep_reading = true;
  int current_line = 1;
  do 
  {
    // stores the next line from the file into the buffer
    fgets(buffer, MAX_LINE, file);
   
    // if we've reached the end of the file, stop reading from the file, 
    // otherwise so long as the current line is NOT the line we want to 
    // delete, write it to the file
    if (feof(file)) keep_reading = false;
    else if (current_line != delete_line)
      fputs(buffer, temp);
    
    // keeps track of the current line being read
    current_line++;
  
  } while (keep_reading);
  
  // close our access to the files
  fclose(file);
  fclose(temp);
  
  // delete the original file, give the temp file the name of the original file
  remove(filename);
  rename(temp_filename, filename);
return 0;
}*/