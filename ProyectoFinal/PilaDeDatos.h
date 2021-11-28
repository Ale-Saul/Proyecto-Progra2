#pragma once

#include <mutex>
using namespace std;

class PilaDeDatos
{
private:
	int vec[100];
	int ind;
	mutex m;
public:
	static PilaDeDatos& getInst();
	~PilaDeDatos();
	bool depositarDato(int dato);
	bool obtenerDato(int& dato);
private:
	PilaDeDatos();
};

