
//------------------------------------------------------------------------------
// automobile.cpp - содержит функции обработки автомобиля
//------------------------------------------------------------------------------

#include "automobile.h"

//------------------------------------------------------------------------------
// Ввод параметров автомобиля из потока
void automobile::In(ifstream &ifst) {
    ifst >> max_speed;
    ifst>>fuel_capasity;
    ifst>>fuel_consumption;
}
void automobile::InRnd() {
    max_speed = rnd200.Get();
    fuel_consumption = rnd50.Get();
    fuel_capasity = rnd20.Get();
}
//------------------------------------------------------------------------------
// Вывод параметров автомобиля в поток
void automobile::Out( ofstream &ofst) {
    ofst << "It is Automobile: max speed = "
         << max_speed << ", fuel consumption = " << fuel_consumption
         << ", fuel capasity = " << fuel_capasity
         << ". Distance = " << Distance() << "\n";
}
//------------------------------------------------------------------------------
// Вычисление максимального расстояния
double automobile::Distance() {
    return double(fuel_capasity/fuel_consumption);
}


