#include "persona.cpp"
#include <iostream>
using namespace std; 

class cliente : persona {
;
	// atributos
	private : string nit;
	
	//cosntructor
	public : 
	cliente(){
	}
	
	cliente(string nom,string ape,string dir,int tel,string n) : persona(nom,ape,dir,tel){
		nit= n;
		
	
	// set (modificar)
	void setNit(string n){nit = n;}
	void setNombre(string nom){nombre = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}
	// get (mostrar)
	string getNit(){return nit;}	
	string getNombre(){return nombre;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	// metodos 
	void mostrar(){
		cout<<"______________"<<endl;
		cout<<nit<<","<<nombre<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
	}
	


