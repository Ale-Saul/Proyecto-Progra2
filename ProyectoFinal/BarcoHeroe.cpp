#include "BarcoHeroe.h"
BarcoHeroe::BarcoHeroe(int id)
{
	this->id = id;
}
BarcoHeroe::BarcoHeroe(int id, int vida, int x, int y)
{
	this->id = id;
	this->vida = 200;
	this->x = x;
	this->y = y;
}
BarcoHeroe::~BarcoHeroe()
{
}
int BarcoHeroe::getId()
{
	return id;
}
int BarcoHeroe::getVida()
{
	return vida;
}
int BarcoHeroe::getX()
{
	return x;
}
int BarcoHeroe::getY()
{
	return y;
}
void BarcoHeroe::setId(int id)
{
	this->id = id;
}
void BarcoHeroe::setVida(int vida)
{
	this->vida = vida;
}
void BarcoHeroe::setX(int x)
{
	this->x = x;
}
void BarcoHeroe::setY(int y)
{
	this->y = y;
}
bool BarcoHeroe::operator==(BarcoHeroe heroe)
{
	return id == heroe.id;
}
bool BarcoHeroe::operator==(BarcoHeroe* heroe)
{
	return id == heroe->id;
}
void BarcoHeroe::mostrar()
{
	stringstream ss;
	ss << "{tipo:H";
	ss << "id:" << id;
	ss << ",x:" << x;
	ss << ",y:" << y << "}";
	cout << ss.str() << endl;
}
string BarcoHeroe::getJson()
{
	stringstream ss;
	ss << "{id:" << id;
	ss << ",x:" << x;
	ss << ",y:" << y << "}";
	return ss.str();
}