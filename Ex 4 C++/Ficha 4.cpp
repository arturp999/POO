#include <iostream>
#include <stdio.h>
#include <math.h>
#include <cstdio>
#include <cstring>


using namespace std;
/*
main(){ //Ex1
	int num;
	cout << "Insere um numer de 1 a 10: ";
	cin >> num;
	if (num <= 0 || num > 10) {
		cout << "Numero nao e valido";
	}
	else {
		cout << "Numero valido";
	}
	}
*/

/*
main() {// Ex2
	double num1,num2,num3;

	cout << " Primeiro numero: ";
	cin >> num1;

	cout << " Segundo numero: ";
	cin >> num2;

	cout << " Terceiro numero: ";
	cin >> num3;

	if(num1 > num2 && num1 > num3) {
		cout << "Numero " << num1 << " e o maior";
	}
	else if (num2 > num1 && num2 > num3) {
		cout << "Numero " << num2 << " e o maior";
	}
	else if (num3 > num1  && num3 > num2) {
		cout << "Numero " << num3 << " e o maior";
	}
}
*/

/*
main(){ // Ex3

	char letra;
	cout << "Digite uma letra: ";
	cin >> letra;

	if((letra >= 'A') && (letra <= 'Z')){
		cout << "Letra maiscula" ;
	}
	else{
		if ((letra >= 'a') && (letra <= 'z')){
			cout << "Letra minuscula";
		}
		else {
			cout << "Nao e letra";
		}
	}
}
*/

/*
main(){ //Ex4
	int valor;
	cout << "Introduza um valor de 0 a 3: ";
	cin >> valor;

	switch(valor)
	{
		case 0:
			cout << " Zero ";
			break;
		case 1:
			cout << " Um ";
			break;
		case 2:
			cout << " Dois ";
			break;
		case 3:
			cout << " Tres ";
			break;
		default:
			cout << "Nao existe";

	}
}
*/

/*
main(){ //Ex 4
	int valor;
	cout << "Introduza um valor: ";
	cin >> valor;
		for(int i = valor; i >= 0 ; i--)
	{
		cout<<i <<"\n";
	}

	cout << "\n";
		for(int i = 0; i <= valor ; i++)
	{
		cout<<i <<"\n";
	}
}
*/


/*
main() { // Ex 6
	int op;
	cin>>op;
		while ((op > 0) && (op < 3)){
		cout<<"\n MENU DE COMANDOS"<<"\n\n";
		cout<<" 0. Sair \n";
		cout<<" 1. Mostrar\n";
		cout<<" 2. Apresentar\n\n";
		cout<<" Escolha uma opcao: ";
		cin>>op;
	}
}
*/

main() {// Ex 7
	int num1,num2;
	cout << "Qual o valor?: ";
	cin >> num1;
	cout << "Qual o valor?: ";
	cin >> num2;

	if (num1 < num2) {
		for(int i = num1; i < num2 ; i++ )
			cout << i << "\n";
	} else {
		for(int i = num2; i < num1 ; i++ )
			cout << i << "\n";
	}
}






































