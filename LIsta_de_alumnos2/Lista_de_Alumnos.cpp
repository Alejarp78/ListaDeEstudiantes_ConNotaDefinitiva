#include<iostream>

using namespace std;

class  Alumnos{
public:
	void cargar();
	void calcularNotaAlumnos();
	void imprimirListaAlumnos();
	//char alumnoSobresaliente();

	// Alumnos{};();
	//~ Alumnos{};();

private:
	char alumno[41][40];
	char nota[20];
	float notas[41][20];
	float notaDef[41];
	
};

 /*Alumnos{}; ::Alumnos{}; ()
{
}*/

 /*Alumnos{}; ::~Alumnos{}; ()
{
}*/

void Alumnos::cargar()
{
	for (int i = 0; i < sizeof(alumno) ; i++)
	{
		cout << "Ingrese el nombre del estudiante: ";
		cin.get(alumno[i], 40);

		for (int j = 0; j < sizeof(nota); j++)
		{
			cout << "Ingrese las notas: ";
			nota[j] = "Nota" + char(j);
			cin << notas[i][j];
			cin.get();
		}
	}
}

void Alumnos::calcularNotaAlumnos()
{
	for (int i = 0; i < sizeof(alumno); i++)
	{
		int suma = 0;
		float total_notas = sizeof(alumno);

		for (int j = 0; j < sizeof(nota); j++)
		{
			suma += notas[i][j];
		}

		notaDef[i] = suma/total_notas;
	}
}

void Alumnos::imprimirListaAlumnos()
{
	for (int i = 0; i < sizeof(alumno); i++)
	{
		cout << alumno[i] << "->  ";

		for (int j = 0; j < sizeof(nota); j++)
		{
			cout << notas[i][j] << "->  ";
		}

		cout << notaDef[i] <<endl;
	}
}

int main() 
{
	Alumnos na;

	na.cargar();
	na.calcularNotaAlumnos();
	na.imprimirListaAlumnos();

	return 0;
}




