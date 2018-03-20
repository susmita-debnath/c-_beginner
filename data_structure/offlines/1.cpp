#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
using namespace std;

void insert_f(int ar, int indx, int val)
{
    int i;

    for ( i = indx; i > 0; i-- ) {
        a[i] = a[i-1];
    }
    a[0] = val;
}

void insert_l(int ar, int indx, int val)
{
    ar[indx] = val;
}

void delete_f(int arr, int indx)
{
    int i;

    for ( i = 0; i < indx; )
}

int main()
{
    int ar[10];
    int s = 10;
    string a;
    int val, indx = -1;

    while(1) {
        cin >> a;

        if ( a == "Insert-First" ) {
            cin >> val;
            if( indx < (s-1) ) {
                s++;
                insert_f(ar, indx, val);
            }
            else cout << "Memory Overflow!" << endl;
        }
        else if ( a == "Insert-Last" ) {
            cin >> val;
            if ( indx < (s-1) ) {
                s++;
                insert_l(ar, indx, val));
            }
        }
        else if ( a == "Delete-First" ) {
            void delete_f(ar, indx);
        }
        else if ( a == "Delete-Last" ) {
            if ( indx > -1 ) indx--;
            else cout << "Memory underflow!";
        }
        else if ( a == "Update-Index" )
    }
    return 0;
}

