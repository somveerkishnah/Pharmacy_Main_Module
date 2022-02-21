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
                addOrders();
            break;
        case 2:
                viewO();
            break;
    }
<<<<<<< HEAD

=======
>>>>>>> 04926a86ae3004cf99196a9145fc17b1c2232e12
    return 0;
}
