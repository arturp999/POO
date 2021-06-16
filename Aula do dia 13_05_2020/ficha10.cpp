
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;


class Aluno {
	private:
		float nota_1_teste,nota_2_teste;

	public:
		string nome_do_aluno;
		int numero_do_aluno;

		float final() {
			return (nota_2_teste + nota_1_teste)/2;
		};

		//get
		float getNota_1_teste() {
			return this -> nota_1_teste;
		}
		//get
		float getNota_2_teste() {
			return this -> nota_2_teste;
		}

		void novo_Aluno() {
			this -> setNota_1_teste();
			this -> setNota_2_teste();
			system("cls");
			cout << "Media: " << this -> final() << "\n" ;
		}

	private:
		//set
		void setNota_1_teste() {
			cout << "Insira nota 1: \n";
			cin >> this -> nota_1_teste;
		}
		//set
		void setNota_2_teste() {
			cout << "Insira nota 2: \n";
			cin >> this -> nota_2_teste;
		}

};

main() {
	//cout << "Rent a Car\n"; //ex 1
	//cout << c1.p_aluguer();
	Aluno aluno1, aluno2; //instancia da classe aluno assim é sempre diferente
	aluno1.novo_Aluno();
	aluno2.novo_Aluno();
}














