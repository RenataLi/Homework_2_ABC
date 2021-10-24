//------------------------------------------------------------------------------
// shape.cpp - содержит процедуры связанные с обработкой обобщенной фигуры
// и создания произвольной фигуры
//------------------------------------------------------------------------------

#include "bus.h"
#include "automobile.h"
#include "truck.h"

//------------------------------------------------------------------------------
Random car::rnd20(1, 20);
Random car::rnd3(1,3);
Random car::rnd50(1,50);
Random car::rnd200(1,200);
Random car::rnd5000(1,5000);
Random car::rnd30(1,30);

//------------------------------------------------------------------------------
// Ввод параметров обобщенной машины из файла
car* car::StaticIn(ifstream &ifst) {
    int k;
    ifst >> k;
    car* c = nullptr;
    switch(k) {
        case 1:
            c = new truck;
            break;
        case 2:
            c = new bus;
            break;
        case 3:
            c = new automobile;
            break;
    }
    c->In(ifst);
    return c;
}
// Случайный ввод обобщенной машины
car *car::StaticInRnd() {
    auto k = rnd3.Get();
    car* c = nullptr;
    switch(k) {
        case 1:
            c = new truck;
            break;
        case 2:
            c = new bus;
            break;
        case 3:
            c = new automobile;
            break;
    }
    c->InRnd();
    return c;
}
