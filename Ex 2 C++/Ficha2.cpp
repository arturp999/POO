

#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <string.h>

using namespace std;

//main () {
//	
//	int n;
//	
//	cout<<"Valor entre 1 e 15: ";
//	cin >> n;
//
//	while ( n <= 15 ) 
//	{
//		cout <<"n = "<<n<<"\n";
//		n++;		5
//		
//	}	
//}

//main () {
//	int n;
//	int soma = 0;
//	cout<<"Valor entre 1 e 15: ";
//	cin >> n;
//	if( 1 > n || n > 15 ) {
//		cout<<"Numero nao e valido";
//		}
//		else
//		while ( n <= 15 ) 
//	{
//		cout <<"n = "<<n<<"\n";
//		n++;
//		soma = soma +n;
//		cout <<"soma dos resultados: "<<soma<<"\n";
//	}
//}
//

//main () {
//	int n;
//	int soma;
//	do {
//	cout<<"Valor entre 1 e 15: ";
//	cin >> n;
//	}
//	while (n<1  || n>15);
//	while (n<=15)
//	{
//	cout <<"n = "<<n<<"\n";
//	soma = soma +n;
//	n++;
//	};
//	
//	cout<<"Soma dos resultado: "<<soma;
//}

//main (){
//	int n1;
//	int n2;
//	int produto;
//	do{
//		cout<<"Digite um numero inteiro: ";
//		cin>>n1;
//		cout<<"Digite outro numero inteiro: ";
//		cin>>n2;
//		produto = n1 * n2;
//		cout<<"O numero: "<<produto<<"\n";
//	}
//	while(10 >= produto && 1000 >= produto);
//}
//
//main(){
//	char pass1[10],pass2[10];
//	int tamanho;
//	
//	cout<<"Introduza a PW: ";
//	cin>>pass1;
//	tamanho= strlen(pass1);
//	cout<<"\n";
//	
//	cout<<"confirme a palavra passe: ";
//	cin>>pass2;
//	
//	if (strcmp(pass1,pass2))
//	{
//		cout<<"Palavra passe incorreta!\n";
//		cout<<"Pista: A palavra passe tem "<<tamanho<<" letras e começa por "<<pass1[0]<<"!";
//	}
//	else
//		cout<<"\n Parabens! Palavra passe correta!";
//	
//}


//main(){	
//	int v[5];
//	for (int i = 0; i <5; i++){
//	cout<<"Indique um valor para o vector v["<<i<<"]: ";
//	cin>>v[i];
//	};
//	cout<<"\n";
//	for (int i=4; i>=0;i--)
//		cout<<v[i]<<"\n";
//}

//main(){
//	char c;
//	cout<<"Indique uma letra/caracter ou numero: ";
//	cin>>c;
//	
//	if((c>='a')&&(c<='z') || (c>='A')&&(c<='Z'))
//		cout<<"Letra";
//	else if((c>='0')&&(c<='9'))
//		cout<<"Numero";
//	else
//		cout<<"Simbolo";			
//}

//main(){
//	int num, soma,conta=0;
//	float media;
//	do{
//		cout<<"Digite um numero inteiro inferior a 100:  \n";
//		if(num >= 100){
//			cout<<"\n Numero Invalido \n";
//		}
//		else{
//		cin>>num;
//		soma = soma + num;
//		cout<<"O numero introduzido foi: "<<num<<"\n";
//		conta++;
//		cout<<"\n";
//		}
//	}
//	while(soma <= 500);
//	media = soma/conta;
//	cout<<"A media e de: "<<media;
//}

//main(){
// 	float preco; 
//	float total;
//	float desconto;
// 	int quantidade;
// 	
// 	cout << "Insira a quantidade: ";
//	cin >> quantidade;
//	cout << "Insira o preco: ";
//	cin >> preco;
//	total = quantidade*preco;
//	if (quantidade > 500 && quantidade < 1000 ){
//		desconto = (5*total)/100;
//		cout << "S/ desconto: " << total;
//		cout << "\nDesconto: " << desconto;
//		cout << "\nC/ desconto: " << (total-desconto);
//		
//	}
//	else if (quantidade > 1000 ){
//		desconto = (8*total)/100;
//		cout << "S/ desconto: " << total;
//		cout << "\nDesconto: " << desconto;
//		cout << "\nC/ desconto: " << (total-desconto);
//		
//	}
//	else
//		cout << "Nao ha desconto. \nValor a pagar: " << total;
// }
//

main(){
	int n,par;
	
	cout<<"Introduzir um inteiro: \n";
	cin>>n;
	
	cout<<"Sequencia dos valores pares: \n";
	
	for(par=0; par<=n; par+=2)
		cout<<par<<"; ";
}














