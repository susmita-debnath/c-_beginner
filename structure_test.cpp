#include<stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct student{
    int roll;
    void show()
    {
        printf("%d", roll );
    }
};


int main()
{
   student a, b, c;
   a.roll = 34;
   b.roll =89;
   c.roll =445;
   a.show();
}
