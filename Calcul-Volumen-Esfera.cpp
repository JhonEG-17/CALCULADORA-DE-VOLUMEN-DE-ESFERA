//librerias utilizadas

#include<iostream> //libreria estandar equivalente a "stdio.h"

#include<stdlib.h> //libreria para uso de operaciones matematicas

using namespace std; //instruccion para la omision del uso de "std" en el texto como "std cout"

#ifndef MPI //comprovacion de variable de valor definido

#define M_PI 3.14159265358979323846 //asignacion de el valor a la variable con valor definido

#endif //sinalizacion de la comprobacion de la variable
	
	int main(){
		
		int radio,opcion1, cuadrado, cubo, r3pi, r3pi4, volumen; //variables que utilizaremos 
			
			do{
			
				//menu del programa
				cout<<"\t"<<"BIENVENIDO"<<"\n\n"<<"SELECCIONA LA OPCION QUE DESEAS:"<<"\n\n"<<"1.-Iniciar programa"<<"\n"<<"2.-Finalizar y salir"<<"\n\n"<<"DIGITE LA OPCION QUE DESEA: ";
					cin>>opcion1;
				
				system("cls");
				
				switch(opcion1){
					
					case 1:
						
						cout<<"introduce el radio de la esfera: ";//solicitamos datos al usuario
							cin>>radio;//almacenamos ese dato
						
							//operaciones matematicas
							//Elevar radio al cubo y eso mulplicarlo por PI
							cin.get();
							
							cuadrado = radio * radio;
							
    						cubo = cuadrado*radio;
    						
							r3pi = M_PI * cubo;
							
							//Al resultado anterior lo multiplicamos por 4
							
							r3pi4 = r3pi * 4;
							
							//Al resultado anterior lo dividimos entre 3
							
							volumen = r3pi4 / 3;
						
							system("cls");
							
						cout<<"Segun los datos proporcionados por el usuario el volumen de la esfera es: "<<volumen<<"\n"<<endl;
						
						system("pause");
						
						system("cls");
						
					break;
					
					case 2:
					break;
					
				}
				
			}while(opcion1!=2);
		
		//mesnaje de salida o despedida para el usuario
		cout<<"\t""GRACIAS POR UTILIZAR ESTE PROGRAMA"<<"\n\n\t"<<"This program was developed by the developer Jhonatan Espinal Garcia"<<"\n\n\t"<<"all rights of use and distribution are reserved";
		
	system("pause");
	return 0;
		
	}