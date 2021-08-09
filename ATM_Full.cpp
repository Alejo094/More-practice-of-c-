  #include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int opcion=0;
int opcion1=0;
int opcion2=0;
long saldoAhorro=15000000;
long saldoCorriente=5000000;
long sobregiro = 1000000;
long valor=0;
long cupo=10000000;
long cupor=0;
long restante=0;
int clave=1994;
int psswd=0;
string user="alejo";
string us="op";
long saldoAUsar=0;
long saldoPrueba=0;
long challe=0;


bool validarUsuario(string us,long clave);

void menuPrincipal();

void menuCuentaAhorros();
void saldoAhorros();
void consignarAhorros();
void retirarAhorros();

long contarBilletes(long saldoAUsar);

void menuCuentaCorriente();
void saldoCCorriente();
void consignarCorriente();
void retirarCorriente();

void retirarCredito();

void volverMenu();

int main(){
	
	cout<<"\t\t\t Cajero del Profe Jhon\n\n";
	cout<<"Por favor ingrese el usuario de la cuenta\n";
	cin>>us;
	cout<<"Por favor ingrese la clave de la cuenta\n";
	cin>>psswd;
	
	if (validarUsuario(us,psswd)){
		
		menuPrincipal();	
	}
	else{
		cout<<"El usuario o la contrasena son invalidos\n";	
	}
	
}


void menuPrincipal(){
	
	system("cls");
	system("color f0");
	
	cout<<"\t\t\t Bienvenido al Cajero del Profe Jhon \n\n";
	
	cout<<"\nA cual cuenta desea ingresar?\n\n";
	
	cout<<"1. Cuenta de Ahorros Debito \n";
	cout<<"2. Cuenta Corriente Debito\n";
	cout<<"3. Realizar avance de la tarjeta de credito\n\n";
	
	cout<< "Opcion ? \n";
	
	cout<<"\n\n";
	
	cin>>opcion;
	
	switch (opcion){
		
			case 1:
			
			menuCuentaAhorros();
			break;
	
			case 2:
	
			menuCuentaCorriente();
			break;
			
			case 3:
				
				system("cls");
				system("color b0");
				
				cout<<"\t\t\t Cajero del Profe Jhon \n\n";
				
				cout<<"Su cupo actual de la tarjeta de credito es por $"<<cupo<<endl;
					
				cout<<"Cuanto desea utilizar?\n\n";
				cin>>valor;
				
				system("color b0");
				system("cls");
				
				saldoAUsar = cupo;
				
				retirarCredito();
				break;
					
			default:
				system("cls");
				system("color d0");
				cout<<"Opcion no valida gracias por visitar el cajero";			
	}
	volverMenu();									
			
}
		


void menuCuentaAhorros(){
	
			system("color b1");
			system("cls");
			
			cout<<"\t\t\t Cajero del Profe Jhon, Cuenta de Ahorros \n\n";
			cout<<"1. Consultar Saldo Cuenta de Ahorros\n";
			cout<<"2. Consignar a Cuenta de Ahorros\n";
			cout<<"3. Retirar de Cuenta de Ahorros\n";
			cout<<"4. Salir de Cajero\n\n";
			cout<<"Por favor seleccione la opcion que desea realizar\n";
				
			cin>>opcion1;
			
			switch(opcion1){
				
				case 1:
					
					saldoAhorros();
					
					break;
			
				case 2:
					
					consignarAhorros();
					
					break;
					
				case 3:
					
					system("cls");// clean screen
					system("color e0");
					
					cout<<"\t\t\t Cajero del Profe Jhon, Cuenta de Ahorros \n\n";
					cout<<"Por favor ingrese el valor que desea retirar de su cuenta de ahorros\n";
					cin>>valor;
					
					saldoAUsar = saldoAhorro;
					
					retirarAhorros();

				
					break;
					
				case 4:
					
					system("cls");// clean screen
					system("color f0");
					
					cout<<"\t\t\t Cajero del Profe Jhon, Cuenta de Ahorros \n\n";			
					
					cout<<"Gracias por utilizar nuestro servicio \n";
					
					exit(1);
					
				default:
					cout<<"Opcion incorrecta por favor revise las opciones \n";		
			}
			
			volverMenu();
			
			
}


void saldoAhorros(){

	system("cls");// clean screen
	system("color a");
	cout<<"\t\t\t Cajero del Profe Jhon, Cuenta de Ahorros \n\n";
	cout<<"Su saldo es: "<<saldoAhorro <<endl;		
}	


void consignarAhorros(){
	
	system("cls");// clean screen
	system("color a1");
	
	cout<<"\t\t\t Cajero del Profe Jhon, Cuenta de Ahorros \n\n";
	cout<<"Por favor ingrese el valor que desea consignar\n";
	cin>>valor;
	
	system("cls");// clean screen
	cout<<"\t\t\t Cajero del Profe Jhon, Cuenta de Ahorros \n\n";
	saldoAhorro=saldoAhorro+valor;//saldo+=valor;
	cout<<"Su nuevo saldo es: "<<saldoAhorro <<"\n";
}


bool validarUsuario(string us,long psswd){
	
	if (clave==psswd && us==user){
		return true;
					
	}
	else{
		return false;
	}
	
}	


