/*WAP to overload following operators for class distance, which stores the
distance in feet and inches.
Binary + to

-add two objects (D3=D1+D2)
Operator +(d1,d2);
D1.operator +(d2);
-Add an object to an integer, where the integer should be added
to the inches value ( D2=4+D1)

Unary -*/
#include<iostream>
using namespace std;

class DB{
    int feet;
    int inches;
    public:
        DB(){}
        DB(int x,int y){
            feet=x;
            inches=y;
        }
        void get(){
            cout<<"Inches= "<<inches<<endl;
            cout<<"Feet= "<<feet<<endl;
        }
        DB operator +(DB &d2){
            DB d;
            d.feet=feet+d2.feet+((inches+d2.inches)/12);
            d.inches=(inches+d2.inches)%12;
            return d;
        }

        void operator -(){
            feet=-feet;
            inches=-inches;
        }

        friend DB &operator+(int,DB &);
};

DB &operator+(int n,DB &d){
    d.inches=n+d.inches;
    d.feet=d.feet+(d.inches/12);
    d.inches=d.inches%12;
    return d;
}

int main(){
    DB d1(10,26),d2(10,50),d3,d4;
    d3=d2+d1;
    d3.get();
    -d1;
    d1.get();
    d4=6+d2;
    d4.get();
    return 0;
}