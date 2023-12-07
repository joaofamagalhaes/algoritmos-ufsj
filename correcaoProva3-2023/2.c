#include <stdio.h>

int *frequencia_caracteres (char *arq){
    int *freq = (int *)malloc(26 * sizeof(int));
    for (int i = 0; i < 26; i++){
        freq[i] = 0;
    }
    FILE *fp = fopen (arq, "r");
    char aux = fgetc(fp);
    while (aux != EOF){
        if (aux >= 'a' && aux <= 'z'){ 
            freq[aux - 'a']++;
            aux = fgetc(fp);
        }    
    }

    fclose(fp);
    return freq;
}

int main (int argc, char **argv){

    int *v = frequencia_caracteres(argv[1]);
    char aux = 'a';
        for (int i = 0; i < 26; i++){
            printf("%c %d\n", aux, v[i]);
            aux++;
        }
    free(v);
    return 0;
}