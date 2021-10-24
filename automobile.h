
#ifndef __automobile__
#define __automobile__
//------------------------------------------------------------------------------
// automobile.h - содержит описание автомобиля
//------------------------------------------------------------------------------
#include <fstream>
using namespace std;
# include "rnd.h"
#include "car.h"
//------------------------------------------------------------------------------
// автомобиль
class automobile: public car {
private:
    short max_speed; // параметр автомобиля
public:
    virtual ~automobile()= default;
    virtual void In( ifstream &ifst);

// Случайный ввод параметров автомобиля
    virtual void InRnd();

// Вывод параметров автомобиля в форматируемый поток
   virtual void Out( ofstream &ofst);

// Вычисление максимального расстояния автомобиля
    virtual double Distance();

};
// Ввод параметров автомобиля из файла


#endif
#ifndef HOMEWORK1_AUTOMOBILE_H
#define HOMEWORK1_AUTOMOBILE_H
#endif //HOMEWORK1_AUTOMOBILE_H

