# include<stdio.h>
# include<stdlib.h>

int ** alocaMatriz (int linha,int coluna){
	int i,j;
	int **matriz =(int **) malloc(linha * sizeof(int));
	for (i = 0;i < linha;i++){
		matriz[i] =(int *) malloc(coluna * sizeof(int));
	}
	//Preenche Matriuz
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

void somaLinhas(int linha,int coluna,int **matriz){
	int i,j;
	int resultado[linha][coluna];
	for (i = 0;i < linha;i++){
		for(j = 0;j < coluna;j++){
			resultado[i][j] = matriz[i][j];
			if(i == 1){
				resultado[1][j] = matriz[0][j] + matriz[1][j];
			}
			printf("%d ",resultado[i][j]);
		}
		printf("\n");
		
	}
}

void multiplicaLinhas(int linha,int coluna,int **matriz){
	int i,j;
	int resultado[linha][coluna];
	for (i = 0;i < linha;i++){
		for(j = 0;j < coluna;j++){
			resultado[i][j] = matriz[i][j];
			if(i == 1){
				resultado[1][j] = matriz[0][j] * matriz[1][j];
			}
			printf("%d ",resultado[i][j]);
		}
		printf("\n");
		
	}
}

void liberaMatriz(int coluna,int **matriz){
	int i;
	for(i=0; i < coluna;i++){
		free(matriz[i]);
	}
	free(matriz);
}


int main(){
	printf("Ex11 -> Crie uma função capaz de somar os elementos das linhas L1 e L2 de uma matriz. O resultado deve ser colocado na linha L2. Faça o mesmo com a multiplicação.\n");
	printf("Jônatas Garcia de Oliveira TIA:42181232\n");
	printf("Pablo Borba Leal TIA:42145333\n\n");
	int linha = 3;
	int coluna = 4;
	int **matriz = alocaMatriz(linha,coluna);
	printf("Matriz Original \n");
	imprimeMatriz(linha,coluna,matriz);
	printf("\nResultado da soma das linhas 1 e 2 na linha 2 \n ");
	somaLinhas(linha,coluna,matriz);
	printf("\nResultado da multiplicação das linhas 1 e 2 na linha 2 \n ");
	multiplicaLinhas(linha,coluna,matriz);

	liberaMatriz(linha,matriz);
	return 0;
}
