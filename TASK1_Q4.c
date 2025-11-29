#include <stdio.h>
struct Date{
    int day;
    int month;
    int year;
} d1, d2;
int main(){
    printf("Enter Date 1");
    printf("\nDD MM YY : ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);

    printf("Enter Date 2");
    printf("\nDD MM YY : ");
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);
    
    if(d1.day>d2.day) printf("Diff btw Days: %d", d1.day-d2.day);
    else printf("Diff btw Days: %d", d2.day-d1.day);
    return 0;
}
