#include <stdlib.h>
#include <stdio.h>
#include "function.c"
#include <string.h>

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
    // ######## BINTODEC(VAL) ######## 
    // char val[8] =  { '1','0','1','0','1','1','0','1' };
    // int valsize = sizeof(val);

    // int decimal = bintodec(val);
    // printf("Binaire converti 'dectobin' : %d", decimal);
    

    // ######## DECTOBIN(VAL) ######## 
    // char *tobin = dectobin_v2(205);
    // printf("Decimal converti 'bintodecv2 : ");
    // for(int i=(sizeof(tobin)-1); i>=0;i--){
    //     printf("%c", tobin[i]);
    // }
    // printf("\n");


    // ######## HEXATODEC(VAL) ######## 
    // char hexa[2];
    // hexa[0] = 'A'; 
    // hexa[1] = '5';
    // int decfromhexa;
    // decfromhexa = hexatodec(hexa);

    // printf("\nDecimal converti de l'hexa : %d \n", decfromhexa);

    // ######## DECTOBIN(VAL) ######## 
    char *tohexa = dectohexa(205);
    printf("Decimal converti 'dectohexa' : ");
    for(int i=(strlen(tohexa)-1); i>=0;i--){
        printf("%c", tohexa[i]);
    }
    printf("\n");
}

 

