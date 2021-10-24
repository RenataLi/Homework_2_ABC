
#ifndef __car__
#define __car__
//------------------------------------------------------------------------------
// car.h - содержит описание обобщающей геометрической фигуры,
//------------------------------------------------------------------------------

#include "rnd.h"
//------------------------------------------------------------------------------
// структура, обобщающая все имеющиеся машины
class car {
protected:
    int fuel_capasity;//емкость топливного бака
    double fuel_consumption;//расход топлива
    static Random rnd20;
    static Random rnd3;
    static Random rnd30;
    static Random rnd50;
    static Random rnd200;
    static Random rnd5000;
public:
    virtual ~car()  = default;
    // Ввод обобщенной фигуры
    static car *StaticIn(ifstream &ifdt);
    // Ввод обобщенной фигуры
    virtual void In(ifstream &ifdt) = 0;
    // Случайный ввод обобщенной машины
    static car *StaticInRnd();
    // Виртуальный метод ввода случайной фигуры
    virtual void InRnd() = 0;
    // Вывод обобщенной фигуры
    virtual void Out(ofstream &ofst) = 0;
    /*// Ввод обобщенной машины
    car *In(ifstream &ifdt);*/
    // Вычисление расстояния обобщенной машины
    virtual double Distance() = 0;
};



#endif

#ifndef HOMEWORK1_CAR_H
#define HOMEWORK1_CAR_H

#endif

