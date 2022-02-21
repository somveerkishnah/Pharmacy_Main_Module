<<<<<<< HEAD

#include <stdio.h>
#ifndef VIEW_Sales_FILE
#define VIEW_Sales_FILE


int  main()
{
    FILE *fptr;
    int ch;

    fptr=fopen("SalesDetail.txt","r");
    if(fptr == NULL)
    {
        printf("File is not present\n");
        
    }
    else
    {
        printf("file opened in read mode \n\n");
    }
    while((ch = fgetc(fptr))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fptr);
    return 0;
 
}


#endif
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
 
int main(void)
{
    FILE *fileptr1, *fileptr2;
    char filechar[40];
    char c;
    int delete_line, temp = 1;
 
    
    fileptr1 = fopen("SalesDetail.txt", "r");
    c = getc(fileptr1);
    //print the contents of file .
    while (c != EOF)
    {
        printf("%c", c);
        c = getc(fileptr1);
    }
    printf(" \n Enter line number to be deleted and replaced");
    scanf("%d", &delete_line);
    //take fileptr1 to start point.
    rewind(fileptr1);
    //open replica.c in write mode
    fileptr2 = fopen("replica.c", "w");
    c = getc(fileptr1);
    while (c != EOF)
    {
        if (c == 'n')
        {
            temp++;
        }
        //till the line to be deleted comes,copy the content to other
        if (temp != delete_line)
        {
            putc(c, fileptr2);
        }
        else
        {
            while ((c = getc(fileptr1)) != 'n')
            {
            }
            //read and skip the line ask for new text
            printf("Enter new text");
            //flush the input stream
            fflush(stdin);
            putc('n', fileptr2);
            //put 'n' in new file
            while ((c = getchar()) != 'n')
                putc(c, fileptr2);
            //take the data from user and place it in new file
            fputs("n", fileptr2);
            temp++;
        }
        //continue this till EOF is encountered
        c = getc(fileptr1);
    }
    fclose(fileptr1);
    fclose(fileptr2);
    remove(filechar);
    rename("replica.c", filechar);
    fileptr1 = fopen(filechar, "r");
    //reads the character from file
    c = getc(fileptr1);
    //until last character of file is encountered
    while (c != EOF)
    {
        printf("%c", c);
        //all characters are printed
        c = getc(fileptr1);
    }
    fclose(fileptr1);
    return 0;
}
>>>>>>> 3b12ca1b3a4b3d4b05455e8dd61439af31e95512
