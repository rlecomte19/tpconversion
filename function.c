#include <string.h>

int bintodec(char *val){
    int result=0,valSym=0,base=1;
    int valsize = strlen(val);

    for(int i=valsize-1; i>=0;i--){
        valSym = val[i] - '0';
        result += valSym * base;
        base *= 2;
    }

    return result;
}

int hexatodec(char *val){
    int result=0,valSym=0,base=1;
    int valsize = strlen(val);

    for(int i=valsize-1; i>=0;i--){
        switch(val[i]){
                case 'A':
                    valSym = 10;
                break;
                case 'B':
                    valSym = 11;
                break;
                case 'C':
                    valSym = 12;
                break;
                case 'D':
                    valSym = 13;
                break;
                case 'E':
                    valSym = 14;
                break;
                case 'F':
                    valSym = 15;
                break;
                default:
                    // ASCII 5 = 53 decimal et ASCII 0 = 48 decimal => on en fait la soustraction pour bien retomber sur le 5 en tant qu'entier
                    valSym = val[i] - '0';
                break;
        }
        result += (valSym * base);
        base *= 16;
    }

    return result;
    
}

char *dectobin_v2(unsigned int val){
    char *tobin = malloc(100);
    
    int i=0;

    while(val>0){
        if(val%2 == 0){
            tobin[i]='0';
        }else{
            tobin[i]='1';
        }
        val = val / 2; 
        i++;
    }
    tobin+='\0';
    return tobin;
}

char *dectobin_v1(unsigned int val){
    char *tobin = malloc(100);
    int power = 1;
    int nbPower = 0;

    while(power <= val){
        power*=2;
        nbPower++;
    }
    power/=2;

    int powerList[nbPower-1];
    size_t len = sizeof(powerList)/sizeof(int);

    for(int i=0;i<=nbPower; i++){
        powerList[i] = power;
        power/=2;
    }

    for(int j=0; j<=len;j++){
        printf("Valeur val : %d \n Valeur power : %d \n", val, powerList[j]);
        if(val < powerList[j]){
            tobin[j] = '0';
        }else{
            tobin[j] = '1';
            val -= powerList[j];
        }
    }

    return tobin;
}
char *dectohexa(unsigned int val)
{
    
    char *tohexa = malloc(100);
 
    int i=0;

    while (val != 0) {
        
        int remains=0;
        remains = val%16;

        if (val%16 < 10) {
            tohexa[i] = remains + '0';
            i++;
        }
        else {
            tohexa[i] = remains + 55;
            i++;
        }
 
        val /= 16;
    }

    return tohexa;
}

char *dectobin_v3(unsigned int val){
    char *tobin = malloc(100);
    int wised = 32768;

    for (int i=0; wised > 0; i++) {
        if ((val & wised) == 0){
            tobin[i] = '0';
        }
        else{
            tobin[i] = '1';
        }
        wised = wised >> 1;
    }
    return tobin;
}

char *dectohexa_v2(unsigned int val){
    char *tohexa = malloc(100);
    unsigned char mask = 0XF;
    char regex[100] = "0123456789ABCDEF";

    for(int i=0; val > 0; i++){
        tohexa[i--] = regex[(val & mask)];
        val >>= 4;
        i++;
    }
    return tohexa;
}
