#include <stdio.h>

int *frequencia_caracteres (char *arq){
    int *freq = (int *)malloc(26 * sizeof(int));
    for (int i = 0; i < 26; i++){
        freq[i] = 0;
    }
    FILE *fp = fopen (arq, "r");
    char aux = fgetc(fp);
    while (aux != EOF){
        freq[aux - 'a']++;
        aux = fgetc(fp);
    }
    fclose(fp);
    return freq;
}