#pragma once
#include "BarcoPirata.h"
class Fragata :    public BarcoPirata
{
public:
	Fragata(int id);
	Fragata(int id, int vida, int x, int y);
	~Fragata();
	void mostrar();
	string getJson();
};

