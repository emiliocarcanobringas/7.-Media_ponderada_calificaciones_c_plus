/*Este programa calcula la media ponderada de 3 calificaciones: 
1.- Pr�cticas = 30%
2.- Teor�a = 60%
3.- Participaci�n = 10%
Solicita al usuario la entrada de datos y realiza la operaci�n de media ponderada, despu�s muestra el resultado en pantalla
con una precisi�n de 2 decimales*/

#include <iostream> //Librer�a est�ndar de entrada de datos
#include<locale.h> //Librer�a est�ndar de localizaci�n (regionalizaci�n)

using namespace std; //Acceso al espacio de nombres para poder utilizar cin, cout, etc.

int main(){
	setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librer�a y le asignamos el valor: "Idioma espa�ol"

	/*Declaramos las variables principales y la  variable que realizar� 
	la operaci�n de sumar las variables convertidas en porcentajes para obtener
	la media ponderada, esta �ltima la iniciamos en cero*/
	float practicas, teoria, participacion, mediaponderada = 0; 
		
		cout<<"Ingrese la calificaci�n por pr�cticas: "<<endl; //Solicitamos el valor de la variable: "practicas"
		cin>>practicas; //Almacenamos el valor de la variable: "practicas"
		cout<<"Ingrese la calificaci�n por teor�a: "<<endl; //Solicitamos el valor de la variable: "teoria"
		cin>>teoria; //Almacenamos el valor de la variable: "teoria"
		cout<<"Ingrese la calificaci�n por participaci�n: "<<endl; //Solicitamos el valor de la variable "participaci�n"
		cin>>participacion; //Almacenamos el valor de la variable: "participacion"
		
		practicas = practicas*.3; //Asi le damos el valor del 30% a la variable pr�cticas
		teoria = teoria*.6; //As� le asignamos el valor del 60% a la variable teor�a
		participacion = participacion*.1; //Le estamos dando un valor del 10% a la variable
		mediaponderada = practicas+teoria+participacion; //Expresi�n matem�tica que obtiene la media ponderada
	    cout.precision(2); //Asignamos una precisi�n de 2 decimales a la media ponderada
		cout<<"\nEl valor de la media ponderada es: "<<endl; //Imprimimos este valor en pantalla
		cout<<mediaponderada; //Imprimimos en pantalla la media ponderada
	return 0; //Fin del programa
}

/*Este programa fue escrito por Emilio Carca�o Bringas*/
