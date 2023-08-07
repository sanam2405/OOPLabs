#include<iostream>
using namespace std;

class Employee
{
    int basic_sal;

    public:
    void get_sal()
    {
        int x;
        cout << "Enter the sal : ";
        cin >> x;
        basic_sal = x;
    }

    friend class Manager;
    friend class Clerk;
};

class Manager : public Employee
{
    int totalsal;
    public:
    void total_sal()
    {
        totalsal = 1.40* basic_sal; 
    }
    void show()
    {
        cout << "Total salary = " << totalsal << "\n";
    }
};

class Clerk : public Employee
{
    int totalsal;
    public:
    void total_sal()
    {
        totalsal = 1.30* basic_sal; 
    }
    double show()
    {
        return totalsal;
    }
};


int main(){
    
    Manager obm[10];
    Clerk obc[30];
    int totalexp = 0;
    for(int i = 0; i < 10; i++)
    {
        cout << "Enter the basic pay of the " << i+1 << "manager : ";
        obm[i].get_sal();
        obm[i].total_sal();
        totalexp += obm[i].show();
    }
    
    return 0;
}