
//------------------------------------------------------------------------------
// bus.cpp - содержит функции обработки автобуса
//------------------------------------------------------------------------------
#include "bus.h"
//------------------------------------------------------------------------------
// Ввод параметров автобусе из потока
void bus::In(ifstream &ifst) {
    ifst >> passenger_capacity;
    ifst>>fuel_capasity;
    ifst>>fuel_consumption;

}

// Случайный ввод параметров автобуса
void bus::InRnd() {
    passenger_capacity = rnd30.Get();
    fuel_consumption = rnd50.Get();
    fuel_capasity = rnd20.Get();
}

//------------------------------------------------------------------------------
// Вывод параметров автобуса в поток
void bus::Out( ofstream &ofst) {
    ofst << "It is Bus: passenger capacity = "
         << passenger_capacity
         <<", fuel capasity = "
         <<fuel_capasity
         <<", fuel consumption = "
         <<fuel_consumption
         << ". Distance = " << Distance() << "\n";
}

//------------------------------------------------------------------------------
// Вычисление максимального расстояния автобуса
double bus::Distance() {
    return double(fuel_capasity/fuel_consumption);
}





