#include<iostream>

using namespace std;


class  Alumnos {
public:
	void cargar();
	void calcularNotaAlumnos();
	void imprimirListaAlumnos();
	void alumnoSobresaliente();
	~Alumnos();

private:
	char alumnoNom[41][25];
	char alumnoApe[41][25];
	char nota[20];
	float notas[41][20];
	float notaDef[41];

};

int cantidadAlumno = 0, cantidadNotas = 0;

void Alumnos::cargar()
{
	cout << "Ingrese la cantidad de alumnos: ";
	cin >> cantidadAlumno;
	cout << "Ingrese la cantidad de notas: ";
	cin >> cantidadNotas;
	cout << "\n";
	system("cls");

	for (int i = 0; i < cantidadAlumno; i++)
	{
		cout << "\n";
		cout << "Ingrese el Nombre del estudiante "<<i+1<<": ";
		cin >> alumnoNom[i];
		cout << "Ingrese el Apellido del estudiante " << i + 1 << ": ";
		cin >> alumnoApe[i];
		system("cls");
		cout << "\n" << endl;
		cout << "Estudiante No: " << i + 1 << ": " <<alumnoNom[i]<<" "<<alumnoApe[i]<<endl;
		for (int j = 0; j < cantidadNotas; j++)
		{
			cout << "Ingrese la Nota " << j+1<<": ";
			cin >> notas[i][j];
		}
		system("cls");
		cout << "\n" << endl;
	}
	system("cls");
}

void Alumnos::calcularNotaAlumnos()
{
	for (int i = 0; i < cantidadAlumno; i++)
	{
		float suma = 0;

		for (int j = 0; j < cantidadNotas; j++)
		{
			suma += notas[i][j];
		}

		notaDef[i] = suma / (float) cantidadNotas;
	}
}


void Alumnos::imprimirListaAlumnos()
{
	cout << "\n\n\n";
	cout << "******************************************************" << endl;
	cout << "\n";
	for (int i = 0; i < cantidadAlumno; i++)
	{
		cout << alumnoNom[i]<<" ";
		cout << alumnoApe [i] <<":  ";

		for(int j = 0; j < cantidadNotas; j++)
		{
			cout << notas[i][j];

			if (j == (cantidadNotas - 1)) 
			{
				continue;
			}
			else
			{
				cout << " + ";
			}
		}
		cout <<" -> "<<"Nota Definitiva : ";
		if(notaDef[i] == 1.00)
		{
			cout << notaDef[i] << " Pto" << endl;
		}
		else
		{
			cout << notaDef[i] << " Ptos" << endl;
		}
	}
	cout << "\n\n\n";
	cout << "******************************************************" << endl;
	cout << "\n";
	cout << "\n";
}

void Alumnos::alumnoSobresaliente()
{
	float mne = notaDef[0];
	char nomtn[80];
	char nomta[80];
	strcpy_s(nomtn, 41, alumnoNom[0]);
	strcpy_s(nomta, 41, alumnoApe[0]);
	for (int i = 0; i < cantidadAlumno; i++)
	{
		if (notaDef[i] > mne)
		{
			mne = notaDef[i];
			strcpy_s(nomtn, 41, alumnoNom[i]);
			strcpy_s(nomta, 41, alumnoApe[i]);
		}
	}

	if (mne == 1.00)
	{
		cout << "El estudiante con mayor promedio de notas es: " << nomtn << " " << nomta << ", su nota es: " << mne << " Pto" << endl;
	}
	else
	{
		cout << "El estudiante con mayor promedio de notas es: " << nomtn << " " << nomta << ", su nota es: " << mne << " Ptos" << endl;
	}

	cout << "\n";
	cout << "******************************************************" << endl;
	cout << "\n";
	cout << "\n";
}

Alumnos :: ~Alumnos()
{
	cout << "Programa realizado por: Ing. Jhozmer Ramirez, Abril 02, Merida, Venezuela, 2023" << endl;
	cout << "\n";
	cout << "Gracias por utilizar este programa" << endl;

	cout << "\n";
	cout << "\n";
	system("pause");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
}


int main()
{
	system("Color 20");

	Alumnos na;

	na.cargar();
	na.calcularNotaAlumnos();
	na.imprimirListaAlumnos();
	na.alumnoSobresaliente();

	return 0;
}




