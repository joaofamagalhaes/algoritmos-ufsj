// void preencheString(char str[MAX_TAM], int n){
//     for (int i = 0; i < n; i++){
//         str[i] = 'A' + (rand() % 26);
//     }
//     str[n] = '\0';
//     printf("%s\n", str);
// }


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


typedef struct{
  int id;
  char titulo[50];
  int likes;
  int dislikes;
  int views[10];
} Video;

void preencheVideo(Video *v, int id){
    
    int tamanho = 5 + (rand()%45);
    
    for (int i = 0; i < tamanho; i++){
        v->titulo[i] = 'A' + (rand() % 26);
    }
    v->titulo[tamanho] = '\0';

    v->likes = (rand()%1000);
    v->dislikes = (rand()%1000);

    for (int i = 0; i < 10; i++){
        v->views[i] = i  * 100;
    }
    
    printf("ID = %d\n", id);
    printf("Titulo = %s\n", v->titulo);
    printf("Likes = %d\n", v->likes);
    printf("Dislikes = %d\n", v->dislikes);
    printf("Views por dia = ");
    for(int i = 0; i < 10; i++){ 
        printf("%d ", v->views[i]);
    }
    printf("\n"); 
}

int ehTrending(Video v){
    int count = 0;
    for(int i = 0; i < 10; i++){ 
        if (v.views[i] >= v.views[i - 1]){
            count++;
        }
    }    
    if (count >= 9){
        printf("Trending :)\n");
    }else {
        printf("Flop :(\n");
    }
}

void troca(Video v[], int i, int j){
    
}

int main (){
    srand(time(NULL));
    Video v_aux, v_aux2;
    int id_aux = (rand()%100);
    preencheVideo(&v_aux, id_aux);
    ehTrending(v_aux2);

    return 0;
}