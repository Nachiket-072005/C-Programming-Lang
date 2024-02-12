#include<stdio.h>

typedef struct date
{
    int date;
    int month;
    int year;
}d;

void display(d d1) {
    printf("The value of date is %d/%d/%d\n", d1.date, d1.month, d1.year);
}

int dateCmp(d d1, d d2) {
    if(d1.year > d2.year) {
        return 1;
    }
    if(d1.year < d2. year) {
        return -1;
    }
    if(d1.month > d2.month) {
        return 1;
    }
    if(d1.month < d2.month) {
        return -1;
    }
    if(d1.date > d2.date) {
        return 1;
    }
    if(d1.date < d2.date) {
        return -1;
    }
    return 0;
}

int main(){
    d d1, d2;
    printf("Enter the value of date : \n");
    scanf("%d", &d1.date);
    printf("Enter the value of month : \n");
    scanf("%d", &d1.month);
    printf("Enter the value of year : \n");
    scanf("%d", &d1.year);

    printf("Enter the value of date : \n");
    scanf("%d", &d2.date);
    printf("Enter the value of month : \n");
    scanf("%d", &d2.month);
    printf("Enter the value of year : \n");
    scanf("%d", &d2.year);

    display(d1);
    display(d2);

    int c = dateCmp(d1, d2);
    printf("Date comparision function return %d\n", c);
    return 0;
}