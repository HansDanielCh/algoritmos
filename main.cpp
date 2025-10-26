#include "cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombre,apellidos,direccion;
	int telefono;
	
	cout<<"Ingresar Nit: ";
	cin>>nit;
	cout<<"Ingresar Nombres:  ";
	cin>>nombre;
	cout<<"Ingresar Apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
	// instancia de un objeto
	/*
	cliente obj = cliente(nombre,apellidos,direccion,telefono,nit);
	obj.mostrar();

	cout<<"Ingresar Nit: ";
	cin>>nit;
	obj.setNit(nit);
	obj.mostrar();*/
	cliente obj = cliente();
	obj.setNit(nit);
	obj.setNombre(nombre);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	obj.mostrar();
		
} 
