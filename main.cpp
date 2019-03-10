//incluindo bibliotecas
#include<iostream>
#include<stdlib.h>
using namespace std;

//class quadrado
class Quadrado{
private:
    float largo;
public:
    Quadrado(float);
    void perimetro();
    void area();
};

Quadrado::Quadrado(float _largo) {
    largo = _largo;
}
void Quadrado::perimetro() {
    float _perimetro;
    _perimetro = 4 * largo;
    cout << "O perímetro deste quadrado é: " << _perimetro << " metros" << endl;
}
void Quadrado::area() {
    float _area;
    _area = largo * largo;
    cout << "A área deste quadrado é: " << _area << " metros quadrados" << endl;
}

int main(){
    Quadrado Q1 = Quadrado(12);
    Q1.perimetro();
    Q1.area();
    return 0;
}