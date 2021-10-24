
//------------------------------------------------------------------------------
// container_Constr.cpp - содержит функции обработки контейнера
//------------------------------------------------------------------------------

#include "container.h"
using namespace std;
//------------------------------------------------------------------------------
// Конструктор контейнера
container::container(int c): len{0}, size{c} {
    storage = new car*[c];
}

//------------------------------------------------------------------------------
// Деструктор контейнера
container::~container() {
    Clear();
    delete[] storage;
}

//---------------------------------------ф---------------------------------------
// Очистка контейнера от элементов (освобождение памяти)
void container::Clear() {
    for(int i = 0; i < len; i++) {
        delete storage[i];
    }
    len = 0;
}

//------------------------------------------------------------------------------
// Ввод содержимого контейнера из указанного потока
void container::In(ifstream &ifst) {
    while(!ifst.eof()) {
        if((storage[len] = car::StaticIn(ifst)) != 0) {
            len++;
        }
    }
}

//------------------------------------------------------------------------------
// Случайный ввод содержимого контейнера
void container::InRnd(int s) {
    if(s > size) {
        s = size;
    }
    while(len < s) {
        if((storage[len] = car::StaticInRnd()) != nullptr) {
            len++;
        }
    }
}

//------------------------------------------------------------------------------
// Вывод содержимого контейнера в указанный поток
void container::Out(ofstream &ofst) {
    ofst << "Container contains " << len << " elements.\n";
    for(int i = 0; i < len; i++) {
        ofst << i << ": ";
        storage[i]->Out(ofst);
    }
}

void container::Sort(){
    int size = len;
    car* temp; // временная переменная для обмена элементов местами
    // Сортировка массива пузырьком
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if ((storage[j])->Distance()> storage[j+1]->Distance()) {
                // меняем элементы местами
                temp = storage[j];
                storage[j] = storage[j + 1];
                storage[j + 1] = temp;
            }
        }
    }
}



