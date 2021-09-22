#include<iostream>
using namespace std;

int find_sequence(int a[],int size)
{
	for(int i=0;i<size-2;i++)
	{
		for(int j=i+1;j<size-1;j++)
		{
			for(int k=j+1;k<size;k++)
			{
				if(a[i]+a[j]==a[k])
				{
					cout<<i+1<<","<<j+1<<","<<k+1<<endl;
					return 1;
				}
			}
		}
	}
        return -1;
}

int main()
{
	int n,size;
	cin>>n;
	for(int i=0;i<n;i++)
	{
        	cin>>size;
        	int array[size];
        	for(int j=0;j<size;j++)
        	{
            		cin>>array[j];
        	}
		if(find_sequence(array,size)==-1)
		{
			cout<<"No Sequence Found "<<endl;
		}
	}
}
