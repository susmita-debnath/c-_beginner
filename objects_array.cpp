/// Array of objects
#include<iostream>
using namespace std;

class rectangle {
    int height;
    int width;
public:
    rectangle (int a, int b){height = a; width = b;}
    rectangle (){height = 3; width = 2;}
    int area(){return height*width;}

};

int main()
{
    rectangle obj[5] = {rectangle(1,2),rectangle(2,2),rectangle(3,2),rectangle(4,2),rectangle(5,2)};

    for ( int i = 0; i < 5; i++ ) {
        cout << i << " = " << obj[i].area() << endl;
    }

    return 0;
}
