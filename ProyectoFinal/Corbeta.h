#pragma once
#include "BarcoPirata.h"
class Corbeta :    public BarcoPirata
{
public:
	Corbeta(int id);
	Corbeta(int id, int vida, int x, int y);
	~Corbeta();
	void mostrar();
	string getJson();
};

