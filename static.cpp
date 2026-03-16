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
    void display()
    {
        cout<<"date is="<<day<<"/"<< month<<"/"<<year<<endl;
        cout<<"no of objects created is="<<count<<endl;
    }
};
int MyDate::count=0;
int main(){
    MyDate d1;
    d1.display();
    MyDate d2(1,2,2001);
    d2.display();
    d1.display();
}