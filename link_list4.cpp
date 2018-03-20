#include<stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include <mylist.h>
using namespace std;



int main()
{

    mylist a, b;
    a.insert_list(2);
    a.insert_list(4);
    a.insert_list(6);
    a.insert_list(8);
    a.print();

    b.insert_list(1);
    b.insert_list(2);
    b.insert_list(3);
    b.insert_list(10);
    b.print();
    printf("%0.2lf\n%0.2lf\n", a.average(), b.average());

    return 0;
}
