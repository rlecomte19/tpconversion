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