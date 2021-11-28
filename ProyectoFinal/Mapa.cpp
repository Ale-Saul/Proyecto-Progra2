#include "Mapa.h"
Mapa::Mapa(int id)
{
	this->id = id;
}
Mapa::Mapa(int id, int alto, int ancho)
{
	this->id = id;
	this->alto = alto;
	this->ancho = ancho;
}
Mapa::~Mapa()
{
}
int Mapa::getId()
{
	return id;
}
int Mapa::getAlto()
{
	return alto;
}
int Mapa::getAncho()
{
	return ancho;
}
void Mapa::setId(int id)
{
	this->id = id;
}
void Mapa::setAlto(int alto)
{
	this->alto = alto;
}
void Mapa::setAncho(int ancho)
{
	this->ancho = ancho;
}
void Mapa::mostrar()
{
	stringstream ss;
	for (int i = 0; i < getAlto(); i++)
	{
		for (int j = 0; j < getAncho(); j++)
		{
			ss << matriz[i][j];
		}
		ss << endl;
	}
	cout << ss.str() << endl;
}
string Mapa::getJson()
{
	stringstream ss;
	for (int i = 0; i < getAlto(); i++)
	{
		for (int j = 0; j < getAncho(); j++)
		{
			ss << matriz[i][j];
		}
		ss << endl;
	}
	return ss.str();
}