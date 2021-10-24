
#ifndef __truck__
#define __truck__
//------------------------------------------------------------------------------
// bus.h - содержит описание автобуса  и его интерфейса
//------------------------------------------------------------------------------
#include <fstream>
using namespace std;

# include "rnd.h"
#include "car.h"
// автобус
class truck: public car {
private:
    short lifting_capacity; // пасажировместимость
    // Ввод параметров автобуса из файла
public:
    virtual ~truck() = default;
    virtual void In( ifstream &ifst);

// Случайный ввод параметров автобуса
    virtual void InRnd() ;

// Вывод параметров автобуса в форматируемый поток
    virtual void Out( ofstream &ofst);

// Вычисление периметра автобуса
    virtual double Distance();
};


#endif



