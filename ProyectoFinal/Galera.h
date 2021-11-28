#pragma once
#include "BarcoPirata.h"
class Galera :    public BarcoPirata
{
public:
	Galera(int id);
	Galera(int id, int vida, int x, int y);
	~Galera();
	void mostrar();
	string getJson();
};

