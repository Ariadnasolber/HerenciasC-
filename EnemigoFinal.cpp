//
// Created by Pisbi on 29/05/2024.
//
#include "EnemigoFinal.h"


EnemigoFinal::EnemigoFinal(int pHp, std::string pName, int pAttack,int pPositionX,int pPositionY, int pDefense, int pTacticalAb, int pUltimate)
    : Personaje(pHp, pName, pAttack, pPositionX, pPositionY) {
        tactical = pTacticalAb;
        ultimate = pUltimate;
    }

//Getters
int EnemigoFinal::getTacticalAb() {
	return tactical;
}
int EnemigoFinal::getUltimate() {
	return ultimate;
}

//Setters
void EnemigoFinal::setTacticalAb(int pTacticalAb) {
    tactical = pTacticalAb;
}
void EnemigoFinal::setUltimate(int pUltimate) {
    ultimate = pUltimate;
}

//Constructor
void EnemigoFinal::printAllStats() {
	cout << "NOMBRE: " << getName() << endl;
	cout << "HP: " << getHp() << endl;
	cout << "BASE ATTACK: " << getAttack() << endl;
	cout << "TACTICAL ABILITY: " << getTacticalAb() << endl;
	cout << "ULTIMATE: " << getUltimate() << endl;
}