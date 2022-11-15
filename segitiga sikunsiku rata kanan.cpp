#include <iostream>

using namespace std;
int main()
{
    int i,j,n;

    cout<<"---------------------------------------------------"<<endl;
    cout<<"|        SEGITIGA SIKU-SIKU RATA KANAN            |"<<endl;
    cout<<"---------------------------------------------------"<<endl;
    cout<<"\n Tinggi segitiga = ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
