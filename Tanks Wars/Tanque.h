#pragma once
#include "Vector2D.h"
class Tanque
{
public:
	float tamaño;
	Vector2D posicion;
	Vector2D velocidad;

	Tanque(void);
	~Tanque(void);
	void dibuja(void);
	void mueve(float t);
};

