#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status{CONTINUE, WON, LOST};

int rollDice(void);

int main()
{
    int sum;
    int myPoint;

    enum Status gameStatus;

    srand(time(NULL));

    sum = rollDice();

    switch(sum){
        case 7:
        case 11:
            gameStatus = WON;
            break;

        case 2:
        case 3:
        case 12:
            gameStatus = LOST;
            break;

        default:
            gameStatus = CONTINUE;
            myPoint = sum;
            printf("Pont: %d\n", myPoint);
            break;
    }

    while(gameStatus == CONTINUE){
        sum = rollDice();

        if(sum == myPoint){
            gameStatus = WON;
        }else{
            if(sum == 7){
                gameStatus = LOST;
            }
        }
    }

    if(gameStatus == WON){
        printf("Winner");
    }else{
        printf("Loser");
    }
    return 0;
}

int rollDice(void){
    int dice1;
    int dice2;
    int workSum;

    dice1 = 1 + (rand() % 6);
    dice2 = 1 + (rand() % 6);
    workSum = dice1 + dice2;

    printf("Player roll %d + %d = %d \n", dice1,dice2, workSum);
    return workSum;
}

