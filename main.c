#include <stdlib.h>
#include <stdio.h>
#include "function.c"

#pragma region
int bintodec(char *val);
int hexatodec(char *val);
char *dectohexa(unsigned int val);
char *dectobin_v1(unsigned int val);
char *dectobin_v2(unsigned int val);
char *dectobin_v3(unsigned int val);
char *dectohexa_v2(unsigned int val);
#pragma endregion

int main(int argc, char *argv[]){
    // char val[8] =  { 1,0,1,0,1,1,0,1 };
    // int valsize = sizeof(val);

    // int decimal = bintodec(val);

    char *tobin = dectobin_v2(205);

    // printf("Binaire converti 'dectobin' : %d", decimal);
    printf("Decimal converti 'bintodecv2 : ");
    for(int i=(sizeof(tobin)-1); i>=0;i--){
        printf("%d", tobin[i]);
    }
    printf("\n");
}

 

