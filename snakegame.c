#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int i, j, height = 20, width = 40;
int gameover, score;
int x, y, fruitX, fruitY, flag;

int tailX[100], tailY[100];
int nTail;  // Length of the snake

void setup()
{
    gameover = 0;

    // Initial position of the snake
    x = height / 2;
    y = width / 2;

    // Initial position of the fruit
    label1:
    fruitX = rand() % 20;
    if (fruitX == 0)
        goto label1;
    label2:
    fruitY = rand() % 40;
    if (fruitY == 0)
        goto label2;

    score = 0;
}

void draw()
{
    system("cls");  // Clear the screen

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            if (i == 0 || i == width - 1
                || j == 0 || j == height - 1)
            {
                printf("#");  // Borders
            }
            else
            {
                if (i == x && j == y)
                    printf("0");  // Snake's head
                else if (i == fruitX && j == fruitY)
                    printf("*");  // Fruit
                else
                {
                    int isprint = 0;
                    for (int k = 0; k < nTail; k++)
                    {
                        if (i == tailX[k] && j == tailY[k])
                        {
                            printf("o");  // Snake's tail
                            isprint = 1;
                        }
                    }
                    if (isprint == 0)
                        printf(" ");
                }
            }
        }
        printf("\n");
    }

    printf("Score: %d", score);
    printf("\n");
    printf("Press X to quit the game");
}

void input()
{
    if (_kbhit())
    {
        switch (_getch())
        {
            case 'a':
                flag = 1;
                break;
            case 's':
                flag = 2;
                break;
            case 'd':
                flag = 3;
                break;
            case 'w':
                flag = 4;
                break;
            case 'x':
                gameover = 1;
                break;
        }
    }
}

void logic()
{
    Sleep(0.01);  // Add a small delay to control the game speed

    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;

    for (i = 1; i < nTail; i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (flag)
    {
        case 1:
            y--;
            break;
        case 2:
            x++;
            break;
        case 3:
            y++;
            break;
        case 4:
            x--;
            break;
        default:
            break;
    }

    // Check for collisions with borders
    if (x < 0 || x >= height
        || y < 0 || y >= width)
        gameover = 1;

    // Check for collisions with the tail
    for (int k = 0; k < nTail; k++)
    {
        if (x == tailX[k] && y == tailY[k])
            gameover = 1;
    }

    // If the snake eats the fruit
    if (x == fruitX && y == fruitY)
    {
        label3:
        fruitX = rand() % 20;
        if (fruitX == 0)
            goto label3;
        label4:
        fruitY = rand() % 40;
        if (fruitY == 0)
            goto label4;

        score += 10;
        nTail++;  // Increase the length of the snake
    }
}

int main()
{
    int m, n;

    setup();
    while (!gameover)
    {
        draw();
        input();
        logic();
    }
    return 0;
}
