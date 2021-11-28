#include "Corbeta.h"
Corbeta::Corbeta(int id) : BarcoPirata(id)
{
}
Corbeta::Corbeta(int id, int vida, int x, int y) : BarcoPirata(id, vida, x, y)
{
}
Corbeta::~Corbeta()
{
}
void Corbeta::mostrar()
{
	stringstream ss;
	ss << "{corbeta:";
	ss << BarcoPirata::getJson() << "}";
	cout << ss.str() << endl;
}
string Corbeta::getJson()
{
	stringstream ss;
	ss << "{corbeta:";
	ss << BarcoPirata::getJson() << "}";
	return ss.str();
}