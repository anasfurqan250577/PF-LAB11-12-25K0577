#include <stdio.h>

struct Time{
    int hours;
    int minutes;
    int seconds;
} t1, t2;

int main(){
    printf("Enter Time 1 Hour: ");
    scanf("%d", &t1.hours);
    printf("Enter Time 1 Minutes: ");
    scanf("%d", &t1.minutes);
    printf("Enter Time 1 Seconds: ");
    scanf("%d", &t1.seconds);
    printf("Enter Time 2 Hour: ");
    scanf("%d", &t2.hours);
    printf("Enter Time 2 Minutes: ");
    scanf("%d", &t2.minutes);
    printf("Enter Time 2 Seconds: ");
    scanf("%d", &t2.seconds);
    
    int th = t1.hours+t2.hours;
    int tm = t1.minutes+t2.minutes;
    int ts = t1.seconds+t2.seconds;
    
    if(ts>=60){
        tm+= (ts/60);
        ts -= 60;
    }
    if(tm>=60){
        th += (tm/60);
        tm -= 60;
    }
    
    printf("\n\nTOTAL TIME: %02d:%02d:%02d", th, tm, ts);
    return 0;
}
