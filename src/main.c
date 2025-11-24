#include <stdio.h>
#include "order.h"

int main() {
    int choice;

    do {
        printf("\n--- Restaurant Order Management ---\n");
        printf("1. Add Order\n");
        printf("2. Show Orders\n");
        printf("3. Generate Bill\n");
        printf("4. Delete Orders\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addOrder(); break;
            case 2: displayOrders(); break;
            case 3: generateBill(); break;
            case 4: deleteOrders(); break;
            case 5: printf("Thank you!\n"); break;
            default: printf("Please enter a valid choice (1-5).\n");
        }

    } while(choice != 5);

    return 0;
}
