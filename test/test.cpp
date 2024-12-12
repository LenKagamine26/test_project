#include <iostream>
#include <cmath>

using namespace std;

class complex {
private:
    double re, im; 

public:
    complex(double r = 0, double i = 0) : re(r), im(i) {}; 
    void display() { cout << re << ", " << im << endl; } 
    
    bool operator<(const complex& other) const {
        return hypot(re, im) < hypot(other.re, other.im); // Сравниваем модули комплексных чисел
    }
};

int main(){
    // Пишу дичь
    complex a(1.2, 3.0);
    complex b(5.6, 7.8);
    complex c;
    if (a < b) {
        a.display();
    }
    //пупазалупа
    else {
        b.display();
    }
    system("pause");
}
