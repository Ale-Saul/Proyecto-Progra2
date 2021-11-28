#pragma once
#include "BarcoPirata.h"
class Trirreme :    public BarcoPirata
{
public:
	Trirreme(int id);
	Trirreme(int id, int vida, int x, int y);
	~Trirreme();
	void mostrar();
	string getJson();
};

