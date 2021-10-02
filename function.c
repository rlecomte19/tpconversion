int bintodec(char *val){
    int index = sizeof(val) - 1;
    int dec = val[index];

    for(int i=index-1;i>=0;i--){
        int base = 1;
        int j=index;

        do{
            base *= 2;
            j--;
        }while(j>i);
       
        dec += val[i] * base;
        int test = val[i] * base;
        printf("\nBase a ce moment : %d",base);
        printf("\nCalcul a ce moment : %d",test);
        printf("\nValeur a ce moment : %d ", val[i]);
        printf("\nDecimal a ce moment : %d", dec);
        printf("\n##########\n");
    } 
    return dec;
}

int hexatodec(char *val){
    int valsym=0;
    int result=0;
    int powcalc=1;
    int valSym = 0;
    int valsize = sizeof(val) / sizeof(char);
    printf("\nTAILLE CHAR IMPORTANT : %lu\n", sizeof(char));
    
    printf("\nTAILLE TABLEAU IMPORTANT : %d\n", valsize);
    for(int i=0; i<sizeof(val);i++){
        int base=1; 
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
                    // ASCII 5 = 53 decimal et ASCII 0 = 48 decimal => on en fait la soustraction pour bien retomber sur le 5 en tant qu'int 
                    valSym = val[i] - '0';
                break;
        }
        for(int j=0;j<=i;j++){
            base*=16;
        }
        printf("\nValeur symbole : %d", valSym);
        printf("\nValeur base : %d", base);
        result += (valSym * base);
        printf("\nValeur decimale : %d", result);
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
