#include<iostream>
#include<cmath>

class lecture
{
private:
    int t;
    int* data;

public:
    lecture();
    ~lecture();
    void calc();
};

int main()
{
    lecture poly;
    poly.calc();
    return 0;

}

lecture::lecture()
{
    std::cin >> t;
    data = new int[5*t];
    for (int i = 0; i < t; i++)
    {
        std::cin >> data[5*i] >> data[5*i+1] >> data[5*i+2] >> data[5*i+3] >> data[5*i+4];
    }
    
}

lecture::~lecture()
{
    delete[] data;
}

void lecture::calc()
{
    float a,b,c,d,k;
    float pen,pencil;
    int box;
    for (int i = 0; i < t; i++)
    {
        a=data[5*i];
        b=data[5*i + 1];
        c=data[5*i + 2];
        d=data[5*i + 3];
        box=data[5*i + 4];

        pen=a/c;
        pencil=(b/d);
        
        if(pen>floor(pen))
        {
            pen=floor(pen)+1;
        }

        if(pencil>floor(pencil))
        {
            pencil=floor(pencil)+1;
        }

        if((pen+pencil)>box)
        {
            k=-1;
            std::cout << k << "\n";
        }else
        {
            std::cout << pen << " " << pencil << "\n";
        }
    }
    
}