#include <stdio.h>
#include <stdlib.h>
#include "Project1Helper.h"

int main() {
    int num = -1;

    char alex[20][200];
    int i=0;
    

    while (num != 6) {
        num = askQuestion();
        if (num == 1 || num == 2 || num == 3 || num == 6) doStuff(num);
        else if (num == 4) {
            printf("Enter Task to Add: ");
            scanf("%d", alex[i]);
            fgets(alex[i], 20, stdin);
            printf("Added %s", alex[i]);
            i++;
        } else if (num == 5) {
            printf("Tasklist\n\n");
            for (int j = 0; j < i; j++) {
                printf("%s", alex[j]);
            }
        }
    }
    
}
/*
PS C:\Users\alexn\Desktop\AP-CSP> cd "c:\Users\alexn\Desktop\AP-CSP\" ; if ($?) { gcc Project1.c -o Project1 } ; if ($?) { .\Project1 }
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
What would you like me to do?
[1] Pomodoro Timer
[2] Short Break
[3] Long Break
[4] Add Task
[5] View Tasklist
[6] Exit
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Enter Choice: 4
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Enter Task to Add: alex's first task
Added alex's first task
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
What would you like me to do?
[1] Pomodoro Timer
[2] Short Break
[3] Long Break
[4] Add Task
[5] View Tasklist
[6] Exit
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Enter Choice: 4
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Enter Task to Add: alex's second task
Added alex's second task
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
What would you like me to do?
[1] Pomodoro Timer
[2] Short Break
[3] Long Break
[4] Add Task
[5] View Tasklist
[6] Exit
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Enter Choice: 4
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Enter Task to Add: alex's third task
Added alex's third task
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
What would you like me to do?
[1] Pomodoro Timer
[2] Short Break
[3] Long Break
[4] Add Task
[5] View Tasklist
[6] Exit
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Enter Choice: 5
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Tasklist

alex's first task
alex's second task
alex's third task
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
What would you like me to do?
[1] Pomodoro Timer
[2] Short Break
[3] Long Break
[4] Add Task
[5] View Tasklist
[6] Exit
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Enter Choice: 2
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Rest Started
5:00 remaining
4:59 remaining
4:58 remaining
4:57 remaining
4:56 remaining
4:55 remaining
4:54 remaining
4:53 remaining
4:52 remaining
4:51 remaining
4:50 remaining
4:49 remaining
4:48 remaining
4:47 remaining
4:46 remaining
4:45 remaining
4:44 remaining
4:43 remaining
4:42 remaining
4:41 remaining
4:40 remaining
4:39 remaining
4:38 remaining
4:37 remaining
4:36 remaining
4:35 remaining
4:34 remaining
4:33 remaining
4:32 remaining
4:31 remaining
4:30 remaining
4:29 remaining
4:28 remaining
4:27 remaining
4:26 remaining
4:25 remaining
4:24 remaining
4:23 remaining
4:22 remaining
4:21 remaining
4:20 remaining
4:19 remaining
4:18 remaining
4:17 remaining
4:16 remaining
4:15 remaining
4:14 remaining
4:13 remaining
4:12 remaining
4:11 remaining
4:10 remaining
4:09 remaining
4:08 remaining
4:07 remaining
4:06 remaining
4:05 remaining
4:04 remaining
4:03 remaining
4:02 remaining
4:01 remaining
4:00 remaining
3:59 remaining
3:58 remaining
3:57 remaining
3:56 remaining
3:55 remaining
3:54 remaining
3:53 remaining
3:52 remaining
3:51 remaining
3:50 remaining
3:49 remaining
3:48 remaining
3:47 remaining
3:46 remaining
3:45 remaining
3:44 remaining
3:43 remaining
3:42 remaining
3:41 remaining
3:40 remaining
3:39 remaining
3:38 remaining
3:37 remaining
3:36 remaining
3:35 remaining
3:34 remaining
3:33 remaining
3:32 remaining
3:31 remaining
3:30 remaining
3:29 remaining
3:28 remaining
3:27 remaining
3:26 remaining
3:25 remaining
3:24 remaining
3:23 remaining
3:22 remaining
3:21 remaining
3:20 remaining
3:19 remaining
3:18 remaining
3:17 remaining
3:16 remaining
3:15 remaining
3:14 remaining
3:13 remaining
3:12 remaining
3:11 remaining
3:10 remaining
3:09 remaining
3:08 remaining
3:07 remaining
3:06 remaining
3:05 remaining
3:04 remaining
3:03 remaining
3:02 remaining
3:01 remaining
3:00 remaining
2:59 remaining
2:58 remaining
2:57 remaining
2:56 remaining
2:55 remaining
2:54 remaining
2:53 remaining
2:52 remaining
2:51 remaining
2:50 remaining
2:49 remaining
2:48 remaining
2:47 remaining
2:46 remaining
2:45 remaining
2:44 remaining
2:43 remaining
2:42 remaining
2:41 remaining
2:40 remaining
2:39 remaining
2:38 remaining
2:37 remaining
2:36 remaining
2:35 remaining
2:34 remaining
2:33 remaining
2:32 remaining
2:31 remaining
2:30 remaining
2:29 remaining
2:28 remaining
2:27 remaining
2:26 remaining
2:25 remaining
2:24 remaining
2:23 remaining
2:22 remaining
2:21 remaining
2:20 remaining
2:19 remaining
2:18 remaining
2:17 remaining
2:16 remaining
2:15 remaining
2:14 remaining
2:13 remaining
2:12 remaining
2:11 remaining
2:10 remaining
2:09 remaining
2:08 remaining
2:07 remaining
2:06 remaining
2:05 remaining
2:04 remaining
2:03 remaining
2:02 remaining
2:01 remaining
2:00 remaining
1:59 remaining
1:58 remaining
1:57 remaining
1:56 remaining
1:55 remaining
1:54 remaining
1:53 remaining
1:52 remaining
1:51 remaining
1:50 remaining
1:49 remaining
1:48 remaining
1:47 remaining
1:46 remaining
1:45 remaining
1:44 remaining
1:43 remaining
1:42 remaining
1:41 remaining
1:40 remaining
1:39 remaining
1:38 remaining
1:37 remaining
1:36 remaining
1:35 remaining
1:34 remaining
1:33 remaining
1:32 remaining
1:31 remaining
1:30 remaining
1:29 remaining
1:28 remaining
1:27 remaining
1:26 remaining
1:25 remaining
1:24 remaining
1:23 remaining
1:22 remaining
1:21 remaining
1:20 remaining
1:19 remaining
1:18 remaining
1:17 remaining
1:16 remaining
1:15 remaining
1:14 remaining
1:13 remaining
1:12 remaining
1:11 remaining
1:10 remaining
1:09 remaining
1:08 remaining
1:07 remaining
1:06 remaining
1:05 remaining
1:04 remaining
1:03 remaining
1:02 remaining
1:01 remaining
1:00 remaining
0:59 remaining
0:58 remaining
0:57 remaining
0:56 remaining
0:55 remaining
0:54 remaining
0:53 remaining
0:52 remaining
0:51 remaining
0:50 remaining
0:49 remaining
0:48 remaining
0:47 remaining
0:46 remaining
0:45 remaining
0:44 remaining
0:43 remaining
0:42 remaining
0:41 remaining
0:40 remaining
0:39 remaining
0:38 remaining
0:37 remaining
0:36 remaining
0:35 remaining
0:34 remaining
0:33 remaining
0:32 remaining
0:31 remaining
0:30 remaining
0:29 remaining
0:28 remaining
0:27 remaining
0:26 remaining
0:25 remaining
0:24 remaining
0:23 remaining
0:22 remaining
0:21 remaining
0:20 remaining
0:19 remaining
0:18 remaining
0:17 remaining
0:16 remaining
0:15 remaining
0:14 remaining
0:13 remaining
0:12 remaining
0:11 remaining
0:10 remaining
0:09 remaining
0:08 remaining
0:07 remaining
0:06 remaining
0:05 remaining
0:04 remaining
0:03 remaining
0:02 remaining
0:01 remaining
Timer Ended!
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
What would you like me to do?
[1] Pomodoro Timer
[2] Short Break
[3] Long Break
[4] Add Task
[5] View Tasklist
[6] Exit
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Enter Choice: 6
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/