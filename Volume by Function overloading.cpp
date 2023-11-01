#include<iostream>
#include<cmath>
using namespace std;
double vol(double side)
{
    return (side*side*side);
}
double vol(double l,double b,double h)
{
    return (l*b*h);
}
double vol(double r, double h)
{
    return (M_PI*r*r*h);
}
int main()
{
    int value;
    double side,l,b,h,r;
    cout<<"Enter the value for object:\n";
    cout<<"1.Cube\n";
    cout<<"2.Cuboid\n";
    cout<<"3.Cylinder\n";
    cin>>value;
    switch(value)
    {
        case 1:
        cout<<"Enter the value of side: \n";
        cin>>side;
        cout<<"The volume of cube is :"<<vol(side);
        break;
        
        case 2:
        
        cout<<"Enter the value of l,b,h: \n";
        cin>>l>>b>>h;
        cout<<"The volume of cuboid is :"<<vol(l,b,h);
        break;
        
        case 3:
        
        cout<<"Enter the value of r,h: \n";
        cin>>r>>h;
        cout<<"The volume of cylinder is :"<<vol(r,h);
        break;
        
        default:
        cout<<"Error\n";
    }
    return 0;
}
