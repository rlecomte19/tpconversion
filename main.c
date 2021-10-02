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
    // ######## bintodec(va;) ######## 
    char val[8] =  { '0','1','0','1','1','0','1' };
    int valsize = sizeof(val);

    int decimal = bintodec(val);
    printf("\nBinaire converti 'bintodec' : %d\n", decimal);
    

    // ######## dectobinv2(val) ######## 
    char *tobin = dectobin_v2(205);
    printf("\Binaire converti du decimal'dectobinv2 : ");
    for(int i=(sizeof(tobin)-1); i>=0;i--){
        printf("%c", tobin[i]);
    }
    printf("\n");


    // ######## hexatodec(val) ######## 
    char *hexa = "A5";
    int decfromhexa;
    decfromhexa = hexatodec(hexa);

    printf("\nDecimal converti de l'hexa : %d \n", decfromhexa);

    // ######## dectohexa(val) ######## 
    char *tohexa = dectohexa(2514);
    printf("\nHexadecimal converti du decimal 'dectohexa' : ");
    for(int i=(strlen(tohexa)-1); i>=0;i--){
        printf("%c", tohexa[i]);
    }
    printf("\n");
}

 

