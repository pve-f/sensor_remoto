#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>
#include <conio.h>

#define linhas 10
#define colunas 20

int x,y,num;
char letra,matriz[linhas][colunas];

void preencher_matriz(char matriz [10][20])
{
  int i,j;
  for(i=0; i<10; i++){
    for(j=0; j<20; j++){
      matriz[i][j] = '0';
      matriz[x][y] = 'x';
    }
  }
}

void mostrar_matriz(char matriz[10][20]){
  int i,j;
  system("cls");
  printf("%i:%i",x,y);
  for(i=0; i<10; i++){ 	
    for(j=0; j<20; j++){
     // matriz[x][y] = 'x';
      printf("%c ",matriz[i][j]);
    //  matriz[x][y] = '0';
 
    }
    printf("\n");
  }
  
}


int comando(){

 // char letra; 
 // int aux = 0;
  
  /*
  int obst = 0;
  srand(time(NULL));
  obst = rand() % 2;
  if(obst == 0){
    matriz[i][j] = '1';
  }else{
    printf("#");
    j--;
  }
  */

  printf("Digite o seu comando no seguinte formato:[orientação movimento]\n");
  scanf("%*c%c%*c%d%*c", &letra, &num);
	
  if(letra == 'N'){
    x -= num;
  }else if(letra == 'S'){
    x += num;
  }else if(letra == 'L'){
    y += num;
  }else if(letra == 'O'){
    y -= num;
  }else{
    printf("TESTE\n");
    printf("%d\n", x);
    printf("%d\n", y);
  }

 // num = 0;

	fflush(stdin);
}
  
  /* 
  
  for(aux=0;aux<num;aux++){
    
  }
}


 
  if(caractere == 'n' && 's'){
    j++
  }else{
    i++
  }
}
  


[N 5]

  printf("Defina o intervalo: \n");
  scanf("%i%i",&min, &max);
  while(max<min)
  {
    printf("intervalo invalido. Digite novos valores: \n");
    scanf("%i%i",&min, &max);
  }
*/

int main(void){
  //char matriz[10][20];
  srand(time(NULL));
  x = rand() % 10;
  y = rand() % 20;
  
  preencher_matriz(matriz);
 // randomizar_sonda(matriz);
  //mostrar_matriz(matriz);

  while(true){
  	preencher_matriz(matriz);
    mostrar_matriz(matriz);
  	comando();

  }
}
