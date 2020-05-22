#include<iostream>
#include<Windows.h>


class set
{
private:
    long n;
    long* arr;
    long* b;
    long max;

public:
    set();
    void print(set &pro);
    void impliment(set &pro);
};

int main()
{
    set pro;
    pro.impliment(pro);
    pro.print(pro);
    return 0;
    
}


set::set()
{
    std::cin >> n;
    max=0;
    arr = new long[n];
    b=new long[n];
    for(int i=0;i<n;i++)
    {
        std::cin >> b[i];
    }
}

void set::print(set &pro)
{
    for(int i=0;i<n;i++)
    {
        std::cout << arr[i] <<" ";
    }
    std::cout << "\n";
    return;
}


void set::impliment(set &pro)
{
    for(int i=0;i<n;i++)
    {
        arr[i]=b[i]+max;
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return;
}