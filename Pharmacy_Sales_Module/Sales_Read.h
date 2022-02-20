#include<stdio.h>
#include<stdlib.h>

int main(){

/*This code is used to read from the SalesDetail text file*/

  FILE*fPointer;
  fPointer = fopen("SalesDetail.txt","r");
  char singleLine[200];

  while(!feof(fPointer)){

    fgets(singleLine, 200, fPointer);
    puts(singleLine);
  }

  fclose(fPointer);

return 0;
}
