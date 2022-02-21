<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
#include <stdio.h>

int main()
{
    FILE *fileptr1, *fileptr2;
    char filename[40] = "SalesDetail.txt";
    char ch;
    int delete_line, temp = 1;

    //open file in read mode
    fileptr1 = fopen(filename, "r");
    ch = getc(fileptr1);
   while (ch != EOF)
    {
        printf("%c", ch);
        ch = getc(fileptr1);
    }
    //rewind
    rewind(fileptr1);
    printf(" \n Enter line number of the line to be deleted:");
    scanf("%d", &delete_line);
    //open new file in write mode
    fileptr2 = fopen("replica.c", "w");
    ch = 'A';
    while (ch != EOF)
    {
        ch = getc(fileptr1);
        //except the line to be deleted
        if (temp != delete_line)
        {
            //copy all lines in file replica.c
            putc(ch, fileptr2);
        }
        if (ch == '\n')
        {
            temp++;
        }
    }
    fclose(fileptr1);
    fclose(fileptr2);
    remove(filename);
    //rename the file replica.c to original name
    rename("replica.c", filename);
    printf("\n The contents of file after being modified are as follows:\n");
    fileptr1 = fopen(filename, "r");
    ch = getc(fileptr1);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = getc(fileptr1);
    }
    fclose(fileptr1);
    return 0;
}
=======
=======
>>>>>>> be802d844c368331abe02158a11741026c557b07
=======
>>>>>>> be802d844c368331abe02158a11741026c557b07
=======
>>>>>>> be802d844c368331abe02158a11741026c557b07
#ifndef SALES_MENU_FILE
#define SALES_MENU_FILE

#include <stdio.h>
#include <stdlib.h>
#include "Sales_ADD.h"
#include "Sales_Delete.h"
#include "Sales_Read.h"


int main()
{
  Add();
  Delete();
  viewSales();
}

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
#endif
>>>>>>> be802d844c368331abe02158a11741026c557b07
=======
#endif
>>>>>>> be802d844c368331abe02158a11741026c557b07
=======
#endif
>>>>>>> be802d844c368331abe02158a11741026c557b07
=======
#endif
>>>>>>> be802d844c368331abe02158a11741026c557b07
