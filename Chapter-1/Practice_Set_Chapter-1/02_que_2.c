#include <stdio.h>
#define PI 3.14

int main()
{
    int radius = 3;
    float area = PI * radius * radius;
    printf("The value of circle is %f \n", area);
    int height = 3;
    float volume = PI * radius * radius * height;
    printf("The volume of circle is %f \n", volume);
    return 0;
}