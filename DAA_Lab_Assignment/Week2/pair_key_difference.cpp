#include<iostream>
using namespace std;

void pair_key_difference(int a[],int size,int key)
{
	int c=0;
	for(int i=0;i<size-1;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(abs(a[i]-a[j])==key)
				c++;
		}
	}
	cout<<c<<endl;
}

int main()
{
	int n,size,key;
	cin>>n;
	for(int i=0;i<n;i++)
	{
        	cin>>size;
        	int array[size];
        	for(int j=0;j<size;j++)
        	{
            		cin>>array[j];
        	}
		cin>>key;
		pair_key_difference(array,size,key);
	}
}
