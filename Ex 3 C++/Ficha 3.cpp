#include <iostream>
#include <stdio.h>
#include <math.h>
#include <cstdio> 
#include <cstring>

using namespace std;


// Ex 1
/*
main (){
	char s1[] = "Grande Clube o Benfica,";
	char s2[] = " Mas o porto e o maior";
	
	strcat(s1,s2); //junta o s1 com o s2 depois em baixo ao dar print no s1 o s2 ja vem junto
	cout << s1; 
}
	*/
/*

Ex1 outra forma de fazer
string primeiraFrase = "Grande Clube o Benfica,";
string segundaFrase = "Mas o porto e o maior ";

string randomTxt(string primeiraFrase,string segundaFrase) {
	return primeiraFrase + segundaFrase;
	}	
main(){
	cout << randomTxt(primeiraFrase,segundaFrase);
	
}
	*/



//Ex 2
/*
main() {
	string str1;
	string str2;
		cout << "Introduza uma frase: \n";
	getline(cin, str1);
	cout << "Introduza uma 2 frase: \n";
	getline(cin, str2);	
	string finalStr = str1+" "+str2;
	cout << finalStr;	
}
*/

//Ex 3 
/*
main() {
	string s1;
	string s2;
	
	cout << "Introduza uma palavra: \n";
	getline(cin, s1);
	cout << "\n";
	cout << "Introduza uma segunda palavra: \n";
	getline(cin, s2);
	
	if (s1 == s2){
		cout << "Sao iguais";
	}
	else if ( s1.length() == s2.length() ){
		cout << "Tem o mesmo tamanho mas sao palavras diferentes";
	}
	else if ( s1.length() >= s2.length() ){
		cout << "A palavra: " << s1 << " e maior que" << " " << s2;
	}
	else if ( s1.length() <= s2.length() ){
		cout << "A palavra: " << s2 << " e maior que" << " " << s1;
	}	
}
*/

//Ex 4

int v[7]= {1,9,4,8,5,6,7};

main() {
	
	int *p = v;
	cout << *p++ << "\n"; //indice 1 //a. Apresente o valor do índice [0], apontando para o índice [1];
	cout << *(p+2) << "\n"; //indice 3
	cout << *p++ << "\n"; //indice 2
	cout << *(p+4) << "\n"; //indice 6
	cout << *(p-2) << "\n"; //indice 
	
	for( int i = 0 ; i < v[i] ; i++){
		cout << v[i] << " ";
	}
	cout <<".";
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
