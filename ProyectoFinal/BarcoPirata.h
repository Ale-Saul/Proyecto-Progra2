#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class BarcoPirata
{
protected:
	int id;
	int vida;
	int x;
	int y;
public:
	BarcoPirata(int id);
	BarcoPirata(int id, int vida, int x, int y);
	~BarcoPirata();
	int getId();
	int getX();
	int getY();
	int getVida();
	void setId(int id);
	void setX(int x);
	void setY(int y);
	void setVida(int vida);
	bool operator==(BarcoPirata pirata);
	bool operator==(BarcoPirata* pirata);
	virtual void mostrar();
	virtual string getJson();
};

