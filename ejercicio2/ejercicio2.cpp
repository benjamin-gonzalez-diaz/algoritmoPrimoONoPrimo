// ejercicio2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

// ejercicio 2: ver si un numero es primo o no, usando puntero. Ademas mostrar la posicion de guardado
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int numero, * dir_numero;
	int contador, *dir_contador;
	cout << "digite un numero, para ver si es primo o no: "; cin >> numero;
	
	dir_numero = &numero; //guardando la pos de memoria
	dir_contador = &contador;

	for (size_t i = 2; i < *dir_numero; i++)
	{
		if (*dir_numero % i == 0)
		{
			*dir_contador = 1;
			break;
		}
	}
	if (*dir_contador == 1)
	{

	cout << "el numero: " << *dir_numero << " no es primo" << endl;
	cout << "Posicion: " << dir_numero << endl;

	}
	else
	{

	cout << "el numero: " << *dir_numero << " es primo" << endl;
	cout << "posicion: " << dir_numero << endl;

	}


	_getch();
	return 0;
}




















// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
