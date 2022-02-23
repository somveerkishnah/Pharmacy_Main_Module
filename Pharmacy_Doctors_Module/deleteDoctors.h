void delete()
{
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
}
/*#ifndef DELETE_SUPPLIER_FILE
#define DELETE_SUPPLIER_FILE

#include <stdio.h>
#include <string.h>

#define MAX 256

  void delete() 
  {
        int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
		printf("\n\n Delete a specific line from a file :\n");
		printf("-----------------------------------------\n"); 
		printf("Input the name of the file to be opened:\n");
        scanf("%s",fname);
        fptr1 = fopen(fname, "r");
        if (!fptr1) 
		{
                printf(" File not found or unable to open the input file!!\n");
                return;
        }
        fptr2 = fopen(temp, "w"); // open the temporary file in write mode 
        if (!fptr2) 
		{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
                return;
        }
        printf(" Input the line you want to remove : ");
        scanf("%d", &lno);
		
        // copy all contents to the temporary file except the specific line
        while (!feof(fptr1)) 
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1)) 
            {
                ctr++;
                
                if (ctr != lno) 
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove(fname);  		// remove the original file 
        rename(temp, fname); 	// rename the temporary file to original name

        fptr1=fopen(fname,"r"); 
            ch=fgetc(fptr1); 
          printf(" Now the content of the file %s is : \n",fname); 
          while(ch!=EOF) 
            { 
                printf("%c",ch); 
                 ch=fgetc(fptr1); 
            }
        fclose(fptr1);


  } 
#endif*/