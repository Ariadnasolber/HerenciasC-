//
// Created by Pisbi on 29/05/2024.
//
#pragma once
#include "Personaje.h"
#include <iostream>

using namespace std;

class EnemigoFinal : public Personaje
{
private:
	int tactical;
	int ultimate;

public:

	EnemigoFinal(int pHp,
				 std::string pName,
				 int pAttack,
				 int pShield,
				 int pTacticalAb,
				 int pUltimate,
                 int pPositionX,
                 int pPositionY);

	//GETTERS AND SETTERS
	int getTacticalAb();
	int getUltimate();

	void setTacticalAb(int pTacticalAb);
	void setUltimate(int pUltimate);

	//METODOS PROPIOS
	void printAllStats();


};