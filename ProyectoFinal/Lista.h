#pragma once
#include "Nodo.h"

template <class T>
class Lista
{
private:
	Nodo<T>* primerNodo;
	int ind;
public:
	Lista();
	~Lista();
	int getInd();
	void registrar(T* dato);
	T* buscar(T* datoABuscar);
	void ordenar(bool (*cmp)(T*, T*));
	void mostrar(void (*f)(T*));
	void eliminar(T* datoAEliminar);
	string getJson(string(*f)(T*));
	Nodo<T>* getNodo(int pos);
};

template <class T>
Lista<T>::Lista()
{
	primerNodo = NULL;
	ind = 0;
}

template <class T>
Lista<T>::~Lista()
{
}

template<class T>
int Lista<T>::getInd()
{
	return ind;
}

template <class T>
void Lista<T>::registrar(T* dato)
{
	if (primerNodo == NULL)
	{
		primerNodo = new Nodo<T>(dato);
	}
	else
	{
		Nodo<T>* aux = primerNodo;
		while (aux->getSiguiente() != NULL)
		{
			aux = aux->getSiguiente();
		}
		aux->crearSiguiente(dato);
	}
	ind++;
}

template <class T>
T* Lista<T>::buscar(T* datoABuscar)
{
	Nodo<T>* aux = primerNodo;
	while (aux != NULL)
	{
		T* dato = aux->getDato();
		if (*datoABuscar == dato)
		{
			T* datoEncontrado = aux->getDato();
			return datoEncontrado;
		}
		aux = aux->getSiguiente();
	}
	return NULL;
}

template <class T>
void Lista<T>::ordenar(bool (*cmp)(T*, T*))
{
	for (int i = 0; i < ind; i++)
	{
		for (int j = 0; j < ind - 1; j++)
		{
			T* getDato = getNodo(j)->getDato();
			T* getSiguienteDato = getNodo(j + 1)->getDato();
			if ((*cmp)(getDato, getSiguienteDato))
			{
				T* temp = getSiguienteDato;
				getNodo(j + 1)->setDato(getDato);
				getNodo(j)->setDato(temp);
			}
		}
	}
}

template <class T>
void Lista<T>::mostrar(void (*f)(T*))
{
	Nodo<T>* aux = primerNodo;
	while (aux != NULL)
	{
		(*f)(aux->getDato());
		aux = aux->getSiguiente();
	}
}

template <class T>
void Lista<T>::eliminar(T* datoAEliminar)
{
	Nodo<T>* nodoActual = primerNodo;
	Nodo<T>* nodoAnterior = NULL;

	while (nodoActual != NULL)
	{

		T* dato = nodoActual->getDato();
		if (*datoAEliminar == dato)
		{
			Nodo<T>* nodoSiguiente = nodoActual->getSiguiente();
			if (nodoAnterior != NULL)
			{
				nodoAnterior->setSiguiente(nodoSiguiente);
			}
			else if (nodoAnterior == NULL && nodoSiguiente != NULL)
			{
				primerNodo = nodoSiguiente;
			}
			else
			{
				primerNodo = NULL;
			}
		}
		nodoAnterior = nodoActual;
		nodoActual = nodoActual->getSiguiente();
	}
}

template <class T>
string Lista<T>::getJson(string(*f)(T*))
{
	stringstream ss;
	Nodo<T>* aux = primerNodo;
	while (aux != NULL)
	{
		ss << (*f)(aux->getDato());
		aux = aux->getSiguiente();
		if (aux != NULL)
		{
			ss << ",";
		}
	}
	return ss.str();
}

template <class T>
Nodo<T>* Lista<T>::getNodo(int pos)
{
	Nodo<T>* nodoActual = primerNodo;
	for (int i = 0; i < ind; i++)
	{
		if (i == pos)
		{
			return nodoActual;
		}
		nodoActual = nodoActual->getSiguiente();
	}
	return NULL;
}