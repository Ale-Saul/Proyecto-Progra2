#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <sstream>
#include "Lista.h"
using namespace std;

class Objeto
{
private:
	string archivo;
	Lista<char> caracteres;
public:
	Objeto();
};

