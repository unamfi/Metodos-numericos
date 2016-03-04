//Programa por Héctor Daniel Jacales Rojas
// UNIVERSIDAD NACIONAL AUTONOMA DE MEXICO
//FACULTDA DE INGENIERIA
//PROGRAMACIÓN AVANZADA Y METODOS NUMERICOS
//PROFESOR : JAIME AYALA PEREZ 
#include <stdio.h>
#include <math.h>
//Datos necesarios
float a,b; //intervalo incial
float eps; // criterio de convergencia
float eps1; // criterio de exactitud
int max_it; // No. maximo de iteraciones
float x; // valor (raiz) aproximada
//Funciones prototipo
float biseccion(float p, float q, float tol, float error,int maxit); //Algoritmo de biseccion
float f_x(float x); //Funcion a evaluar


//Funcion ejercico : x³+8x²+3x-6 
// Criterio de convergencia : 0.001 y criterio de exactitud : 0.001
//Intervalo [0,1]
// Maximo de iteraciones : 30
int main(){
	printf("=========== Metodo de la Biseccion ===========");
	printf("\n========== Por: Héctor Jacales ==========");
	do{
		printf("\n\n\tIntroduce el intervalo incial");
		printf("\nIntroduce el valor de a : ");
		scanf("%f",&a);
		printf("\nIntroduce el valor de b : ");
		scanf("%f",&b);
		}while(f_x(a)*f_x(b) > 0);
		printf("\nIngrese criterio de convergencia: ");
		scanf("%f",&eps);
		printf("\nIngrese criterio de exactitud:  ");
		scanf("%f",&eps1);
		printf("\nIngrese el numero maximo de iteraciones: ");
		scanf("%i", &max_it);
		x = biseccion(a,b,eps,eps1,max_it);
		printf("\n\n\t Resultado : %f",x);
	return 0;
	}
float f_x(float x){
	 return pow(x,3)+ (8*pow(x,2))+ (3*x)-6;
	}
float biseccion(float p, float q, float tol, float error, int maxit){
	 float FC, FP, FQ, c ; 
	 int i = 0;
	 float epsc = 100;
	 float epse = 100;
	 printf("\n i \t a \t b \t raiz<aproximada> \t f<c> \t EpsC \t EpsE ");
	 for(i=0; i <= maxit;i++){
		 
		 FP = f_x(p);
		 FQ = f_x(q);
		 c = (p+q)/2;
		 FC = f_x(c);
		 epsc = fabs(f_x(c));
		 epse = fabs(p-q);
		 printf("\n %i %f %f %f \t\t\t  %f %f %f",i,p,q,c,f_x(c),epsc,epse);
		 if( epsc < error){
			 return c ;
		 }
		 else{
			 if(epse < tol){
				 c = (p+q)/2;
				 return c;
				 }
				 else{
					 if(FQ*FC > 0){
						 q = c;
						 }
					else{
						p = c;
						}
					 }
			 }
		  
		 
		 }
		 
	return c;
	}

