#include <stdio.h>
#include <string.h>

int main(){
	int casos, linhas;
	int i=0;
	char letra[50];

	scanf("%d", &casos);

	while(i<casos){
		scanf("%d", &linhas);
		int soma=0;
		int elemento=0;
		while(linhas>0){
			scanf("%s", &letra);
			int j=0;
			int posicao=0;
			while(letra[j]){
				soma= soma + (letra[j] - 65) + posicao + elemento;
				posicao++;
				j++;
			}
			elemento++;
			linhas--;
			memset(letra, 0, sizeof(letra));
		}
		printf("%d\n", soma);
		i++;
	}
	
}