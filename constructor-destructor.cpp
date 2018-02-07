/// Constructor Destructor

#include<iostream>
using namespace std;

class rectangle {
    int height;
    int width;
public:
    void set(int h, int w);
    int area();
    rectangle(int h, int w);
    ~rectangle();
};
int rectangle::area()
{
    return height*width;
}
rectangle::rectangle(int h, int w)
{
    height = h;
    width = w;
    cout<<"Constructor "<<area()<<endl;
}
rectangle::~rectangle()
{
    cout<<"Destructor "<<area()<<endl;
}
int main()
{
    rectangle obj(5,6),obj1(1,2);
    //cout<<"Area = "<<obj.area()<<endl;

    return 0;
}
