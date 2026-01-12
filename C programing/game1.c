#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define ROWS 20
#define COLS 30

int snake[ROWS*COLS][2];    // snake body
int length = 1;             // length of the snake
int dir = 3;                // direction of the snake: 1=up, 2=left, 3=down, 4=right
int food[2];                // food position
int score = 0;              // current score

void init();                // initialize the game
void draw();                // draw the game board
void input();               // handle user input
void update();              // update the game state
int check();                // check if the game is over

int main()
{
    init();                 // initialize the game
    while (1)
    {
        draw();             // draw the game board
        input();            // handle user input
        update();           // update the game state
        if (check()) break; // check if the game is over
        Sleep(100);         // sleep for 100 milliseconds
    }
    printf("Game over!\nYour score: %d\n", score);
    return 0;
}

void init()
{
    // set initial snake position and direction
    snake[0][0] = ROWS/2;
    snake[0][1] = COLS/2;
    dir = 3;

    // generate random food position
    srand((unsigned)time(NULL));
    food[0] = rand() % ROWS;
    food[1] = rand() % COLS;
}

void draw()
{
    system("cls");      // clear the console

    // draw the game board
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (i == snake[0][0] && j == snake[0][1])
            {
                printf("O");    // draw the snake head
            }
            else if (food[0] == i && food[1] == j)
            {
                printf("*");    // draw the food
            }
            else
            {
                int found = 0;
                for (int k = 1; k < length; k++)
                {
                    if (snake[k][0] == i && snake[k][1] == j)
                    {
                        printf("o");    // draw the snake body
                        found = 1;
                        break;
                    }
                }
                if (!found)
                {
                    printf(" ");    // draw an empty space
                }
            }
        }
        printf("\n");       // move to the next row
    }

    // print the score
    printf("Score: %d\n", score);
}

void input()
{
    if (_kbhit())   // check if a key is pressed
    {
        switch (_getch())   // handle the key press
        {
            case 'w':
                dir = 1;
                break;
            case 'a':
                dir = 2;
                break;
            case 's':
                dir = 3;
                break;
            case 'd':
                dir = 4;
                break;
        }
    }
}

void update()
{
    // move the snake body
    for (int i = length-1; i > 0;);
