#ifndef ADD_DOCTOR_FILE
#define ADD_DOCTOR_FILE

void add()
{
    FILE * ptr;
    int n, c, id, age;
    char docName[100], hospitalName[100];

    printf("Enter the number of doctors you want to add: ");
    scanf("%d", &n);
    ptr = fopen("DoctorsDetailsNew.txt","a");
    if(ptr == NULL)
    {
        printf("Error!");   
        exit(1);             
    }

    for(int i=0;i<n;i++)
    {
        printf("\nEnter Doctor's name: ");
        scanf("%s", docName);
        printf("\nEnter Doctor's ID: ");
        scanf("%d", &id);
        printf("\nEnter Hospital name where the Doctor works at: ");
        scanf("%s", hospitalName);
        printf("\nEnter Doctor's age: ");
        scanf("%d", &age);
        fprintf(ptr,"\n %d \t\t %s \t\t %s \t\t %d \t\t", id, docName, hospitalName, age);
    }
    fclose(ptr);
}

#endif