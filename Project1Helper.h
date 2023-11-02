#include <stdio.h>
#include <time.h>
#include <unistd.h>



int myTimer(int min, int type) {
    if (type == 0) printf("Timer Started!");
    else if (type == 1) printf("Rest Started");
    int timeremaining = min * 60;
    while (timeremaining != 0) {
        int minutes = timeremaining / 60;
        int seconds = timeremaining - minutes * 60;
        printf("");
        if(seconds == 0) {
            printf("\n%d:%d0 remaining", minutes, seconds);
        } else if (seconds < 10) {
            printf("\n%d:0%d remaining", minutes, seconds);
        } else {
            printf("\n%d:%d remaining", minutes, seconds);
        }
        sleep(0.1);
        timeremaining--;
    }
    printf("\nTimer Ended!\n");
    return 0;
}

int askQuestion() {
    int num;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("What would you like me to do?\n");
    printf("[1] Pomodoro Timer\n");
    printf("[2] Short Break\n");
    printf("[3] Long Break\n");
    printf("[4] Add Task\n");
    printf("[5] View Tasklist\n");
    printf("[6] Exit\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");


    printf("Enter Choice: ");
    scanf("%d", &num);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    return num;
}

void doStuff(int num) {
    if (num == 1) myTimer(25, 0);
    if (num == 2) myTimer(5, 1);
    if (num == 3) myTimer (5, 1);
}