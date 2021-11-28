#include "Galera.h"
Galera::Galera(int id) : BarcoPirata(id)
{
}
Galera::Galera(int id, int vida, int x, int y) : BarcoPirata(id, vida, x, y)
{
}
Galera::~Galera()
{
}
void Galera::mostrar()
{
	stringstream ss;
	ss << "{galera:";
	ss << BarcoPirata::getJson() << "}";
	cout << ss.str() << endl;
}
string Galera::getJson()
{
	stringstream ss;
	ss << "{galera:";
	ss << BarcoPirata::getJson() << "}";
	return ss.str();
}