#include<iostream>
using namespace std;

void sum(int a = 0, int b = 0, int c = 0)
{
    cout <<  a+b+c << " ";
}


void sum(int a , int b, int c = 0)
{
    cout <<  a+b+c << " ";
}

void sum(int a, int b = 0, int c = 0)
{
    cout <<  a+b+c << " ";
}


int main()
{
    sum();
    sum(1,2);
    sum(1);
    return 0;
}