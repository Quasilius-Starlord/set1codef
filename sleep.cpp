#include<iostream>
#include<iomanip>

class sleep
{
private:
    int t;
    long long int* data;
public:
    sleep();
    ~sleep();
    void calc();
}; 



int main()
{
    sleep alarm;
    alarm.calc();
    return 0;
}

sleep::sleep()
{
    std::cin >> t;
    data = new long long int[4*t];
    for (int i = 0; i < 4*t; i++)
    {
        std::cin >> data[i];
    }
}

sleep::~sleep()
{
}

void sleep::calc()
{

    long double a,b,c,d,o=-1;
    long long int term=0;
    long double trip=0;
    for (int i = 0; i < t; i++)
    {
        a=data[4*i];
        b=data[4*i+1];
        c=data[4*i+2];
        d=data[4*i+3];
        if(b>=a)
        {
            std::cout << std::fixed;
            std::cout << std::setprecision(0);
            std::cout << b << "\n";
        }else if(d>=c)
        {
            o=-1;
            std::cout << o <<"\n";
        }else
        {
            trip=(a-b)/(c-d);
            term=trip;
            if(trip>term)
            {
                term++;
            }
            o=b+(c*term);
            std::cout << std::fixed;
            std::cout << std::setprecision(0);
            std::cout << o << "\n";
        }
    }
}