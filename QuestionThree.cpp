#include <iostream>
using namespace std;

class Shape {
public:
    virtual void Draw() {
        cout << "Shape Base Class" << endl;
    }
};

class Circle : public Shape {
public:
    void Draw(){
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void Draw(){
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    Shape* ptr , S;
    Circle C;
    Rectangle R;
    ptr = &S;
    ptr->Draw();
    ptr = &C;
    ptr->Draw(); 
    ptr = &R;
    ptr->Draw(); 
    return 0;
}
