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


void matrizModulo(int linha,int coluna, int **matriz){
	int i,j;
	int modulo[linha][coluna];
	for (i = 0; i< linha;i++){
		for(j = 0;j < coluna;j++){
			if(matriz[i][j] < 0 ){
				modulo[i][j] = matriz[i][j] * -1;
			}else{
				modulo[i][j] = matriz[i][j];
			}
			printf("%d ",modulo[i][j]);		
		}
		printf("\n");
	}
}

void liberaMatriz(int linha,int **matriz){
	int i;
	for(i=0; i < linha;i++){
		free(matriz[i]);
	}
	free(matriz);
}


int main(){
	printf("Ex09 -> Crie uma função capaz de substituir todos os números negativos de uma matriz por seu módulo.\n");
	printf("Jônatas Garcia de Oliveira TIA:42181232\n");
	printf("Pablo Borba Leal TIA:42145333\n\n");
	int linha = 3;
	int coluna = 4;
	int **matriz = alocaMatriz(linha,coluna);
	printf("Matriz Original \n");
	imprimeMatriz(linha,coluna,matriz);
	printf("Matriz Modulo \n");
	matrizModulo(linha,coluna,matriz);
	liberaMatriz(linha,matriz);
	return 0;
	
}
