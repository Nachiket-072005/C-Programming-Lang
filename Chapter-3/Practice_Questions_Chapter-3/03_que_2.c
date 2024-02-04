#include<stdio.h>

int main(){
    float physics, chemistry, maths;
    float total;

    printf("Enter physics marks(0 - 100) : \n");
    scanf("%f", &physics);
    printf("Enter chemistry marks(0 - 100) : \n");
    scanf("%f", &chemistry);
    printf("Enter maths marks(0 - 100) : \n");
    scanf("%f", &maths);

    total = (physics + chemistry + maths)/3;


    if((total < 40) || (physics < 33) || (chemistry < 33) || (maths < 33)){
        printf("Sorry...better luck next time...!! Your percentage is %f and you are fail", total);
    } 
    else {
        printf("Congratulations...!! Your percentage is %f and you are pass", total);
    }

    return 0;
}