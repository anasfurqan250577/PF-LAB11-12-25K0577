#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playRPS(int r, int n, int cs, int us){
    if(r>n){
        printf("\nTotal Score \nComputer: %d, User: %d", cs, us);
        return;
    }
    srand(time(NULL));
    int c = rand()%3;
    int u;
    printf("\n\nRound %d", r);
    printf("\nEnter 0 for Rock \nEnter 1 for Paper \nEnter 2 for Scissor \nYour Choice: ");
    scanf("%d", &u);
    if(c==u) printf("\nRound Draw!");
    else if(c==0 && u==1){
        printf("\nUser Wins!"); 
        us++;
    } 
    else if(c==0 && u==2) {
        printf("\nComputer Wins!"); 
        cs++;
    }
    else if(c==1 && u==0){
         printf("\nComputer Wins!"); 
         cs++;
    }
    else if(c==1 && u==2) {
        printf("\nUser Wins!");
        us++;
    }
    else if(c==2 && u==0) {
        printf("\nUser Wins!"); 
        us++;
    }
    else if(c==2 && u==1){
        printf("\nComputer Wins!"); 
        cs++;
    }
    playRPS(r+1, n, cs, us);
}

int main(){
    int n;
    printf("Enter Number of Rounds: ");
    scanf("%d", &n);
    playRPS(1, n, 0, 0);
    return 0;
}
