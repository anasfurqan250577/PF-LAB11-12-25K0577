#include <stdio.h>
#include <stdlib.h>

struct Book{
    char title[100];
    char author[50];
    float price;
} b1, b2, b3;
int main(){
    printf("Enter Book 1 Title: ");
    scanf(" %s", b1.title);
    printf("Enter Book 1 Author: ");
    scanf(" %s", b1.author);
    printf("Enter Book 1 Price: ");
    scanf("%f", &b1.price);
    
    printf("Enter Book 2 Title: ");
    scanf(" %s", b2.title);
    printf("Enter Book 2 Author: ");
    scanf(" %s", b2.author);
    printf("Enter Book 2 Price: ");
    scanf("%f", &b2.price);
    
    printf("Enter Book 3 Title: ");
    scanf(" %s", b3.title);
    printf("Enter Book 3 Author: ");
    scanf(" %s", b3.author);
    printf("Enter Book 3 Price: ");
    scanf("%f", &b3.price);
    
    struct Book exp;
    if(b1.price > b2.price && b1.price > b3.price) exp = b1;
    else if(b2.price > b1.price && b2.price > b3.price) exp = b2;
    else exp = b3;
    
    struct Book low;
    if(b1.price < b2.price && b1.price < b3.price) low = b1;
    else if(b2.price < b1.price && b2.price < b3.price) low = b2;
    else low = b3;
    
    
    printf("\n\nMost Expensive Book: %s \nAuthor: %s, Price: %.2f", exp.title, exp.author, exp.price);
    printf("\n\nLeast Expensive Book: %s \nAuthor: %s, Price: %.2f", low.title, low.author, low.price);
    
    return 0;
}
