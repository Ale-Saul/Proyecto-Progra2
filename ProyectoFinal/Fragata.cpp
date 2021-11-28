#include "Fragata.h"
Fragata::Fragata(int id) : BarcoPirata(id)
{

}
Fragata::Fragata(int id, int vida, int x, int y) : BarcoPirata(id, vida, x, y)
{

}
Fragata::~Fragata()
{
}
void Fragata::mostrar()
{
	stringstream ss;
	ss << "{fragata:";
	ss << BarcoPirata::getJson() << "}";
	cout << ss.str() << endl;
}
string Fragata::getJson()
{
	stringstream ss;
	ss << "{fragata:";
	ss << BarcoPirata::getJson() << "}";
	return ss.str();
}