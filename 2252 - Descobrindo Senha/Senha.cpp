#include <iostream>

typedef struct tecla{
	float oleo;
	int digito;
} tecla;

/*void troca(tecla a, tecla b){
  tecla c = a;
  tecla a = b;
  tecla b = c;
}*/

void ord(tecla* senha, int tam){
  for(int i=0;i<9;i++){
    for(int j=1;j<10-i;j++){
      if(senha[j].oleo > senha[j-1].oleo){
        //troca(senha[j-1], senha[j]);
        tecla tmp = senha[j-1];
        senha[j-1] = senha[j];
        senha[j] = tmp;
      }
    }
  }
}

int main() {
  tecla senha[10];
  int n_digitos = 0;
  int caso = 1;

  while(caso<1001){

    std::cin >> n_digitos;
    for(int i=0;i<10;i++){
      std:: cin >> senha[i].oleo;
      senha[i].digito = i;
    }

    ord(senha, n_digitos);
    std::cout <<"Caso "<< caso << ": ";
    for(int i=0;i<n_digitos;i++){
      std::cout << senha[i].digito;
    }
    std::cout << std::endl;
    caso++;
  }
} 