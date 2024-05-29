//
// Created by Pisbi on 29/05/2024.
//
#pragma once
#include  <iostream>
class Personaje
{

private:
	int hp;
	std::string name;
	int attack;
    int positionX;
	int positionY;

public:
	//constructor
	Personaje(int pHp, std::string pName, int pAttack, int positionX, int positionY);

    //getters
	int getHp();
	std::string getName();
	int getAttack();
    int getPositionX();
	int getPositionY();

	//setters
	void setHp(int php);
	void setName(std::string pname);
	void setAttack(int pattack);
    void setPositionX(int pPositionX);
	void setPositionY(int pPositionY);

	//metodos propios

	void printStats();

};