long contarBilletes(long saldoAUsar){

	system("color 0");
	system("cls");
	
	cout<<"\t\t\t Cajero del Profe Jhon \n\n";
	
	if(saldoAUsar>=valor){
		
		saldoAUsar=saldoAUsar-valor;
							
		int valcien= valor/100000;
		
		if (valcien > 0){
			
			cout<< "\n Billetes de cien mil: "<<valcien <<"\n";
		}
		
		valor = valor - (valcien*100000);
		
		int valcincuenta = valor/50000;
		
		if (valcincuenta > 0){
			
			cout<<" Billetes de cincuenta mil: "<<valcincuenta <<"\n";
		}
		
		valor =  valor - (valcincuenta*50000);
		
		int valveinte = valor/20000;
		
		if(valveinte > 0 ){
			
			cout<<" Billetes de veinte mil: "<<valveinte <<"\n";
		}
		
		valor = valor - (valveinte *20000);
		
		int valdiez = valor/10000;
		
		if(valdiez > 0){
			
			cout<<" Billetes de diez mil: "<< valdiez <<"\n";
		}
		
		cout<< " \n Su nuevo saldo en la cuenta es de " <<saldoAUsar<<endl;
		
	}
	
	else if ((sobregiro + saldoAUsar)>=valor && saldoPrueba==saldoCorriente ){
							
		cout<<" El valor supera su saldo actual de la Cuenta Corriente, pero por Sobregiro le prestamos el restante, no olvide pagar el prestamo lo mas pronto posible!\n";
	
		saldoAUsar=saldoAUsar-valor;
							
		int valcien= valor/100000;
		
		if (valcien > 0){
			
			cout<< "\n Billetes de cien mil: "<<valcien <<"\n";
		}
		
		valor = valor - (valcien*100000);
		
		int valcincuenta = valor/50000;
		
		if (valcincuenta > 0){
			
			cout<<" Billetes de cincuenta mil: "<<valcincuenta <<"\n";
		}
		
		valor =  valor - (valcincuenta*50000);
		
		int valveinte = valor/20000;
		
		if(valveinte > 0 ){
			
			cout<<" Billetes de veinte mil: "<<valveinte <<"\n";
		}
		
		valor = valor - (valveinte *20000);
		
		int valdiez = valor/10000;
		
		if(valdiez > 0){
			
			cout<<" Billetes de diez mil: "<< valdiez <<"\n";
		}
		
		cout<< " \n Su nuevo saldo en la cuenta Corriente es " <<saldoAUsar<<endl;
	}
	
	else{
		cout<<"Lo sentimos su saldo en la cuenta es insuficiente\n";
		
	}
	
	return saldoAUsar;			
	
}
  

void retirarAhorros(){

	saldoAhorro = contarBilletes(saldoAUsar);
}


void menuCuentaCorriente(){
	
			system("cls");
			system("color a");	
			
			cout<<"\t\t\t Cajero del Profe Jhon, Cuenta Corriente \n\n";
			cout<<"1. Consultar Saldo Cuenta Corriente\n";
			cout<<"2. Consignar a Cuenta Corriente\n";
			cout<<"3. Retirar de Cuenta Corriente\n";
			cout<<"4. Salir de Cajero\n\n";
			cout<<"Por favor seleccione la opcion que desea realizar\n";
					
			cin>>opcion2;
	
			switch(opcion2){
				
				case 1:
					
					saldoCCorriente();
					break;
					
				case 2:
					
					consignarCorriente();
					break;
					
				case 3:
					
					system("cls");// clean screen
					system("color e0");
					
					cout<<"\t\t\t Cajero del Profe Jhon, Cuenta Corriente \n\n";
					cout<<"Por favor ingrese el valor que desea retirar de su cuenta corriente\n";
					
					cin>>valor;
					
					saldoAUsar = saldoCorriente;
					saldoPrueba = saldoCorriente;
					
					retirarCorriente();
					break;
					
					
				case 4:
					
					system("cls");// clean screen
					system("color b0");

					cout<<"\t\t\t Cajero del Profe Jhon, Cuenta Corriente \n\n";
					
					cout<<"Gracias por utilizar nuestro servicio \n";
					exit(1);
					
				default:
					
					system("cls");
					system("color f9");
					
					cout<<"Opcion no valida!! Por favor revise las opciones";				
			}
			
			volverMenu();
	
}


void saldoCCorriente(){
			
	system("cls");// clean screen
	system("color a");
	cout<<"\t\t\t Cajero del Profe Jhon, Cuenta Corriente \n\n";
	cout<<"Su saldo es: "<<saldoCorriente <<endl;	
}


void consignarCorriente(){
	
system("cls");// clean screen
system("color b0");

cout<<"\t\t\t Cajero del Profe Jhon, Cuenta Corriente \n\n";
cout<<"Por favor ingrese el valor que desea consignar\n";
cin>>valor;

system("cls");// clean screen

cout<<"\t\t\t Cajero del Profe Jhon, Cuenta Corriente \n\n";
saldoCorriente=saldoCorriente+valor;//saldo+=valor;
cout<<"Su nuevo saldo es: "<<saldoCorriente <<"\n";

}


void retirarCorriente(){
	
	saldoCorriente= contarBilletes(saldoAUsar);
	
}


void retirarCredito(){
	
	cupo= contarBilletes(saldoAUsar);
	
}

void volverMenu(){
	
	cout<<"\n\nSi desea volver al menu principal oprima 1 !\n";
	cout<<"Si desea salir del cajero presione 2 o cualquier otra tecla!\n";
	
	cin>>challe;
	
	if (challe==1){
		
		menuPrincipal();
	}
	else{
		
		cout<<"Gracias por usar el Cajero del Profe Jhon!\n";
		exit(1);
	}	
	
}
