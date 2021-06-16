#include <iostream>
#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	/*
	int numero;
	cout<<"Numero de aluno ?";
	cin>>numero;
	cout<<"O seu numero e: " <<numero<<"\n";
	*/
	
	
//	
//int valor=1;
//while(valor <=5){
//	cout<<2*valor<<" ";
//	valor++;
//}

//for(int valor = 1 ;valor <=5 ;valor ++){
//	cout<<2*valor<<" ";
//}

//float cateto1,cateto2,hipotenusa;
//cout<<"Introduz compriemento do Primeiro cateto \n";
//cin>>cateto1;
//cout<<"Introduz compriemento do Segundo cateto \n";
//cin>>cateto2;
//hipotenusa = sqrt((cateto1+cateto1+(cateto2+cateto2);
//cout<<"A hipotenusa do triangula e "<<hipotenusa<<"\n";


//float media,n1,n2;
//cout<<"Escreve a primeira nota \n";
//cin>>n1;
//cout<<"Escreve a segunda nota \n";
//cin>>n2;
//media = (n1+n2) /2;
//
//(media < 9.50) ?
// 	cout<<" A media e "<<media<<" perdeu":
// 	cout<<" A media e "<<media<<" passou";



//float n1,n2,notaMaior;
//	cout<<"Escreve a primeira nota 1 \n";
//	cin>>n1;
//	cout<<"Escreve a segunda nota 2 \n";
//	cin>>n2;
//	(n1 > n2 ) ? cout<<"Primeiro numero maior" : ( n2 > n1) ? cout<<"Segundo Maior" : cout <<"Sao iguais";
	
	
	
	
//	float n1,n2,divisao,multiplica,subtrair,soma;
//	char opcao;
//
//	cout<<"Opcao: ";
//	cin>>opcao;
//	
//	cout<<"Primeiro numero: ";
//	cin>>n1;
//	cout<<"Segundo numero: ";
//	cin>>n2;
//	
//	switch(opcao) {
//		case '+':
//			cout<<n1<<" + " << n2 << " = " << n1+n2;
//		break;
//		
//		case '-':
//			cout<<n1<<" - " << n2 << " = " << n1-n2;
//		break;
//		
//		case '*':
//			cout<<n1<<" * " << n2 << " = " << n1*n2;
//		break;
//		
//		case '/':
//			cout<<n1<<" / " << n2 << " = " << n1/n2;
//		break;
//




	int produto;	
	cout << " PRODUTOS DA SEMANA DOS DESCONTOS \n";
	cout << " 1 - Cereais Nestum, 2 - Sumo Tropical,\n 3 - Geleia Morango, 4 - Massa Italiana, \n 5 - Arroz Amarelo 6 - Leite de Soja \n 7 - Coca Cola Zero 8 - Couve de Bruxelas \n";
	cout << " Indique o numero do produto: ";
	cin >> produto;
	
	switch(produto) {
		case 1:
			cout << " Desconto = 20%";
		break;
		
		case 2:
			cout << " Desconto = 15%";
		break;
		
		case 3:
			cout << " Desconto = 20%";
		break;
				
		case 4:
			cout << " Desconto = 10%";
		break;
		
		case 5:
			cout << " Desconto = 10%";
		break;
		
		case 6:
			cout << " Desconto = 20%";
		break;
		
		case 7:
			cout << " Desconto = 15%";
		break;
		
		case 8:
			cout << " Desconto = 5%";
		break;
		
		default:
			cout << " Invalido ";
		break;
	
}
}
































