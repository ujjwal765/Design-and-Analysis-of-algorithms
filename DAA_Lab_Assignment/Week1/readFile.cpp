#include<iostream>
using namespace std;

int main()
{
    int n,size,key;
    cin>>n;
    cout<<"No. of test cases "<<n<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>size;
        int array[size];
        for(int j=0;j<size;j++)
        {
            cin>>array[j];
        }
        cin>>key;

        cout<<"Size "<<endl;
        for(int j=0;j<size;j++)
        {
            cout<<array[j]<<" ";
        }
        cout<<endl;
        cout<<"Key "<<endl;
    }
}
