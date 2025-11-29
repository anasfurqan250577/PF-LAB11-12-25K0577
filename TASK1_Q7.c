#include <stdio.h>
#include <stdlib.h>
void guessNumber(int n, int g, int a){
    if(g < n){
        printf("\nToo Low");
        int s;
        printf("\nEnter Again: ");
        scanf("%d", &s);
        guessNumber(n, s, a+1);
    }
    if(g > n){
        printf("\nToo High");
        int s;
        printf("\nEnter Again: ");
        scanf("%d", &s);
        guessNumber(n, s, a+1);
    }
    if(g==n){
        printf("\nCorrect Guess");
        printf("\nTotal Attempts: %d", a);
    }
}
int main(){
    int n = (rand()%50)+1;
    int g, a=1;
    printf("Enter Your Guess: ");
    scanf("%d", &g);
    guessNumber(n, g, a);
    return 0;
}
