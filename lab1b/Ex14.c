# include<stdio.h>
# include<stdlib.h>



void insereCaracter(int tamanho ,char *v,int posicao,char letra){
	int i,k = 0;
	char aux[tamanho+1];
	for(i = 0; i <= tamanho;i++){
		aux[k] = v[i];
		if(i == posicao){
			aux[k+1] = letra;
			k++;
		}
		k++;
	}
	printf("%s",aux);
}


int main(){
	printf("Ex13 ->  Faça uma rotina que insira um caracter em uma string do tipo char Str[100], dada a posição do caracter.\n");
	printf("Jônatas Garcia de Oliveira TIA:42181232\n");
	printf("Pablo Borba Leal TIA:42145333\n\n");
	char palavra[100]  = "paralelepipedo";
	printf("Palavra Original: '%s' \n",palavra);
	printf("\nInserindo a letra 'X' depois da terceira posicao \n");
	insereCaracter(100,palavra,2,'X');
	return 0;	
}
