#include <stdio.h>
#include <stdlib.h>

struct Publication{
    char p_name[30];
    int p_year;
};

struct Availability{
    int copiesAv;
    int totalCopies;
};

struct Book{
    int b_id;
    char b_title[50];
    char b_author[30];
    struct Publication pub;
    struct Availability avail;
};

typedef struct Book Book;

void inputBook(Book *b, int n){
    for(int i=0; i<n; i++){
        printf("Enter Book %d ID: ", i+1);
        scanf("%d", &b[i].b_id);
        getchar();
        printf("Enter Book %d Title: ", i+1);
        fgets(b[i].b_title, 50, stdin);
        printf("Enter Book %d Author: ", i+1);
        fgets(b[i].b_author, 30, stdin);
        printf("Enter Book %d Publisher Name: ", i+1);
        fgets(b[i].pub.p_name, 30, stdin);
        printf("Enter Book %d Publication Year: ", i+1);
        scanf("%d", &b[i].pub.p_year);
        printf("Enter Book %d Copies Available: ", i+1);
        scanf("%d", &b[i].avail.copiesAv);
        printf("Enter Book %d Total Copies: ", i+1);
        scanf("%d", &b[i].avail.totalCopies);
    }
}

void displayBooks(Book *b, int n){
    for(int i=0; i<n; i++){
        printf("\nBook %d ID: %d", i+1, b[i].b_id);
        printf("\nBook %d Title: %s", i+1, b[i].b_title);
        printf("Book %d Author: %s", i+1, b[i].b_author);
        printf("Book %d Publisher Name: %s", i+1, b[i].pub.p_name);
        printf("Book %d Publication Year: %d", i+1, b[i].pub.p_year);
        printf("\nBook %d Copies Available: %d", i+1, b[i].avail.copiesAv);
        printf("\nBook %d Total Copies: %d", i+1, b[i].avail.totalCopies);
    }
}

void updateCopies(Book *b, int n){
    int id, idx, update;
    printf("Enter Book ID: ");
    scanf("%d", &id);
    for(int i=0; i<n; i++){
        if(b[i].b_id==id) idx = i;
    }
    
    printf("Copies: %d", b[idx].avail.copiesAv);
    printf("\nEnter Updated Copies: ");
    scanf("%d", &update);
    b[idx].avail.copiesAv = update;
    printf("\nCopies Updated!");
}

void findBookByID(Book *b, int n){
    int id, idx;
    printf("Enter Book ID: ");
    scanf("%d", &id);
    for(int i=0; i<n; i++){
        if(b[i].b_id==id) idx = i;
    }
    printf("Book Details");
    printf("\nBook Title: %s", b[idx].b_title);
    printf("\nBook Author: %s", b[idx].b_author);
    printf("Book Publisher Name: %s", b[idx].pub.p_name);
    printf("Book Publication Year: %d", b[idx].pub.p_year);
    printf("\nBook Copies Available: %d", b[idx].avail.copiesAv);
    printf("\nBook Total Copies: %d", b[idx].avail.totalCopies);
}

int main(){
    int n, choice;
    printf("Enter Number Of Books You Want To Enter: ");
    scanf("%d", &n);
    Book *b = malloc(n*sizeof(Book));   
    do{
        printf("\n1. Input Books \n2. Display Books \n3. Update Copies \n4. Find Book By ID \n5. Exit");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                inputBook(b, n);
                break;
            case 2:
                displayBooks(b, n);
                break;
            case 3:
                updateCopies(b, n);
                break;
            case 4:
                findBookByID(b, n);
                break;
            case 5:
                printf("\nExiting...");
                break;
            default:
                printf("\nInvalid Choice...");
        }
    }while(choice != 5);
    
    return 0;
}
