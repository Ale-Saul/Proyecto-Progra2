#pragma once
#include <thread>
#include <iostream>
using namespace std;

class Hilo
{
private:
	thread* t;
protected:
	int id;
public:
	Hilo(int id);
	~Hilo();
	void iniciar();
	void join();
private:
	static void ejecutarProcesar(Hilo* h);
protected:
	virtual void procesar() = 0;
};

