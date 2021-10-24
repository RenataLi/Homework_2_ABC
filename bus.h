
#ifndef __bus__
#define __bus__
//------------------------------------------------------------------------------
// bus.h - содержит описание автобуса  и его интерфейса
//------------------------------------------------------------------------------
#include <fstream>
using namespace std;

# include "rnd.h"
#include "car.h"
// автобус
class bus:public car {
private:
    short passenger_capacity; // пасажировместимость
    // Ввод параметров автобуса из файла
public:
    virtual ~bus() = default;
    virtual void In( ifstream &ifst);

// Случайный ввод параметров автобуса
   virtual void InRnd() ;

// Вывод параметров автобуса в форматируемый поток
   virtual void Out( ofstream &ofst);

// Вычисление периметра автобуса
   virtual double Distance();
};


#endif



