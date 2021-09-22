#include<iostream>
using namespace std;

int binary_search(int a[],int key,int left,int right)
{
	int mid;
	while(left<=right)
	{
		mid=left+(right-left)/2;
		if(a[mid]==key)
			return mid;
		else if(a[mid]<key)
			left=mid+1;
		else
			right=mid-1;
	}
	return -1;
}

int keyCount(int a[],int p,int key,int size)
{
	int c=1,i=1;
	while((p-i)>=0&&(p+i)<size&&(a[p-i]==key||a[p+i]==key))
	{
		if(a[p-i]==key)
			c++;
		if(a[p+i]==key)
			c++;
		i++;
	}
	return c;
}

int main()
{
	int n,size,key,b;
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
		b=binary_search(array,key,0,size-1);
		if(b>=0)
		{
			cout<<key<<" - "<<keyCount(array,b,key,size)<<endl;
		}
		else
		{
			cout<<"Key Not Present "<<endl;
		}
	}
}
