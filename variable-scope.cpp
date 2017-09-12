/// variable scope

#include<iostream>
using namespace std;
int global;
int add(int a,int b)
{
    int sum;
    sum = a + b;
    return sum;
}

int main()
{
    int a,b;
    a = 5, b = 6;
    //cout<<add(a,b)<<endl;
    {
        int k=5;
        cout<<k<<endl;
    }
    float k = 5.6;
    cout << k << endl;
    int i;
    for (  i = 1; i <=5; i++ ) {
        cout << i << " ";
    }

    cout << i << endl;

    return 0;
}
