#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define MAX_X 20
#define MAX_Y 20
#define INITIAL_LENGTH 5
#define SLEEP_TIME 200

int x, y, fruitX, fruitY, score, gameover;
int tailX[100], tailY[100], nTail;
enum direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
enum direction dir;

void Setup() {
    gameover = 0;
    dir = STOP;
    x = MAX_X / 2;
    y = MAX_Y / 2;
    fruitX = rand() % MAX_X;
    fruitY = rand() % MAX_Y;
    score = 0;
}

void Draw() {
    system("cls");
    for (int i = 0; i < MAX_X + 2; i++) {
        printf("#");
    }
    printf("\n");

    for (int i = 0; i < MAX_Y; i++) {
        for (int j = 0; j < MAX_X; j++) {
            if (j == 0) {
                printf("#");
            }
            if (i == y && j == x) {
                printf("O");
            }
            else if (i == fruitY && j == fruitX) {
                printf("F");
            }
            else {
                int printTail = 0;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        printf("o");
                        printTail = 1;
                    }
                }
                if (!printTail) {
                    printf(" ");
                }
            }
            if (j == MAX_X - 1) {
                printf("#");
            }
        }
        printf("\n");
    }

    for (int i = 0; i < MAX_X + 2; i++) {
        printf("#");
    }
    printf("\n");
    printf("Score: %d\n", score);
}

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'w':
            dir = UP;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'x':
            gameover = 1;
            break;
        }
    }
}

void Logic() {
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    switch (dir) {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    }
    if (x >= MAX_X) {
        x = 0;
    }
    else if (x < 0) {
        x = MAX_X - 1;
    }
    if (y >= MAX_Y) {
