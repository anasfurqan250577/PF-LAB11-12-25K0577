#include <stdio.h>

void menu(){
    printf("1. Addition \n2. Subtraction \n3. Exit");
    int choice, a, b;
    printf("\nEnter Your Choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("\nEnter two Numbers: ");
            scanf("%d %d", &a, &b);
            printf("Result: %d\n\n", a+b);
            menu();
            break;
        case 2:
            printf("\nEnter two Numbers: ");
            scanf("%d %d", &a, &b);
            printf("Result: %d\n\n", a-b);
            menu();
            break;
        case 3:
            printf("\nExiting....");
            return;
            break;
        default:
            printf("\nInvalid Choice");
            menu();
    }
}

int main(){
    menu();
    return 0;
}
