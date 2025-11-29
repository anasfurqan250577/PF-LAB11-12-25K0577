#include <stdio.h>
#include <stdlib.h>

struct Customer{
    char name[50];
    char city[50];
    char phone[15];
};

struct Product{
    char name[50];
    float unitPrice;
    int quantity;
};

struct Order{
    int id;
    struct Customer cust;
    struct Product prod;
    float totalBill;
};

typedef struct Order Order;

int main(){
    int n;
    printf("Enter Number of Orders: ");
    scanf("%d", &n);
    getchar();
    
    Order *o = malloc(n * sizeof(Order));
    
    printf("Enter Customer Name: ");
    fgets(o->cust.name, 50, stdin);
    printf("Enter Customer City: ");
    fgets(o->cust.city, 50, stdin);
    printf("Enter Customer Phone: ");
    fgets(o->cust.phone, 15, stdin);
    
    float total = 0;
    
    for(int i=0; i<n; i++){
        printf("Enter Order %d Id: ", i+1);
        scanf("%d", &o[i].id);
        getchar();
        printf("Enter Order %d Product Name: ", i+1);
        fgets(o[i].prod.name, 50, stdin);
        printf("Enter Order %d Product Price: ", i+1);
        scanf("%f", &o[i].prod.unitPrice);
        printf("Enter Order %d Product Quantity: ", i+1);
        scanf("%d", &o[i].prod.quantity);
        o[i].totalBill = o[i].prod.unitPrice * o[i].prod.quantity;
        printf("Bill: %.2f\n", o[i].totalBill);
        total += o[i].totalBill;
    }
    printf("\nFinal Summary");
    printf("\nCustomer: %sCity: %sPhone: %s", o->cust.name, o->cust.city, o->cust.phone);
    for(int i=0; i<n; i++){
        printf("Order %d: ", i+1);
        printf("\nName: %sPrice: %.2f, Quantity: %d", o[i].prod.name, o[i].prod.unitPrice, o[i].prod.quantity);
    }
    printf("\nTotal Bill: %.2f", total);
    return 0;
}
