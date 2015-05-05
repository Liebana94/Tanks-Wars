#pragma once
#include "Vector2D.h"
class Muro
{
public:
	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;
	float lado;
	Vector2D posicion;

	Muro(void);
	~Muro(void);
	void dibuja(void);
};

