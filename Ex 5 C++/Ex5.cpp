#include <iostream>
#include <string>

using namespace std;

palavra() { //ex1
	string palavra;
	cout << "Indica uma palavra: ";
	cin >> palavra;

	if(palavra.length() <= 4) {
		cout <<"Palavra pequena!";
	} else if(palavra.length() >= 5 && palavra.length() <= 8  ) {
		cout << "Palavra de tamanho medio! ";
	} else {
		cout << "Palavra grande!";
	}
}

contrario() { //ex2
	string palavra;
	cout << "Indica uma palavra: ";
	cin >> palavra;
	cout << "A palavra e: " << palavra << " - " ;
	for( int i = palavra.length() ; i >= 0 ; --i ) {
		cout << palavra[i];
	}
}

int x,y; //varias globais por isso nao preciso passar por params
void divide() { //ex3
	float divisao = x / y;
	cout <<"Resultado da divisao : "<< divisao;
	cout << "\n";
}
void resto() { //ex3
	float resto = x % y;
	cout <<"O resto da divisao inteira : "<< resto;
}

vector() { //ex4
	string v = "BOA SORTE";
	for(int i = 0; i < v.length(); i++) {
		cout << "t[" << i << "]"<<" = " << v[i] << "\n";
	}
}

numDiferente() { //ex5
	int num;
	cout << "Insere um numero entre 1 a 5:  \n";
	cin >> num;
	while ( num < 1 || num > 5 ) {
		cout << "Numero nao aceite!! \nInsere um numero entre 1 a 5: \n ";
		cin >> num;
	}
}

menu() { //ex6
	int var = 0;
	bool invalid = true;
	do {
		cout << "Hipotese de compra de senhas: \n \n";
		cout << "<1> Pequeno Almoco\n<2> Almoco\n<3> Lanche\n<4> Jantar\n";
		cout << "Escolha a senha que deseja comprar: \n";
		cin >> var;
		switch(var) {
			case 1:
				cout << "Comprou uma senha para o Pequeno Almoco";
				invalid = false;
				break;
			case 2:
				cout << "Comprou uma senha para o Almoco";
				invalid = false;
				break;
			case 3:
				cout << "Comprou uma senha para o Lanche";
				invalid = false;
				break;
			case 4:
				cout << "Comprou uma senha para o Jantar";
				invalid = false;
				break;
			default:
				system("cls");
				cout << "Essa opcao nao existe\n"	;
		}
	} while(invalid);
}

prot(){
	
}

main() {
	//palavra();  //Ex1
	//contrario(); //Ex2

	/*  Ex3
	cout << "Introduza o valor de x: ";
	cin >> x;
	cout << "Introduza o valor de y: ";
	cin >> y;
	divide();
	resto();
	*/

 	//vector(); //Ex4
	//numDiferente(); //Ex5
	//menu(); // Ex6

	


}



















