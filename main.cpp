#include<iostream>

using namespace std;

struct MyStruct{
    double a;
    double b;
    double c;
};

int main(){

    MyStruct* ptr = nullptr;
    struct MyStruct estructura{0.111, 11.222, 222.333};

    ptr = &estructura;

    cout << *((double*)ptr) << endl;
    cout << "Direccion: " << (double*)ptr << endl;
    cout << *((double*)ptr+1) << endl;
    cout << "Direccion: " << (double*)ptr+1 << endl;
    cout << *((double*)ptr+2) << endl;
    cout << "Direccion: " << (double*)ptr+2 << endl;


    return 0;

}