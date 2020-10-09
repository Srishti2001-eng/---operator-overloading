#include<iostream>
using namespace std;
class Time 
{
    int hr, min, sec;
    public:
    
    Time()
    {
        hr=0, min=0; sec=0;
    }
    Time(int h, int m, int s)
    {
        hr=h, min=m; sec=s;
    }

    Time operator++();
    Time operator++(int);

    Time operator--();
    Time operator--(int);

    

    void show()
    {
        cout<< hr<< ":"<< min<< ":"<< sec;
        cout<<"\n";
    }
};

Time Time:: operator++()
{
    ++hr;
    ++min;
    ++sec;
    return *this;
}

Time Time:: operator--()
{
    --hr;
    --min;
    --sec;
    return *this;
}

Time Time::operator++(int)
{
    Time t;
    t.hr=hr++;
    t.min=min++;
    t.sec=sec++;
    return t;
}
Time Time::operator--(int)
{
    Time t;
    t.hr=hr--;
    t.min=min--;
    t.sec=sec--;
    return t;
}





int main()
{
    Time t1(3,10,30),t2(5,30,20),t;
    t1++;
    t=t2++;
    t1.show();   
    t2.show();
    t.show();
    t=--t1;
    t.show();
    t1--;
    t=t2--;
    t1.show();   
    t2.show();
    t.show();
    return 0;
}






