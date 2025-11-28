#include <stdio.h>

struct Student{
    char name[30];
    int age;
    float totalMarks;
} s1, s2;

int main(){
    printf("Enter Student 1 Name: ");
    scanf("%s", s1.name);
    printf("Enter Student 1 Age: ");
    scanf("%d", &s1.age);
    printf("Enter Student 1 Total Marks: ");
    scanf("%f", &s1.totalMarks);
    printf("Enter Student 2 Name: ");
    scanf("%s", s2.name);
    printf("Enter Student 2 Age: ");
    scanf("%d", &s2.age);
    printf("Enter Student 2 Total Marks: ");
    scanf("%f", &s2.totalMarks);
    
    printf("\n\nStudent 1 Information: \nName: %s, Age: %d, TotalMarks: %.2f", s1.name, s1.age, s1.totalMarks);
    
    printf("\n\nStudent 2 Information: \nName: %s, Age: %d, TotalMarks: %.2f", s2.name, s2.age, s2.totalMarks);
    
    printf("\n\nAverage Total Marks: %.2f", (s1.totalMarks + s2.totalMarks)/2.0);
    return 0;
}
