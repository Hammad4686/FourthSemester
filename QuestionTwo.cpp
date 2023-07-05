#include<iostream>
#include<conio.h>
using namespace std;
class teacher{
private:
string name,address;
int age ;
public:
void input(){
    cout<<"enter your name ";
    cin>>name;
    cout<<"enter you address ";
    cin>>address;
    cout<<"enter your age ";
    cin>>age;

}

void display(){
    cout<<"you have entered name "<<name<<endl;
    cout<<"you have entered address "<<address<<endl;
    cout<<"you have entered age "<<age<<endl;
}

};
class writer{
private:
string name,address;
int no_of_books ;

public:
void read(){
      cout<<"enter name of Author  ";
    cin>>name;
    cout<<"enter you address of Author ";
    cin>>address;
    cout<<"enter no of books ";
    cin>>no_of_books;


}
void print(){
    cout<<"Author name is "<<name<<endl;
    cout<<"Author address is "<<address<<endl;
    cout<<"No of Books are  "<<no_of_books<<endl;

}


};
class scholar:public teacher,public writer
{


};


int main(){
   scholar obj;
   obj.input();
   obj.read();
   obj.display();
   obj.print();
}