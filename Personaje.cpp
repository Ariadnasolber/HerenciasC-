//
// Created by Pisbi on 29/05/2024.
//

#pragma once
#include "Personaje.h"
#include  <iostream>
	//constructor
Personaje::Personaje(int pHp, std::string pName, int pAttack, int pPositionX, int pPositionY) {
	hp = pHp;
	name = pName;
	attack = pAttack;
    positionX = pPositionX;
	positionY = pPositionY;

	}

	//getters
	int Personaje::getHp() {
		return hp;
	}

	std::string Personaje::getName() {
		return name;
	}

	int Personaje::getAttack() {
		return attack;
	}


    int Personaje::getPositionY() {
        return positionY;
    }

    int Personaje::getPositionX() {
        return positionX;
    }


	//setters

	void Personaje::setHp(int php) {
		hp = php;
	}

	void Personaje::setName(std::string pname) {
		name = pname;
	}

	void Personaje::setAttack(int pattack) {
		attack = pattack;
	}

    void Personaje::setPositionX(int pPositionX)
    {
        positionX = pPositionX;
    }

    void Personaje::setPositionY(int pPositionY)
    {
        positionY = pPositionY;
    }


	//Metodos propios

	void Personaje::printStats() {
        std::cout << "NOMBRE: " << getName() << std::endl;
	    std::cout << "HP: " << getHp() << std::endl;
	    std::cout << "BASE ATTACK: " << getAttack() << std::endl;
 	}