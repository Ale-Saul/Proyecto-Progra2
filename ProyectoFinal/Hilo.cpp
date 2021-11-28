#include "Hilo.h"
Hilo::Hilo(int id)
{
	t = NULL;
	this->id = id;
}
Hilo::~Hilo()
{
	if (t != NULL)
	{
		delete t;
	}
}
void Hilo::iniciar()
{
	t = new thread(ejecutarProcesar, this);
}
void Hilo::join()
{
	if (t != NULL)
	{
		t->join();
	}
}
void Hilo::ejecutarProcesar(Hilo* h)
{
	h->procesar();
}