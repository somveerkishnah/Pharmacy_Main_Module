#ifndef PHARMACY_MENU_PRODUCT_H_INCLUDED
#define PHARMACY_MENU_PRODUCT_H_INCLUDED

#include "addProduct.h"
#include "viewProduct.h"
#include "delete_product.h"

#include <stdio.h>
#include <stdlib.h>

void output(float);
int menuProducts()
{  
    float result;
    int c, n, t = 1;

    printf("Opened Product Module");
      
    while(t == 1)
    {
        printf("\nPlease choose an option:\n");
        printf("1. View product\n");
        printf("2. Add product\n");
        printf("3. Delete a line\n");
        printf("4. Exit\n\n");
        scanf("%d",&c);
 
        switch (c)
        {
            case 1: {
                viewProducts();
                break;
            }
            case 2: {
                addProducts();
                break;
            }
            case 3: {
                deleteProducts();
                break;
            }

            case 4: {
                t = 0;
                break;
            }
         
          default:
          printf("Error, choice not possible\n");
       }
    }
    t = 1;
}
#endif
