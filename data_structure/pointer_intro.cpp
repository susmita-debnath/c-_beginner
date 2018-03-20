#include <iostream>

using namespace std;

int main()
{
    int v1 = 20;
    int *p1;
    p1 = &v1;
    cout << "variable value(sohan)" << v1 << endl;
    cout << "variable address(sohan)" << &v1 << endl;
    cout << "pointer value(bappy)" << *p1 << endl;
    cout << "pointer address(bappy)" << p1 << endl;

}
