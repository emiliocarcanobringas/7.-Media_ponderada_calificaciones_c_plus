/*Este programa calcula la media ponderada de 3 calificaciones: 
1.- Prácticas = 30%
2.- Teoría = 60%
3.- Participación = 10%
Solicita al usuario la entrada de datos y realiza la operación de media ponderada, después muestra el resultado en pantalla
con una precisión de 2 decimales*/

#include <iostream> //Librería estándar de entrada de datos
#include<locale.h> //Librería estándar de localización (regionalización)

using namespace std; //Acceso al espacio de nombres para poder utilizar cin, cout, etc.

int main(){
	setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librería y le asignamos el valor: "Idioma español"

	/*Declaramos las variables principales y la  variable que realizará 
	la operación de sumar las variables convertidas en porcentajes para obtener
	la media ponderada, esta última la iniciamos en cero*/
	float practicas, teoria, participacion, mediaponderada = 0; 
		
		cout<<"Ingrese la calificación por prácticas: "<<endl; //Solicitamos el valor de la variable: "practicas"
		cin>>practicas; //Almacenamos el valor de la variable: "practicas"
		cout<<"Ingrese la calificación por teoría: "<<endl; //Solicitamos el valor de la variable: "teoria"
		cin>>teoria; //Almacenamos el valor de la variable: "teoria"
		cout<<"Ingrese la calificación por participación: "<<endl; //Solicitamos el valor de la variable "participación"
		cin>>participacion; //Almacenamos el valor de la variable: "participacion"
		
		practicas = practicas*.3; //Asi le damos el valor del 30% a la variable prácticas
		teoria = teoria*.6; //Así le asignamos el valor del 60% a la variable teoría
		participacion = participacion*.1; //Le estamos dando un valor del 10% a la variable
		mediaponderada = practicas+teoria+participacion; //Expresión matemática que obtiene la media ponderada
	    cout.precision(2); //Asignamos una precisión de 2 decimales a la media ponderada
		cout<<"\nEl valor de la media ponderada es: "<<endl; //Imprimimos este valor en pantalla
		cout<<mediaponderada; //Imprimimos en pantalla la media ponderada
	return 0; //Fin del programa
}

/*Este programa fue escrito por Emilio Carcaño Bringas*/
