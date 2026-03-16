//program to count no of objects created
#include<iostream>
using namespace std;
class MyDate
{
    int day, month,year;
public:
    static int count;
    public:
    MyDate()
    {
        cout<<"no arge constructor called\n";
        day=27;
        month=2;
        year=2026;
        count++;
    }    
    MyDate(int d,int m,int y)
    {
        cout<<"parameterized constructor called\n";
        day=d;
        month=m;
        year=y;
        count++;
    }
    void display()const
    {
        cout<<"date is="<<day<<"/"<< month<<"/"<<year<<endl;
    }
};
int MyDate::count;
int main()
{
    MyDate d1;
    cout<<"no of objects created is="<<MyDate::count<<endl;

    MyDate d2(1,1,2001);
    cout<<"no of objects created is="<<MyDate::count<<endl;
    cout<<"no of objects created is="<<d1.count<<endl;


}