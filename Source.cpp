//
// Created by Pisbi on 29/05/2024.
//
#include <iostream>
#include "Personaje.h"
#include "EnemigoFinal.h"
#include <algorithm>
#include <ctime> //Para la aleatoriedad

int main() {

    srand(time(0)); // Para generar numeros aleatorios

    //Enemigos
    Personaje Enemigo1(50, "Enemigo1", 50, rand() % 10, rand() % 5);
    Personaje Enemigo2(60, "Enemigo2", 65, rand() % 10, rand() % 5);
    Personaje Enemigo3(70, "Enemigo3", 78, rand() % 10, rand() % 5);
    Personaje Enemigo4(80, "Enemigo4", 90, rand() % 10, rand() % 5);

    //Jugador
    Personaje Player(50, "Player", 100, 0, 0);

    //Boss Final
    EnemigoFinal FinalBoss(1000, "Final Boss", 500, 200, 1000, 800, rand() % 10, rand() % 10);


    //Para asegurar que el player y el enemigo no coincidan
    while ((Enemigo1.getPositionX() == Player.getPositionX() && Enemigo1.getPositionY() == Player.getPositionY()) ||
           (Enemigo2.getPositionX() == Player.getPositionX() && Enemigo2.getPositionY() == Player.getPositionY()) ||
           (Enemigo3.getPositionX() == Player.getPositionX() && Enemigo3.getPositionY() == Player.getPositionY()) ||
           (Enemigo4.getPositionX() == Player.getPositionX() && Enemigo4.getPositionY() == Player.getPositionY())) {
    // Actualiza la posición del jugador
    Player.setPositionX(rand() % 10);
    Player.setPositionY(rand() % 5);
}

    std::cout << "__________________" << std::endl;
    Enemigo1.printStats();
    Enemigo2.printStats();
    Enemigo3.printStats();
    Enemigo4.printStats();
    Player.printStats();
    std::cout << "__________________" << std::endl;
	FinalBoss.printAllStats();
    std::cout << "__________________" << std::endl;
    const int fila = 10;
    const int columna = 5;
    char mapa[fila][columna];

    /**
     * Función que se utiliza para asignar un valor a una secuencia de elementos en un array.
     * *tablero: Es el puntero al primer elemento del array bidimensional.
     * filas * columnas: número total de elementos del array bidimensional.
     * std::fill_n(*tablero, filas * columnas, '.'); inicializa todos los elementos del array mapa con el carácter '.'
     */
    std::fill_n(*mapa, fila * columna, '.');

    mapa[Enemigo1.getPositionY()][Enemigo1.getPositionX()] = 'E';
    mapa[Enemigo2.getPositionY()][Enemigo2.getPositionX()] = 'E';
    mapa[Enemigo3.getPositionY()][Enemigo3.getPositionX()] = 'E';
    mapa[Enemigo4.getPositionY()][Enemigo4.getPositionX()] = 'E';
    mapa[Player.getPositionY()][Player.getPositionX()] = 'P';
    mapa[fila-1][columna-1] = 'B';

    std::cout << "--INICIO--" << std::endl;
    for (int i = 0; i < fila; ++i) {
        for (int j = 0; j < columna; ++j) {
            std::cout << mapa[i][j] << ' ';
        }
        std::cout << '\n';
    }
    std::cout << "--FINAL--" << std::endl;
	return 0;
}