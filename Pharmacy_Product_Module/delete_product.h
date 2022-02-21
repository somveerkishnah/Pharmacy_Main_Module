#ifndef DELETE_PRODUCT_H_INCLUDED
#define DELETE_PRODUCT_H_INCLUDED



int deleteProducts()
{  
    FILE *fptr1, *fptr2;
    char file1[] ="productDetails.txt";
    char file2[] ="temp.txt";
    char curr,ch;
    int del, line_number = 0;
    printf("Please enter the line number you want to delete : ");
    scanf("%d", &del);
    fptr1 = fopen(file1,"r");
    fptr2 = fopen(file2, "w");
    curr = getc(fptr1);
    if(curr!=EOF) {line_number =1;}
    while(1){
      if(del != line_number)
        putc(curr, fptr2);
        curr = getc(fptr1);
        if(curr =='\n') line_number++;
        if(curr == EOF) break;
    }
    fclose(fptr1);
    fclose(fptr2);
    rename(file1)

#endif