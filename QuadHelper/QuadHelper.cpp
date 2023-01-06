#include <iostream>
#include <math.h>

using namespace std;

float a, b, c, discriminant;

//initializing functions(c++ needs us to do that before "main" function)
void GettingInput();
void FuncWrite();
void ZerosFinding();
void QuadProperties();
void LinearWrite();
void LinearX();
void LinearProperties();
void SomeSpace();
int main()
{
    setlocale(LC_ALL, "ukr");
    GettingInput();
    SomeSpace();
    //checking the type of function
    if (a == 0 && b == 0) {
        //still function
        cout << "Функцiя завжди набуває значення " << c;
        SomeSpace(); //spacing
    }
    else if (a == 0) {
        //linear function
        cout << "Лiнiйна функцiя має вигляд:\ny = ";
        LinearWrite();
        SomeSpace(); //spacing
        LinearX();
        SomeSpace(); //spacing
        LinearProperties();
        SomeSpace(); //spacing
    }
    else {
        //quadratic function
        cout << "Квадратична функцiя має вигляд:\ny = ";
        FuncWrite();
        SomeSpace(); //spacing
        ZerosFinding();
        SomeSpace(); //spacing
        QuadProperties();
        SomeSpace(); //spacing
    }
  //the end
    cout << endl;
    system("pause");
}

void GettingInput() {
    cout << "Введiть а\n";
    cin >> a;
    cout << "Введiть b\n";
    cin >> b;
    cout << "Введiть c\n";
    cin >> c;
}
void FuncWrite() {
    //a write
    if (a == 1) {
        cout << "x^2";
    }
    else if (a != 0) {
        cout << a << "x^2 ";
    }
    //b write
    if (b < 0) {
        cout << "- " << -b<<"x ";
    }
    else if (b > 0) {
        cout << "+ " << b<< "x ";
    }
    //c write
    if (c < 0) {
        cout << "- " << -c;
    }
    else if (c > 0) {
        cout << "+ " << c;
    }
}
void LinearWrite() {
    cout << b << "x ";
    if (c == 0) {
        cout << endl;
    }
    else if (c < 0) {
        cout << "- " << -c;
    }
    else {
        cout << "+ " << c;
    }
}
void LinearX() {
    cout << "Нуль функцiї:\n";
    LinearWrite();
    cout << " = 0\n";
    cout << "x = " << -c / b;
}
void ZerosFinding() {
    cout << "Нулi функцiї:\n";
    FuncWrite();
    cout << " = 0\n D = b^2 - 4ac = " << powf(b, 2);
    if (a < 0 || c < 0) {
        cout << " + " << - 4 * a * c;
    }
    else {
        cout << " - " << - (-4 * a * c);
    }
    discriminant = powf(b, 2) + (-4 * a * c);
    cout << " = " << discriminant << endl;
    if (discriminant > 0) {
        cout << "Функцiя має два нулi, а саме:\n" << "x1 = " << (-b + sqrtf(discriminant)) / (2 * a) << endl;
        cout << "x2 = " << (-b - sqrtf(discriminant)) / (2 * a);
    }
    else if (discriminant == 0) {
        cout << "Функцiя має один нуль, а саме:\n" << "x = " << -b / (2 * a);
    }
    else {
        cout << "Оскiльки D < 0, то функцiя нулiв не має";
    }
}
void QuadProperties() {
    //top of parabola
    float x0 = -b / 2 * a;
    if (x0 != 0) {
    cout << "Вершина параболи:\nx0 = " << x0 << "\ny0 = " << a * powf(x0, 2) + b * x0 + c;
    }
    else {
        cout << "Вершина параболи:\nx0 = " << -x0 << "\ny0 = " << a * powf(x0, 2) + b * x0 + c;
    }
    //parabola's path
    if (a < 0){
        cout << "\nПарабола напрямлена вiтками вниз\n\t\t\t | \n\t\t\t |\n\t\t\t\\ /";
    }
    else {
        cout << "\nПарабола напрямлена вiтками вгору\n\t\t\t/ \\\n\t\t\t | \n\t\t\t |";
    }
}
void LinearProperties() {
    //path of linear function
    if (b > 0) {
        cout << "Функцiя зростаюча";
    }
    else if(b < 0) {
        cout << "Функцiя спадна";
    }
}
void SomeSpace() {
    cout << endl;
    for (unsigned short int i = 0; i <= 20; i++) {
        cout << " - ";
    }
    cout << endl;
}