#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class BarcoHeroe
{
private:
	int id;
	int vida;
	int x;
	int y;
public:
	BarcoHeroe(int id);
	BarcoHeroe(int id, int vida, int x, int y);
	~BarcoHeroe();
	int getId();
	int getVida();
	int getX();
	int getY();
	void setId(int id);
	void setVida(int vida);
	void setX(int x);
	void setY(int y);
	bool operator==(BarcoHeroe heroe);
	bool operator==(BarcoHeroe* heroe);
	void mostrar();
	string getJson();
};

