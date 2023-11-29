#include <stdio.h>
#include <string.h>  // Protótipo de codigo de criacao de times de duendes, inacabado.
#include <time.h>
#include <stdlib.h>

#define MAX_DUENDES 30
#define MAX_NOME 20

typedef struct {
    int id;
    char nome[MAX_NOME];
    int idade;
} Duendes;

void iniTime(Duendes *d, char nome[], int idade, int id){
    strcpy(d[id].nome, nome);
    d[id].idade = idade;
    d[id].id = id;
}

void organizaTime (Duendes *d,  int id){
    Duendes velho, medio, novo;
    novo = d[id + 1];
    medio = d[id + 2];
    velho = d[id + 3];

    printf("\nTime %d\n", id);

    if (novo.idade > medio.idade && novo.idade > velho.idade){
        Duendes temp = velho;
        velho = novo;
        novo = temp;
    }else if (medio.idade > velho.idade && medio.idade > novo.idade){
        Duendes temp = velho;
        velho = medio;
        medio = temp;
    } else if (medio.idade < novo.idade){
        Duendes temp = medio;
        medio = novo;
        novo = temp;
    }


    printf("%s %d\n", velho.nome, velho.idade);
    printf("%s %d\n", medio.nome, medio.idade);
    printf("%s %d\n\n", novo.nome, novo.idade);
}

int main (){
    srand(time(NULL));

    Duendes duende[MAX_DUENDES];
    int num_duendes, i;
    scanf("%d", &num_duendes); 

    for(i = 0; i <= num_duendes; i++){
        fgets(duende[i].nome, MAX_NOME, stdin);
        duende[i].nome[strcspn(duende[i].nome, "\n")] = '\0';
        duende[i].idade = rand()%100 + 10 ;
        iniTime(duende, duende[i].nome, duende[i].idade, i);
    }

     
    organizaTime(duende, i);
   
    

    return 0;
}