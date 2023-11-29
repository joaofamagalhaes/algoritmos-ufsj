#include <stdio.h>

void imprimeMatriz(int *m, int num_l, int num_c){
  for (int i = 0; i < num_l; i++){
    for (int j = 0; j < num_c; j++){
      printf("%d ", *((m + i*num_c) + j));
    }
    printf("\n");
  }
}
 
int main(){
	int matriz[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int num_l = 3, num_c = 3;
	imprimeMatriz((int *)matriz, num_l, num_c);
	return 0;
}
