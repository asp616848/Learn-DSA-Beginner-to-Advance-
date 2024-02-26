#include <iostream>
using namespace std;

class Cuboid {
    public:
        int length,width,height;
        Cuboid() {}
        Cuboid(int len, int wid, int hei): length(len),width(wid),height(hei) {}
        void display()
        {
            cout<<"The Length, Breadth, Height of a cuboid are"<<endl;
            cout<<length<<" "<<width<<" "<<height<<endl;
        }
};

class CuboidVol:public Cuboid{
    public:
        void read_input()
        {
            length = 0; width = 0; height = 0;
            cout<<"Enter the value of Lenght, Width, Height between 0 to 100"<<endl;
            if(length>=0 && length<=100 || width>=0 && width<=100 || height>=0 && height<=1000)
            {
                cin>>length>>width>>height;
            }
            else
            {
                cout<<"Enter the values within the Range"<<endl;
            }
        }
        void display()
        {
            Cuboid::display();
            cout<<length*width*height<<endl;
        }
};


int main() 
{
    int n;
    cout<<"Enter the number of cases "<<endl;
    cin>>n;
    CuboidVol c[n];
    for (int i = 0; i < n; i++)
    {
        c[i].read_input();
        c[i].display();
    }
    return 0;
}