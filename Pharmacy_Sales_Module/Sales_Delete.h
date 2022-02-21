#include <stdio.h>

int main()
{
    FILE *ptr1, *ptr2;
    char filename[40];
    char ch;
    int delete_line, temp = 1;

    printf("Enter file name: ");
    scanf("%s", filename);
    //open file in read mode
    ptr1 = fopen("SalesDetail", "r");
    ch = getc(ptr1);
   while (ch != EOF)
    {
        printf("%c", ch);
        ch = getc(ptr1);
    }
    //rewind
    rewind(ptr1);
    printf(" \n Enter line number of the line to be deleted:");
    scanf("%d", &delete_line);
    //open new file in write mode
    ptr2 = fopen("SalesDetail", "w");
    ch = 'A';
    while (ch != EOF)
    {
        ch = getc(ptr1);
        //except the line to be deleted
        if (temp != delete_line)
        {
            //copy all lines in file replica.c
            putc(ch, ptr2);
        }
        if (ch == '\n')
        {
            temp++;
        }
    }
    fclose(ptr1);
    fclose(ptr2);
    remove(filename);
    //rename the file replica.c to original name
    rename("replica.c", filename);
    printf("\n The contents of file after being modified are as follows:\n");
    ptr1 = fopen(filename, "r");
    ch = getc(ptr1);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = getc(ptr1);
    }
    fclose(ptr1);
    return 0;
}