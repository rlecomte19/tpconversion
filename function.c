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

char *dectobin_v2(unsigned int val){
    char *tobin = malloc(100);
    int i=0;

    while(val>0){
        printf("DEBUT BOUCLE ENTIER : %d\n", val);
        if(val%2 == 0){
            tobin[i]='0';
            printf("#### CONDITION 0 ####\n");
            printf("entier : %d \n", val);
            printf("reste : %d \n", val%2);
            printf("tableau indice %d : %c", i,tobin[i]);
        }else{
            tobin[i]='1';
            printf("#### CONDITION 0 ####");
            printf("entier : %d \n", val);
            printf("reste : %d \n", val%2);
            printf("tableau indice %d : %c", i,tobin[i]);
        }
        val = val / 2; 
        i++;
    }
    tobin+='\0';
    return tobin;
}