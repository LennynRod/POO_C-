#include "Persona.cpp"
#include "Cliente.cpp"
#include "Empleado.cpp"

#include <iostream>

using namespace std;
main(){
	string nit,nombres,apellidos,direccion,codigo_empleado,puesto,sueldo;
	int telefono;
int op;
op =0;


cout<<"***Bienvenido, a continuacion digite la opcion correspondiente.***"<<endl<<endl;
cout<<"Ingresar cliente..................1"<<endl;
cout<<"Ingresar empleado.................2"<<endl<<endl;

cin>>op;






if (op == 1){

cout<<"***Usted a seleccionado la opcion para agreagar clientes.***"<<endl<<endl;

	cout<<"ingresar Nit: ";
	cin>>nit;
		cout<<"ingresar Nombre: ";
	cin>>nombres;
		cout<<"ingresar apelidos: ";
	cin>>apellidos;
		cout<<"ingresar direccion: ";
	cin>>direccion;
		cout<<"ingresar Telefono: ";
	cin>>telefono;
	
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	}	
if (op == 2){

cout<<"***Usted a seleccionado la opcion para agreagar Empleados.***"<<endl<<endl;
		cout<<"ingresar Nombre: ";
	cin>>nombres;
		cout<<"ingresar apelidos: ";
	cin>>apellidos;
		cout<<"ingresar direccion: ";
	cin>>direccion;
		cout<<"ingresar Telefono: ";
	cin>>telefono;
		cout<<"ingresar Codigo de empleado: ";
	cin>>codigo_empleado;
		cout<<"ingresar puesto: ";
	cin>>puesto;
		cout<<"ingresar sueldo: ";
	cin>>sueldo;



	Empleado obj = Empleado(nombres,apellidos,direccion,telefono,codigo_empleado,puesto,sueldo);
	obj.mostrar();
	}
}
