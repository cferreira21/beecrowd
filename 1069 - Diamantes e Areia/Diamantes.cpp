#include <iostream>
 

 
int main() {
 
    int N;
    std::cin >> N;
    
    for(int i=0; i<N; i++){
      std::string s;
      std::cin>> s;
      int contaMenor = 0;
      int diamantes = 0;



      //char v[1000];
      //std::cin>>v;
      //std::cout<< v << std::endl;
      //int cont=0;
      //for(int j=0; j<s.length(); j++){
       // std::cin>>v; //escreve char no array

        //int contaMenor = 0;
        //int contaMaior = 0;
        // diamantes = 0;
        
        for(int j=0; j<s.length(); j++){
          if(s[j]== '<') contaMenor++;
          if(s[j]== '>' && contaMenor > 0){
            diamantes++;
            contaMenor--;
          }
          //else if(s[i] == '.'){}
          
        }
        //std::cout<< contaMenor << std::endl;
        //std::cout<< contaMaior << std::endl;
        //int diamantes=0;
        //if(contaMenor < contaMaior) diamantes = contaMenor;
        //else diamantes = contaMaior;
        std::cout<< diamantes << std::endl;
        //cont++;
      //}
    }
    
    return 0;
}