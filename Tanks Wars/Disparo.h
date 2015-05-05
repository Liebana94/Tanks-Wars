#pragma once
#include "Vector2D.h"
class Disparo
{
public:
	float radio;
	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;

	void dibuja(void);
	void mueve(float t);
	Disparo(void);
	~Disparo(void);
};

