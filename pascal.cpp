#include<iostream>
using namespace std;
 class PascalTriangle
 {
        int n;
        public:
        void input()
        {
            cout<<"Enter the number of rows for Pascal's Triangle: ";
            cin>>n;
        }
        void display()
        {
            for(int i=0;i<n;i++)
            {
                int val=1;
                for(int j=0;j<=i;j++)
                {
                    cout<<val<<" ";
                    val=val*(i-j)/(j+1);
                }
                cout<<endl;
            }
        }
 };
    int main()
    {
    int n;
    PascalTriangle p;
    p.input();
    p.display();
    return 0;
 }  