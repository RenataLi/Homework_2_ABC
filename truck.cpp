
//------------------------------------------------------------------------------
// truck.cpp - содержит функции обработки грузовика
//------------------------------------------------------------------------------

#include "truck.h"

//------------------------------------------------------------------------------
// Ввод параметров грузовика из потока
void truck::In( ifstream &ifst) {
    ifst >> lifting_capacity;
    ifst>>fuel_capasity;
    ifst>>fuel_consumption;

}

// Случайный ввод параметров грузовика
void truck::InRnd() {
    lifting_capacity = rnd5000.Get();
    fuel_consumption = rnd50.Get();
    fuel_capasity = rnd20.Get();
}

//------------------------------------------------------------------------------
// Вывод параметров грузовика в поток
void truck::Out( ofstream &ofst) {
    ofst << "It is Truck: lifling capacity = "
         << lifting_capacity
         <<", fuel capasity = "
         <<fuel_capasity
         <<", fuel consumption = "
         <<fuel_consumption
         << ". Distance = " << Distance() << "\n";
}

//------------------------------------------------------------------------------
// Вычисление максимального расстояния машины
double truck::Distance() {
    return double(fuel_capasity/fuel_consumption);
}


