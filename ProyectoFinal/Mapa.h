#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Mapa
{
private:
	int id;
	int alto;
	int ancho;
	string matriz[100][100];
public:
	Mapa(int id);
	Mapa(int id, int alto, int ancho);
	~Mapa();
	int getId();
	int getAlto();
	int getAncho();
	void setId(int id);
	void setAlto(int alto);
	void setAncho(int ancho);
	void mostrar();
	string getJson();
};

