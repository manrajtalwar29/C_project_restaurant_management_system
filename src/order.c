#include <stdio.h>
#include <string.h>
#include "order.h"

struct Order orders[100];
int orderCount = 0;

void addOrder() {
    if (orderCount == 100) {
        printf("Sorry, order list is full.\n");
        return;
    }

    printf("Enter table number: ");
    scanf("%d", &orders[orderCount].table);

    printf("Enter item name: ");
    scanf(" %[^\n]", orders[orderCount].item);

    printf("Enter quantity: ");
    scanf("%d", &orders[orderCount].quantity);

    printf("Enter price per item: ");
    scanf("%f", &orders[orderCount].price);

    orderCount++;
    printf("Order added successfully.\n");
}

void displayOrders() {
    if (orderCount == 0) {
        printf("No orders placed yet.\n");
        return;
    }

    printf("\nTable\tItem\t\tQuantity\tPrice\t\tTotal\n");
    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < orderCount; i++) {
        float total = orders[i].quantity * orders[i].price;
        printf("%d\t%-15s %d\t\t%.2f\t\t%.2f\n",
            orders[i].table,
            orders[i].item,
            orders[i].quantity,
            orders[i].price,
            total
        );
    }
}

void generateBill() {
    int tableNo;
    printf("Enter table number to generate bill: ");
    scanf("%d", &tableNo);

    float billTotal = 0;
    int found = 0;

    printf("\nBill for table %d:\n", tableNo);
    printf("Item\t\tQuantity\tPrice\t\tTotal\n");
    printf("-------------------------------------------------\n");

    for (int i = 0; i < orderCount; i++) {
        if (orders[i].table == tableNo) {
            float total = orders[i].quantity * orders[i].price;
            printf("%-15s %d\t\t%.2f\t\t%.2f\n",
                orders[i].item,
                orders[i].quantity,
                orders[i].price,
                total
            );
            billTotal += total;
            found = 1;
        }
    }

    if (!found) {
        printf("No orders found for table %d.\n", tableNo);
        return;
    }

    printf("\nTotal Bill: %.2f\n", billTotal);
}

void deleteOrders() {
    int tableNo;
    printf("Enter table number to delete all orders: ");
    scanf("%d", &tableNo);

    int i = 0, found = 0;

    while (i < orderCount) {
        if (orders[i].table == tableNo) {
            for (int j = i; j < orderCount - 1; j++) {
                orders[j] = orders[j + 1];
            }
            orderCount--;
            found = 1;
        } else {
            i++;
        }
    }

    if (found)
        printf("All orders for table %d have been deleted.\n", tableNo);
    else
        printf("No orders found for table %d.\n", tableNo);
}
