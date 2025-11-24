#ifndef ORDER_H
#define ORDER_H

struct Order {
    int table;
    char item[50];
    int quantity;
    float price;
};

extern struct Order orders[100];
extern int orderCount;

void addOrder();
void displayOrders();
void generateBill();
void deleteOrders();

