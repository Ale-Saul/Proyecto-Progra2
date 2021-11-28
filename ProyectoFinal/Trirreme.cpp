#include "Trirreme.h"
Trirreme::Trirreme(int id) : BarcoPirata(id)
{
}
Trirreme::Trirreme(int id, int vida, int x, int y) : BarcoPirata(id, vida, x, y)
{
}
Trirreme::~Trirreme()
{
}
void Trirreme::mostrar()
{
	stringstream ss;
	ss << "{trirreme:";
	ss << BarcoPirata::getJson() << "}";
	cout << ss.str() << endl;
}
string Trirreme::getJson()
{
	stringstream ss;
	ss << "{trirreme:";
	ss << BarcoPirata::getJson() << "}";
	return ss.str();
}