#include<iostream>
#include<string>

using namespace std;

class Stdent{
    int ROLLNO;
    string Name;
    string Address;
    int Marks;
    public:
    void getdata();
    void display();
};

void Stdent::getdata(){
    cout<<"Enter Roll No : ";
    cin>>ROLLNO;
    cout<<"Enter Name : ";
    cin>>Name;
    cout<<"Enter Address : ";
    cin>>Address;
    cout<<"Enter Marks : ";
    cin>>Marks;
    cout<<endl;
}

void Stdent::display(){
    cout<<"Roll No : "<<ROLLNO<<endl;
    cout<<"Name : "<<Name<<endl;
    cout<<"Address : "<<Address<<endl;
    cout<<"Marks : "<<Marks<<endl;
    cout<<endl;
}


int main(){
    Stdent s1;
    s1.getdata();
    s1.display();
    
    return 0;
}