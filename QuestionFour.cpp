#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double R = 0.0, double I = 0.0) {
        real = R;
        imaginary = I;
    }

    Complex Add(const Complex& obj) {
        double Sumreal = real + obj.real;
        double Sumimaginary = imaginary + obj.imaginary;
        return Complex(Sumreal, Sumimaginary);
    }

    void display() {
        cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    Complex num1(2.5, 3.7);
    Complex num2(1.8, 2.1);

    Complex sum = num1.Add(num2);

    cout << "First complex number: ";
    num1.display();

    cout << "Second complex number: ";
    num2.display();

    cout << "Sum of the two complex numbers: ";
    sum.display();

    return 0;
}
