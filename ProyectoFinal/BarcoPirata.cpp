#include "BarcoPirata.h"
BarcoPirata::BarcoPirata(int id)
{
	this->id = id;
}
BarcoPirata::BarcoPirata(int id, int vida, int x, int y)
{
	this->id = id;
	this->x = x;
	this->y = y;
	this->vida = 100;
}
BarcoPirata::~BarcoPirata()
{
}
int BarcoPirata::getId()
{
	return id;
}
int BarcoPirata::getX()
{
	return x;
}
int BarcoPirata::getY()
{
	return y;
}
int BarcoPirata::getVida()
{
	return vida;
}
void BarcoPirata::setId(int id)
{
	this->id = id;
}
void BarcoPirata::setX(int x)
{
	this->x = x;
}
void BarcoPirata::setY(int y)
{
	this->y = y;
}
void BarcoPirata::setVida(int vida)
{
	this->vida = vida;
}
bool BarcoPirata::operator==(BarcoPirata pirata)
{
	return id == pirata.id;
}
bool BarcoPirata::operator==(BarcoPirata* pirata)
{
	return id == pirata->id;
}
void BarcoPirata::mostrar()
{
	stringstream ss;
	ss << "{tipo:P";
	ss << "id:" << id;
	ss << ",vida:" << vida;
	ss << ",x:" << x;
	ss << ",y:" << y << "}";
	cout << ss.str() << endl;
}
string BarcoPirata::getJson()
{
	stringstream ss;
	ss << "{tipo:P";
	ss << "id:" << id;
	ss << ",vida:" << vida;
	ss << ",x:" << x;
	ss << ",y:" << y << "}";
	return ss.str();
}