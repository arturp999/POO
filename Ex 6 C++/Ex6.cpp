#include <iostream>
#include <math.h>
#include <ctime>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <string.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;


class aluno {
	public:
		static char escola[25];
		char nome [20];

		aluno() {
			strcpy(nome,"Defina nome");
			cout<<endl<<"Criado um objecto aluno."<<endl;
		} ~aluno() {
			cout<<endl<<"Destruido um objecto aluno"<<endl;
		}

		void setNome() {
			char nome1[20];
			cout << "Insira nome do aluno:" ;
			gets(nome1);
			strcpy(nome, nome1);
		};

		void getNome() {
			cout << "Nome do Aluno: " << nome <<"\n";
			cin >> nome;
		};

		void setEscola() {
			char escola1[20];
			cout << "Insira nome da escola:" ;
			gets(escola1);
			strcpy(escola, escola1);
		};

		void getEscola() {
			cout << " Escola do aluno: " << escola;
			cin >> escola;
		};

		void ApresentarDadosAluno(aluno a) {
			a.getNome();
			a.getEscola();
		};

		void DefinirAlunoApontador(aluno *a) {
			a->setNome();
			a->setEscola();
		}

		void ApresentarDadosAluno(aluno *a) {
			a->getNome();
			a->getEscola();
		}

};

class aluno_inutil {
	public:
		string aluno, escola;

		void setNome() { //setter
			cout << "\nIndique o nome do aluno:\n";
			cin >> this -> aluno;
		}

		string getNome() { //getter
			return this -> aluno;
		}

		void setEscola() { //setter
			cout << "Indique o nome da escola:\n";
			cin >> this -> escola;
		}
		string getEscola() { //getter
			return this -> escola;
		}

		void ApresentarDadosAluno() {
			this -> setNome();
			this -> setEscola();
			cout << "Nome do aluno: " << this -> getNome() << " " << "e esta na escola " << this -> getEscola();
		}
};

int main() {
	aluno_inutil c;
	c.ApresentarDadosAluno();

}
