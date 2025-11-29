#include <stdio.h>

void printStar(int count){
    if(count==0) return;
    
    printf("*");
    printStar(count-1);
}

void patternUpward(int n, int currentRow){
    if(currentRow > n) return;
    
    printStar(currentRow);
    printf("\n");
    patternUpward(n, currentRow+1);
}

void patternDownward(int n, int currentRow){
    if(currentRow > n) return;
    
    printStar(n - currentRow + 1);
    printf("\n");
    patternDownward(n, currentRow+1);
}

int main(){
    int n;
    printf("Enter width: ");
    scanf("%d", &n);
    patternDownward(n, 1);
    patternUpward(n, 2);
}
