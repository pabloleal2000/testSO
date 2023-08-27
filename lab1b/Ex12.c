# include<stdio.h>
# include<stdlib.h>

void encontraPosicao(int tamanho,char *v,char letra){
	int i = 0;
	int find = 0;
	for(i =0; i < tamanho;i++){
		if (v[i] == letra){
			printf("Letra encontrado na posicao %d",i);
			find = 1;
		}
	}
	if(find == 0){
		printf("Letra não encontrada");
	}
}


int main(){
	printf("Ex12 ->  Faça uma função que retorne a posição de um dado caracter dentro de uma string.\n");
	printf("Jônatas Garcia de Oliveira TIA:42181232\n");
	printf("Pablo Borba Leal TIA:42145333\n\n");
	char letra = 'd';
	char palavra[14]  = "paralelepipedo";
	printf("Encontrando a posicao da letra '%c' na palavra '%s' \n",letra,palavra);
	encontraPosicao(14,palavra,letra);
	return 0;	
}
