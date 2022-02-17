#include <stdio.h>
      int main() {
        FILE *fp1, *fp2;
        //consider 40 character string to store filename
        char filename[40];
        char c;
        int del_line, temp = 1;
        //asks user for file name
        printf("Enter file name: ");
        //receives file name from user and stores in 'filename'
        scanf("%s", filename);
        //open file in read mode
        fp1 = fopen(filename, "r");
        c = getc(fp1);
        //until the last character of file is obtained
        while (c != EOF)
        {
          printf("%c", c);
          //print current character and read next character
          c = getc(fp1);
        }
        //rewind
        rewind(fp1);
        printf(" \n Enter line number of the line to be deleted:");
        //accept number from user.
        scanf("%d", &del_line);
        //open new file in write mode
        fp2 = fopen("copy.c", "w");
        c = getc(fp1);
        while (c != EOF) {
          c = getc(fp1);
          if (c == '\n')
          temp++;
          //except the line to be deleted
          if (temp != del_line)
          {
            //copy all lines in file copy.c
            putc(c, fp2);
          }
        }
        //close both the files.
        fclose(fp1);
        fclose(fp2);
        //remove original file
        remove(filename);
        //rename the file copy.c to original name
        rename("copy.c", filename);
        printf("\n The contents of file after being modified are as  follows:\n");
        fp1 = fopen(filename, "r");
        c = getc(fp1);
        while (c != EOF) {
            printf("%c", c);
            c = getc(fp1);
        }
        fclose(fp1);
        return 0;
      }




/*#include<stdio.h>
void print_file(FILE *fp);
int main()
{
char filename[100];
char str[100];

FILE * fp1, *fp2;
int del_line_no;
int line_no=0;

printf("Enter the file name:");
scanf("%s",filename);

fp1=fopen(filename,"r");
printf("\nContent of file before modification:\n");
print_file(fp1);
rewind(fp1);

printf("\nEnter the no. of the line to be deleted:\n");
scanf("%d",&del_line_no);

fp2=fopen("replica.txt","w");

while(fgets(str,99,fp1)!=NULL)
{
   line_no++;
   if(line_no !=del_line_no)
   {
     fputs(str,fp2);
   }

}
fclose(fp1);
fclose(fp2);

remove(filename);
rename("replica.txt",filename);

fp1=fopen(filename,"r");
printf("\nContent of file after modification:\n");
print_file(fp1);
fclose(fp1);
return 0;
}

void print_file(FILE *fp)

{
  char ch;
  while(ch=fgetc(fp)!=EOF)
  {
    printf("%c",ch);
  }

}*/


/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// set some generous maximum lengths for filename size and each line in a file
#define FILENAME_SIZE 1024
#define MAX_LINE 2048

// our program will work by writing all of the original file content to a 
// temp file EXCEPT for the line we want to delete, and then we'll delete the 
// original file and rename the temp file to the original file name
int main()
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
    /*printf("Error opening file(s)\n");
    return 1;*/
  /*}
  
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