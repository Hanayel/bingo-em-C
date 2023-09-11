#include <stdio.h>
#include <stdlib.h>

int main(){
    int tabela[5] [5], i, j; //pre-declarando as variáveis

    printf("\n A sua cartela de bingo eh essa:\n "); //Mensagem de inicio
    srand((unsigned)time(NULL));

  for(i = 0; i < 5; i++){ //declarando colunas
	for(j = 0; j < 5; j++){ //declarando linhas
          printf("|%d| ", rand() % 99); // ramdomizando os numeros
	}
	printf("\n");
}
    printf("\n Boa sorte!\n\n");

return 0;
}
