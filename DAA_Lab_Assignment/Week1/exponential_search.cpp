#include<iostream>
using namespace std;

int cmp=0;

int linear_search(int a[],int key,int size,int i)
{
	for(;i<size;i++)
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

int binary_search(int a[],int key,int left,int right)
{
	int mid;
	if(left<=right)
	{
		cmp++;
		mid=left+(right-left)/2;
		if(a[mid]==key)
			return mid;
		else if(a[mid]<key)
			binary_search(a,key,mid+1,right);
		else
			binary_search(a,key,left,mid-1);
	}
	return -1;
}

int exponential_search(int a[],int key,int size)
{
	if(a[0]==key)
		return 0;
	cmp++;
	int i=1;
	while(i<size&&a[i]<=key)
	{
		i=i*2;
		cmp++;
	}
	return linear_search(a,key,size,int(i/2));
	//return binary_search(a,key,int(i/2),min(i,n-1))
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
		if(exponential_search(array,key,size)>=0)
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
