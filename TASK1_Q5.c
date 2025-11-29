#include <stdio.h>
#include <string.h>
int Palindrome(char *str, int i, int j){
    if(i>=j) return 1;
    if(str[i]!=str[j]) return 0;
    return Palindrome(str, i+1, j-1);
}
int main() {
    char str[50];
    printf("Enter Your String: ");
    scanf("%s", str);
    if(Palindrome(str, 0, strlen(str)-1)) printf("Palindrome");
    else printf("Not Palindrome");
}
