#include <iostream>

using namespace std;

class Cliente : Persona {
	protected : string nit;
	
	public: 
	Cliente(){
	}

	Cliente(string nom,string ape,string dir, int tel,string n) : Persona(nom,ape,dir,tel){
		nit = n;
	}
	
	void mostrar(){
		cout<<"________________"<<endl;
		
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
		
	}
};
