
#ifndef __container__
#define __container__

//------------------------------------------------------------------------------
// container.h - содержит тип данных,
// представляющий простейший контейнер
//------------------------------------------------------------------------------
#include <fstream>
using namespace std;
#include "car.h"

//------------------------------------------------------------------------------
// Простейший контейнер на основе одномерного массива
class container {
public:
    container(int c);
    ~container();
// Ввод содержимого контейнера из указанного потока
    void In(ifstream &ifst);

// Случайный ввод содержимого контейнера
    void InRnd(int size);

// Вывод содержимого контейнера в указанный поток
    void Out(ofstream &ofst);

// Вычисление суммы периметров всех фигур в контейнере
    void Sort();
private:
    void Clear();    // Очистка контейнера от данных
    int len; // текущая длина
    car** storage;
    int size;
};



#endif

#ifndef HOMEWORK1_CONTAINER_H
#define HOMEWORK1_CONTAINER_H

#endif

