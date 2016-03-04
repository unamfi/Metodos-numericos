//Programa por Héctor Daniel Jacales Rojas
// UNIVERSIDAD NACIONAL AUTONOMA DE MEXICO
//FACULTDA DE INGENIERIA
//PROGRAMACIÓN AVANZADA Y METODOS NUMERICOS
//PROFESOR : JAIME AYALA PEREZ 

//Cabecera
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Datos
#define R 17
float A[R][R];  // Matriz de coeficientes
float b[R]; // Vector de términos
int n ;// Número de ecuaciones del sistema
//Incognitas
float X[17]; //Vector solución
//Archivos
FILE *matA; //Arcivo que ingresa los datos de la matriz de coeficientes
FILE *vectb; // Archivo que ingresa los datos del vector de términos independientes
FILE *sol; // Archivo que guarda la solución del sistema;
//Funciones prototipo, que funciones o modulos voy a necesitar
int LeerArchivo(int code); //Funcion que lee datos de un archivo y los ingresa a un arreglo o matriz
int ImprimirArchivo(char nombre[50]); //Funcion que imprime datos en un archivo
void Triangularizacion(float A[R][R]); //Funcion que triangulariza una Matriz de dimension R
void SR(float b[R]); //Funcion que realiza el proceso de sustitucion regresiva
void impMatriz(float Z[R][R],int ren,int col);
void impVector(float Z[R],int ren);
int main(){
	printf("===============Método de Gauss Normal================");
	printf("\n========= Por: Héctor Jacales ==============");
	int x = 0;
	do{
		x = LeerArchivo(0);
	}while(x == 0);
	return 0;
	}
int LeerArchivo(int code){
	int exito = 0;
	char nombre[150];
	if(code == 0){
		printf("\nIngresa el Nombre del Archivo de la Matriz A <coeficientes>");
		gets(nombre);
		matA = fopen(nombre,"r");
		if(){
		}
		else{
			exito = 0;
			}
		}
	else{
		if(code == 1){
			
			}
		else{
			printf("\nOperacion invalida");
			}
		}
		return exito;
	}
