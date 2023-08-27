# include<stdio.h>
# include<stdlib.h>


int ** alocaMatriz (int linha,int coluna){
	int i,j;
	int **matriz =(int **) malloc(linha * sizeof(int));
	for (i = 0;i < coluna;i++){
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


void matrizTransposta(int linha,int coluna, int **matriz){
	int i,j;
	int transposta[coluna][linha];
	for(i = 0;i < coluna;i++){
		for(j = 0; j < linha;j++){
			transposta [i][j] =  matriz[j][i];
			printf("%d ",transposta[i][j]);
		}
		printf("\n");
	} 	
}


int main(){
	printf("Ex08 -> Crie uma função capaz de criar a transposta de uma matriz.\n");
	printf("Jonatas Garcia de Oliveira TIA:42181232\n");
	printf("Pablo Borba Leal TIA:42145333\n\n");
	int linha = 3;
	int coluna = 4;
	int **matriz = alocaMatriz(linha,coluna);
	printf("Matriz Original \n");
	imprimeMatriz(linha,coluna,matriz);
	printf("\n");
	printf("Matriz Transposta \n");
	matrizTransposta(linha,coluna,matriz);
	printf("\n");
	//liberaMatriz(coluna,matriz);
	int i;
	for(i=0; i < coluna;i++){
		free(matriz[i]);
	}
	free(matriz);
    //imprimeMatriz(linha,coluna,matriz);
	return 0;
}
