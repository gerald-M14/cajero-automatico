//hacer un cajero 

#include<iostream>
using namespace std;

int main(){
		int saldo_inicial = 1000;
		int saldo, reintegro,opcion,agregar;
		
		cout<<"\tBienvenido a su cajero Virtual";
		cout<<"\nEscoja una opcion: ";
		cout<<"\n1. Ingreso en cuenta";
		cout<<"\n2. Reintegro";
		cout<<"\n3. Ver saldo de cuenta";
		cout<<"\n0. salir";
		cout<<"\nOpcion: ";
		cin>>opcion;
		
		if(opcion==1){
			cout<<"\Ingrese �a cantidad a depositar: ";
			cin>>agregar;
			saldo = saldo_inicial + agregar;
			cout<<"\nCantidad disponible en cuenta: "<<saldo;
		}
	else if(opcion==2){
		cout<<"\nCuanta cantidad desea retirar: ";
		cin>>reintegro;
		if(reintegro>1000){
			cout<<"\nLa cantidad digitada es mayor a 1000, digite de nuevo la cantidad a retirar: ";
			cin>>reintegro;
		}
		saldo= saldo_inicial- reintegro;
		cout<<"\nCantidad disponible en cuenta: "<<saldo;
	}
	else if(opcion == 3){
		cout<<"\nLa cantidad disponible en cuenta es de: "<<saldo_inicial;
	}
	else if(opcion ==0){
		cout<<"gracias por utilizar nuestro cajero automatico";
	}
	else{
		cout<<"se equivoco de opcion de menu";
		cin.get();
	}


	
	


	return 0;}
