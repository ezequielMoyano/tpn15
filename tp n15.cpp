#include <bits\stdc++.h>
using namespace std;

string ReemplazarEspacios(string frase, char separador){

	for(int i=0; i<frase.size(); i++){
		if (frase[i] == ' '){
			frase[i] = separador;
		}
	}
	return frase;
}

int main(){
	string Frase;
	char Separador;
	
	cout<<"ingrese una frase : ";
	getline(cin,Frase); 
	
	cout<<"ingrese un caracter para usar como separador : ";
	cin>>Separador;
	
	string Reemplazada = ReemplazarEspacios(Frase,Separador);
	
	cout<<Reemplazada<<endl;
	
	return 0;
}
