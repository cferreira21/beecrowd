#include <bits/stdc++.h>

using namespace std;

int vet[110], fol[110][110], lvl[110];

int main(){

	string s;
	while(getline(cin, s)){
		
		if(s.empty()) break;

		memset(fol, 0, sizeof fol);
		memset(lvl, 0, sizeof lvl);

		int p=0, i=0, n=0; 
		while(i<s.size()){

			if(isdigit(s[i])){
				vet[p]=0;
			    while(isdigit(s[i])){
					vet[p]*=10;
					vet[p]+=s[i++]-'0';
				} 
			    fol[vet[p]][vet[p-1]]=fol[vet[p-1]][vet[p]]=1;
			    lvl[vet[p-1]]++;
				lvl[vet[p]]++;
			    n=max(vet[p], n);
			}
			
			while(s[i]==' ') i++;
			
			if(s[i]=='('){
				i++;
				p++;
				continue;
			}
			
			if(s[i]==')'){
				p--;
				i++;
				continue;
			}
			
		}
		
		if(n==1){
			puts("");
			continue;
		}
		
		lvl[vet[1]]--;
		vector <int> prufer;
		while(prufer.size()<n-2){
			
			int aux=0;
			for(int i=1;i < n+1; i++){
				if(lvl[i]==1){
					for(int j=1;j < n+1; j++){
						if(fol[j][i]){
							prufer.push_back(j);
							fol[i][j]=fol[j][i]=0;
							lvl[j]--;
							lvl[i]=-1;
							break;
						}
					}
					aux=1;
					break;
				}
			}
			
			if(!aux) break;
		}
		
		for(int i=0;i < prufer.size(); i++){
			printf("%d ", prufer[i]);
		}
		printf("%d\n", n);
	}
	return 0;
}