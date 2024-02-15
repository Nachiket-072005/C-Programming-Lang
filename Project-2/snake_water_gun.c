#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int snakeWaterGun(char you, char comp)
{
    // Draw Conditions
    if (you == comp)
    {
        return 0;
    }
    // Non Draw Conditions
    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    if (you == 'g' && comp == 'w')
    {
        return -1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }
}

int main()
{
    char you, comp;
    // comp = 's';
    srand(time(0));
    int number = rand() % 100 + 1;
    if (number < 33)
    {
        comp = 's';
    }
    else if (number >= 33 && number < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
    printf("Enter 's' for snake, 'w' for water and 'g' for gun : \n");
    scanf("%c", &you);
    int result = snakeWaterGun(you, comp);
    printf("You chose %c and Comp chose %c\n", you, comp);
    if (result == 0)
    {
        printf("Draw game");
    }
    else if (result == 1)
    {
        printf("You win");
    }
    else
    {
        printf("You lose");
    }
    return 0;
}