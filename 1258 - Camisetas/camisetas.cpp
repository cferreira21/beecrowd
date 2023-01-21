#include <iostream>
#include <string.h>
#include <stdio.h>


using namespace std;

struct pedido{
	string cor;
	string tamanho;
	string nome;
	
};

void ordenaN(pedido c[], int n){
	int i = 1;
	int j;
    pedido pivo;
    while (i < n){
        j = i - 1;
        pivo = c[i];
        while (j >= 0 && c[j].nome.compare(pivo.nome) > 0){
            c[j + 1] = c[j];
            j--;
        }
        c[j + 1] = pivo;
        i++;
    }
}
void ordenaC(pedido c[], int n){
	int i = 1;
	int j;
    pedido pivo;

    while (i < n){
        j = i - 1;
        pivo = c[i];
        while (j >= 0 && c[j].cor.compare(pivo.cor) > 0){
            c[j + 1] = c[j];
            j--;
        }
        c[j + 1] = pivo;
        i++;
    }

}
void ordenaT(pedido c[], int n){
	int i = 1;
	int j;

    pedido pivo;

    while (i < n){
        j = i - 1;
        pivo = c[i];

        while (j >= 0 && c[j].tamanho < pivo.tamanho){
            c[j + 1] = c[j];
            j--;
        }
        c[j + 1] = pivo;
        i++;
    }
}
int main() {
	int N, i;
	pedido camiseta[60];
	cin >> N;
	
	while(1){
    	if (N == 0)
            break;
    
        for (i = 0; i < N; i++){
    
            getline(cin >> ws, camiseta[i].nome);
			cin >> camiseta[i].cor >> camiseta[i].tamanho;
            }
            ordenaN(camiseta, N);
            ordenaT(camiseta, N);
            ordenaC(camiseta, N);
    
            for (i = 0; i < N; i++)
                cout << camiseta[i].cor <<" "<< camiseta[i].tamanho << " " << camiseta[i].nome << "\n";
    
           cin >> N;
            if (N != 0)
                cout << "\n";
	
	}
	
}
	