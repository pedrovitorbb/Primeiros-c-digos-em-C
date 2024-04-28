#include <cs50.h>
#include <math.h>
#include <stdio.h>
int main(void){
    float troco;
    int cents, ind;
    int qtd = 0;

    int cash[] = {50,25,10,5,1};
    do
    {
        printf("Troca Devida: ");
        scanf("%f", &troco);
    }
    while(troco <= 0);

    cents = round(troco * 1);

    for (ind = 0; ind < 6; ind = ind + 1){
        while (cents - cash [ind] >=0 && cents >0){
            cents = cents - cash [ind];
            qtd = qtd + 1;
        }
    }
    printf("%d\n", qtd);
}



