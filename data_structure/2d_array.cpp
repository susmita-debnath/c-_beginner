#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={0};
    for(int i = 0;i<3;i++)   ///row  =0 , 1
    {
        for(int j=0;j<3;j++) ///column 0,1,2
        {
            cout<<"arr["<<i<<"]["<<j<<"] =  "<<arr[i][j]<<" ";   ///1,0  1,1 1,2
        }
        cout << endl;
    }
}
