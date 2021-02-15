//#include "Persona.cpp"
#include <iostream>
using namespace std;

class Empleado: Persona {
	protected : string codigo_empleado,puesto,sueldo;
	
	public:
	 Empleado(){
	}
		Empleado(string nom,string ape,string dir, int tel,string coemp, string pues, string suel) : Persona(nom,ape,dir,tel){
		codigo_empleado = coemp;
		puesto = pues;
		sueldo = suel;
		
	}
	
	void mostrar() {

	
		cout<<"________________"<<endl;
		
		cout<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<codigo_empleado<<","<<puesto<<","<<sueldo<<endl;
		}
	
	
};
