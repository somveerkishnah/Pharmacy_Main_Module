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
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD

=======
>>>>>>> 04926a86ae3004cf99196a9145fc17b1c2232e12
=======
>>>>>>> 04926a86ae3004cf99196a9145fc17b1c2232e12
=======
>>>>>>> 2502e02b05be733f5821dcb6fe81b36dc306ae34
=======
>>>>>>> 50ab66de8cba3bc11efa1e147234dab7c814b67b
=======
>>>>>>> 50ab66de8cba3bc11efa1e147234dab7c814b67b
    return 0;
}
