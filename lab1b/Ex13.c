# include<stdio.h>



void removeCaracter(int tamanho,char *v, int posicao){
	char aux[tamanho];
	int i,k = 0;
	for(i = 0; i <= tamanho;i++){
		aux[k] = v[i];
		if(i == posicao){
			aux[k] = v[i+1];
			tamanho = tamanho -1;
			k--;
		}
		k++;
	}
	printf("%s",aux);
}


int main(){
	printf("Ex13 ->  Faça um rotina que remova um caracter de uma string do tipo char Str[100], dada a posição do caracter.\n");
	printf("Jônatas Garcia de Oliveira TIA:42181232\n");
	printf("Pablo Borba Leal TIA:42145333\n\n");
	char palavra[100]  = "paralelepipedo";
	printf("Palavra Original: '%s' \n",palavra);
	printf("\nRemovendo a segunda letra \n\n");
	removeCaracter( 100,palavra,1);
	return 0;	
}
