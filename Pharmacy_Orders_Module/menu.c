#include <stdio.h>
#include "Add_Orders.h"
#include "viewOrders.h"

int main()
{
    printf("\t-----ORDERS MODULE FOR PHARMACY PROJECT-----\n");

    int choice;
    printf("Please indicate what you wish to do!\n");
    printf("Press number 1 to register a new order\n");
    printf("Press number 2 to view the current orders\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
                ADD_ORDERS();
            break;
        case 2:
                viewO();
            break;
    }

    return 0;
}
