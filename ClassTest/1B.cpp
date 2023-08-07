#include<iostream>
using namespace std;

int& max(int &a, int &b)
{
    if(a>b)
    return a;
    else
    return b;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a=40, b=60;
    max(a,b)=100;
    cout<<"a="<<a<<"b="<<b;
    swap(&a, &b);
    max(a,b)=100;
    cout<<"a="<<a<<"b="<<b;
    return 0;
}