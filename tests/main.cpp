#include <iostream>
#include <math.h>
#include<math.h>

bool check_polindrom(std::string word)
{
    int len = word.length();
    for(int i = 0; i < len/2; ++i)
    {
        if(word[i] != word[len-i-1])
        {
            return false;
        }
    }
    return true;
}
int main() {
    //Вывести на одной строке числа 1, 13 и 49 с одним пробелом между ними.1
    std::cout << "1 13 49" << std::endl;
    //Вывести на одной строке числа 1, 13 и 49 с заданным символом между ними.2
    std::cout<<"Enter char:";
    char b;
    std::cin>>b;
    std::cout<<"1"<<b<<"13"<<b<<"49"<<std::endl;
    // вывода на экран в одну строку трех любых чисел с двумя пробелами между ними.3
    int x1;
    std::cout<<"Enter x1:";
    std::cin>>x1;
    int y;
    std::cout<<"Enter y:";
    std::cin>>y;
    int z;
    std::cout<<"Enter z:";
    std::cin>>z;
    std::cout<< x1 << "  " << y << "  " << z << std::endl;
    //4.1.Вычисления значения функции x=12a^2 + 7a - 12
    int a2;
    std::cout<<"Enter int:";
    std::cin>>a2;
    int x2 = 12*pow(a2,2) + 7*a2 - 12;
    std::cout<<x2;
    //4.2 Вычисления значения функции y=3x^3 + 4x^2 - 11x + 1
    int x3;
    std::cout<<"Enter int:";
    std::cin>>x3;
    int y3 = 3*pow(x3,3) + 4*pow(x3,2) + 1;
    std::cout<<y3<<std::endl;
    //1.Вывести на экран плотность материала
    int V;// V - объем
    std::cout<<"Enter V:";
    std::cin>>V;
    int m;// m - масса
    std::cout<<"Enter m:";
    std::cin>>m;
    double p = (double)m/V;// p - плотность
    std::cout<<p << std::endl;
    //2. Решение линейного уравнения при y=0 (ax+b=0)
    int a;//a<>0
    std::cout<<"Enter a:";
    std::cin>>a;
    //double b;
    std::cout<<"Enter b:";
    std::cin>>b;
   double x = double (-b)/a;
    std::cout<<x << std::endl;
    //3. Расстояние между двумя точками.
    int y1,y2;
    std::cout<<"Enter x1:";
    std::cin>>x1;
    std::cout<<"Enter y1:";
    std::cin>>y1;
    std::cout<<"Enter x2:";
    std::cin>>x2;
    std::cout<<"Enter y2:";
    std::cin>>y2;
    double l=sqrt((double)(x2-x1)*(x2-x1)+(double)(y2-y1)*(y2-y1));
    std::cout<<l<< std::endl;
    //4.Даны основания и высота равнобедренной трапеции. Найти периметр трапеции.
    int c,h;
    std::cout<<"Enter a:";
    std::cin>>a;
    std::cout<<"Enter b:";
    std::cin>>b;
    std::cout<<"Enter h:";
    std::cin>>h;
    c=(h*(a+b)/2);
    std::cout<<c<< std::endl;
    //5.Найти площадь кольца по заданным внешнему и внутреннему радиусам. Данные вводятся с клавиатуры.
    int R, r;
    std::cout<<"Enter R:";
    std::cin>>R;
    std::cout<<"Enter r:";
    std::cin>>r;
    double S=M_PI*(pow(R,2)+pow(r,2));
    std::cout<<S<< std::endl;
    //6.Дана длина ребра куба. Найти объем куба и площадь его боковой поверхности. Данные вводятся с клавиатуры.
    std::cout<<"Enter a:";
    std::cin>>a;
    V=pow(a,3);
    S=6*pow(a,2);
    std::cout<<"S="<<S<< std::endl;
    std::cout<<"V="<<V<< std::endl;
   //7.Дана сторона квадрата. Найти его периметр.
   int P;
    std::cout<<"Enter a:";
    std::cin>>a;
    P=4*a;
    std::cout<<"P="<<P<< std::endl;
    //8.Дан радиус окружности. Найти ее диаметр.
    int D;
    std::cout<<"Enter r:";
    std::cin>>r;
    D=2*r;
    std::cout<<"D="<<D<< std::endl;
    //9.Имя студента вводится с клавиатуры, а на экран выводится приветсвие Hello, %name%! My name is C++..
    std::cout<<"Введите имя"<<std::endl;
    std::string myName;
    std::cin>> myName;
    std::cout<<"Hello, "<<myName<< "! "<<"My name is C++"<<std::endl;

        std::string str;
        std::cout << "Enter the word: ";
        std::cin >> str;
        if(check_polindrom(str))
        {
            std::cout << "This is polindrom!";
        }
        else {
            std::cout << "Sorry, this is not polindrom!";
        }
            return 0;
        }