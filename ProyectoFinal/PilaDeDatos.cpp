#include "PilaDeDatos.h"
PilaDeDatos::PilaDeDatos()
{
	ind = 0;
}
PilaDeDatos& PilaDeDatos::getInst()
{
	static PilaDeDatos i;
	return i;
}
PilaDeDatos::~PilaDeDatos()
{
}
bool PilaDeDatos::depositarDato(int dato)
{
	bool res = false;
	m.lock();
	if (ind < 100)
	{
		vec[ind] = dato;
		res = true;
		ind++;
	}
	m.unlock();
	return res;
}
bool PilaDeDatos::obtenerDato(int& dato)
{
	bool res = false;
	m.lock();
	if (ind > 0)
	{
		dato = vec[ind - 1];
		res = true;
		ind--;
	}
	m.unlock();
	return res;
}