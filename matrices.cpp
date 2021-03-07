#include <stdlib.h> 
#include <stdio.h> 
#include <iostream> 
#include <conio.h>
#include <math.h>

using namespace std;
int main ()
{
	int opcionMenu;
	// 														INICIA PRESENTACION
	cout<<"CENTRO UNIVERSITARIO CELSUS"<<endl;
	cout<<"Proyecto 1: SUMA Y RESTA DE MATRICES"<<endl;
	cout<<"Integrantes del equipo:"<<endl;
	cout<<" - Beto"<<endl; //pon bien tu nombre o como te gusta que te digan men :v
	cout<<" - Pepe Ruiz Rodriguez \n\n\n\n\n\n\n\n"<<endl;
	system("pause");
	system("cls");
	// 														TERMINA PRESENTACION
	//___________________________________________________________________________________________________________________________________________
	
	// 														INICIA MENU
	// 														Beto puedes agregar o modificar el menu a como consideres
	cout<<"BIENVENIDO AL MENU PRINCIPAL"<<endl;
	cout<<"Elige una opcion: "<<endl;
	cout<<" - 1 <----- ¿Que es una matriz?"<<endl;
	cout<<" - 2 <----- Realizar SUMA de dos matrices"<<endl;
	cout<<" - 3 <----- Realizar RESTA de dos matrices"<<endl;
	cout<<" - 4 <----- Mas informacion acerca de los desarrolladores"<<endl;
	cout<<" - 5 <----- Volver a la presentacion"<<endl;
	cout<<" "<<endl;
	cout<<" - 0 <----- SALIR"<<endl;
	cin>> opcionMenu;
	
	// 														TERMINA MENU
	//___________________________________________________________________________________________________________________________________________
	
	// 														INICIA EL DESARROLLO DE CADA OPCION
	switch (opcionMenu)
	{ 
		
		case 1:
			 break;
			 
			 
		case 2:
			 break;
			 
		case 3:
			 break;
			 
		case 4:
			 break;
			 
		case 5:
			 break;
			 
//____________________________________________________________________________________________________________________________________________
// 														 INICIA Opcion 0 (SALIR)
		case 0: 
			cout<<" "<<endl;
			cout<<" "<<endl;
			cout<<" "<<endl;
			cout<<" "<<endl;
			cout<<" "<<endl;
			cout<<" "<<endl;
			cout<<" "<<endl;
			cout<<" "<<endl;
			cout<<" "<<endl;
			cout<<" "<<endl;
			cout<<" "<<endl;
			cout<<" "<<endl;
			system("pause");
			return 0;
			 break;
// 														TERMINA Opcion 0 (SALIR)			 
//____________________________________________________________________________________________________________________________________________
	 
	}
	
	system("pause");
	return 0;	
}