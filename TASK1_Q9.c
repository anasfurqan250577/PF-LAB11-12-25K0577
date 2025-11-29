#include <stdio.h>
#include <string.h>

void reverse(char *str, int i, int j){
    if(i>=j) return;
    
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    reverse(str, i+1, j-1);
}

int main(){
    char str[100];
    printf("Enter String: ");
    fgets(str, 100, stdin);
    reverse(str, 0, strlen(str)-2);
    printf("Reversed String: %s", str);
    return 0;
}
