#include <stdio.h>
void goodMorning();
void goodAfternoon();
void goodEvening();
int main()
{
    goodMorning();

    return 0;
}

void goodMorning()
{
    printf("Good Morning!\n");
    goodAfternoon();
}

void goodAfternoon()
{
    printf("Good Afternoon!\n");
    goodEvening();
}

void goodEvening()
{
    printf("Good Evening!\n");
}