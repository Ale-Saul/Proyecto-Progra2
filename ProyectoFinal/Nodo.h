#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

template<class T>
class Nodo
{
private:
	Nodo<T>* siguiente;
	T* dato;
public:
	Nodo(T* dato);
	~Nodo();
	Nodo<T>* getSiguiente();
	T* getDato();
	void setSiguiente(Nodo<T>* siguiente);
	void setDato(T* dato);
	void crearSiguiente(T* dato);
};

template<class T>
Nodo<T>::Nodo(T* dato)
{
	this->dato = dato;
	siguiente = NULL;
}

template<class T>
Nodo<T>::~Nodo()
{
}

template<class T>
Nodo<T>* Nodo<T>::getSiguiente()
{
	return siguiente;
}

template<class T>
T* Nodo<T>::getDato()
{
	return dato;
}

template<class T>
void Nodo<T>::setSiguiente(Nodo<T>* siguiente)
{
	this->siguiente = siguiente;
}

template<class T>
void Nodo<T>::setDato(T* dato)
{
	this->dato = dato;
}

template<class T>
void Nodo<T>::crearSiguiente(T* dato)
{
	siguiente = new Nodo<T>(dato);
}

