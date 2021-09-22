#include<iostream>
using namespace std;

int cmp=0;

int linear_search(int a[],int key,int size)
{
	for(int i=0;i<size;i++)
	{
		if(a[i]==key)
		{
			cmp++;
			return i;
		}
		cmp++;
	}
	return -1;
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
		if(linear_search(array,key,size)>=0)
		{
			cout<<"Present "<<cmp<<endl;
			cmp=0;
		}
		else
		{
			cout<<"Not Present "<<cmp<<endl;
			cmp=0;
		}
	}
}
