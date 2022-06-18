#include <stdio.h>
void jolly(char fellow[]);
void jolly(char fellow[])
{
    int times;
    times = 0;
    while (times <= 2)
    {
        printf(fellow);
        times ++;
    }
}

int main(void)
{
    jolly("For he's a jolly good fellow! \n");
    printf("Which nobody can deny! \n");
}