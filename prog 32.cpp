/* Autor: Xavier Romero Hernández, Realizado: 03/03/2022 
	Programa que lea varias temperaturas en grados celsius e imprima el equivalente
	en grados fahrenheit, el programa termina cuando se introduce una temperatura de 999;
	*/

#include <stdio.h>

int main(){
	
	float cels, fahr;
	
	do{
		printf("Ingrese una temperatura en celsius: ");
		scanf("%f",&cels);
		fahr=cels*((float)9/5)+32;
		printf("%.2f grados celsius son %.2f grados fahrenheit\n\n",cels,fahr);
	}while(cels!=999);
	
	return 0;
}
