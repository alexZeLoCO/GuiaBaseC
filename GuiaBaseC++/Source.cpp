//Un comentario

/*
* Un bloque de comentario
*/

//DECLARACIÓN SUBRUTINA
/*
* Subrutina media (int vector[]], int len). Calcula la media de los elementos de un vector.
* vector[] - Vector a calcular.
* len - No existe funcion vector.lenght() por lo que hay que pasar la longitud como parámetro a parte.
* 
* return double - media.
*/
double media(int vector[], int len) {
	int suma = 0;
	for (int i = 0; i<len; i++) {
		suma = suma + vector[i];
	}
	return (double)suma / len;
}


#include <iostream> //Necesario SIEMPRE para cada programa #inlcude es similar a import
			//iostream ==> Input Output Stream

using namespace std;		//Usar para mostrar por pantalla el estido Standard (std)

int main() {		//Declaración de un main

//--------------INPUT / OUTPUT---------------------
	cout << "Hello World" << "!" << endl;		//cout ==> Console Output (print)
		//signos << para separar			//endl para hacer fin de linea ==> End Line

	int edad;		//Declaración de variable (Syntax: modificador tipo nombre)
	int mes = 05;

	cout << "Introduzca su edad: ";
	cin >> edad;			//Input, siguiente valor se introducirá en la variable edad
	//cin ==> Console Input		//NOTA: SIGNO >> NO <<

//---------------------BUCLE WHILE----------------
	while (edad < 0) {
		cout << "Edad no valida." << "\n" << "\t Introduzca una edad positiva: ";
								//Mod \n para salto de línea
										//Mod \t para tabulación
		cin >> edad;
	}

//-------------------IF/ELSE------------------
	if (edad >= 18) {
		cout << "Es mayor de edad." << endl;
	}
	else {
		cout << "Es menor de eadad." << endl;
	}

//---------------VECTORES---------------

	int numeros [4];			//Vector de longitud 4
	int naturales[] = { 5,10,20 };		//Vector de valores 5, 10 y 20

//--------------FOR---------------
	for (int i = 0; i < 4; i++) {
		int valor;
		cin >> valor;
		numeros[i] = valor;
	}

	for (int i = 0; i < 3; i++) {
		cout << "Valor " << i << "=" << naturales[i] << "." << endl;
	}

//-------------SUBRUTINAS------------
	cout << "La media de los elementos del vector introducido es: " << media(numeros, 4) << endl;
	cout << "La media de los elementos del vector por defecto es: " << media(naturales, 3) << endl;

//-------------STRINGS--------------
	char caracter;		//Un caracter
	char cadena[] = "Goodbye World";			//Un vector de caracteres es una cadena.

	cout << cadena << endl;
//-----------FIN DE PROGRAMA------------
	return 0;		//Un programa de C++ siempre retorna algo, por ahora, 0.

//------------EXTRA --- MODIFICADORES-------------
	/*
	* signed int variable; ==> Variable tipo int positivos y negativos	(64 bit)
	* unsigned int variable; ==> Variable tipo int sólo positivos	(32 bit)
	* 
	* const int variable; ==> Variable tipo int constante (final de java)
	*/
}