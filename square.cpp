#include<iostream>
#include <cmath>

class database
{
private:
    int k;
    int *num;

public:
    database();
    void reed();
};

int maxima(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    database square;
    square.reed();
}

database::database()
{
    std::cin >> k;
    num = new int[k*4];
    for (int i = 0; i < k*4; i++)
    {
       std::cin >> num[i];
    }
    
}

void database::reed()
{
    int a=0;
    int b1,b2;
    int index=0;
    for(int i = 0; i < k; i++)
    {
        b1=maxima(num[i*4 + 0],num[i*4 + 1]);
        b2=maxima(num[i*4 + 2],num[i*4 + 3]);

        if(b1==b2)
        {
            if(b1==num[i*4 + 0])
            {
                b1=num[i*4 + 0];
                a+=num[i*4 + 1];
            }else
            {
                b1=num[i*4 + 1];
                a+=num[i*4 + 0];
            }

            if(b2==num[i*4 + 2])
            {
                b1=num[i*4 + 2];
                a+=num[i*4 + 3];
            }else
            {
                b1=num[i*4 + 3];
                a+=num[i*4 + 2];
            }

            if(b1==a)
            {
                std::cout << "YES\n";
            }else
            {
                std::cout << "NO\n";
            }
            a=0;
            
        }else
        {
            std::cout << "NO\n";
        }
        
    }
            
    
}
