#ifndef VIEW_INVENTORY_H_INCLUDED
#define VIEW_INVENTORY_H_INCLUDED
void inventoryView(){
    FILE *ptr;
    FILE *ptr2;
    FILE *ptr3;
    FILE *ptr4;
    ptr=fopen("Pharmacy_Sales_Module/SalesDetail.txt","r");
    ptr2=fopen("Pharmacy_Orders_Module/orders.txt","r");
    ptr3=fopen("Pharmacy_Inventory_Module/Inventory.txt","w");

    char data[]="SALES TXT:";
    if(strlen(data)>0){
        fputs(data,ptr3);
        fputs("\n",ptr3);
    }
   
    char c;
    while((c=fgetc(ptr))!= EOF){
        fputc(c,ptr3);
    }
    fclose(ptr);
    printf("\n Content of SalesDetail.txt copied to Inventory.txt\n");
    char data2[]="ORDERS TXT:";
    if(strlen(data2)>0){
        fputs("\n",ptr3);
        fputs(data2,ptr3);
        fputs("\n",ptr3);
    }
    
    char c2;
    while((c2=fgetc(ptr2))!= EOF){
        fputc(c2,ptr3);
    }
    printf(" Content of orders.txt copied to Inventory.txt\n\n");
    fclose(ptr2);
    fclose(ptr3);
    ptr4=fopen("Pharmacy_Inventory_Module/Inventory.txt","r");
    char c4;
    while((c4=fgetc(ptr4))!= EOF){
        printf("%c",c4);
    }
    fclose(ptr4);
}
#endif