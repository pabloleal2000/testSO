# include<stdio.h>
# include<stdlib.h>

int ** alocaMatriz (int linha,int coluna){
	int i,j;
	int **matriz =(int **) calloc(linha, sizeof(int*));
	for (i = 0;i < linha;i++){
		matriz[i] =(int *) calloc(coluna, sizeof(int));
	}
	//Preenche Matriz
	for(i = 0;i < linha;i++){
		for(j = 0;j < coluna;j++){
			matriz[i][j] = 10*j-i;
		}
	}
	return matriz;
}

void imprimeMatriz(int linha,int coluna,int **matriz){
	int i,j;
	for (i = 0;i < linha ;i++){
		for(j =0;j < coluna; j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}	
}

void multiplicaLinha(int linha,int coluna,int multiplicador,int linhaEscolhida,int **matriz){
	int i,j;
	int resultado[linha][coluna];
	for (i = 0; i< linha;i++){
		for(j = 0;j < coluna;j++){
			if(i == linhaEscolhida){
			 	resultado[i][j] = matriz[i][j] * multiplicador;
			}else{
				resultado[i][j] = matriz[i][j];
			}
			printf("%d ",resultado[i][j]);		
		}
		printf("\n");
	}
}

void multiplicaColuna(int linha,int coluna,int multiplicador,int colunaEscolhida,int **matriz){
	int i,j;
	int resultado[linha][coluna];
	for (i = 0; i< linha;i++){
		for(j = 0;j < coluna;j++){
			if(j == colunaEscolhida){
			 	resultado[i][j] = matriz[i][j] * multiplicador;
			}else{
				resultado[i][j] = matriz[i][j];
			}
			printf("%d ",resultado[i][j]);		
		}
		printf("\n");
	}
}

void liberaMatriz(int coluna,int **matriz){
	int i;
	for(i=0; i < 2;i++){
		free(matriz[i]);
	}
	free(matriz);
}


int main(){
	printf("Ex10 -> Crie uma função capaz de multiplicar uma linha de uma matriz por um dado número. Faça o mesmo para uma coluna.\n");
	printf("Jônatas Garcia de Oliveira TIA:42181232\n");
	printf("Pablo Borba Leal TIA:42145333\n\n");
	int linha = 3;
	int coluna = 4;
	int **matriz = alocaMatriz(linha,coluna);
	printf("Matriz Original \n");
	imprimeMatriz(linha,coluna,matriz);
	printf("\nLinha 2 Multiplicada por 2 \n");
	multiplicaLinha(linha,coluna,2,1,matriz);
	printf("\nColuna 1 multiplicada por 10 \n");
	multiplicaColuna(linha,coluna,10,0,matriz);
	liberaMatriz(linha,matriz);
	return 0;
	
}
