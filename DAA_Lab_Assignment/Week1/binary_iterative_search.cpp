#include<iostream>
using namespace std;

int cmp=0;

int binary_search(int a[],int key,int left,int right)
{
	int mid;
	while(left<=right)
	{
		cmp++;
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
		if(binary_search(array,key,0,size-1)>=0)
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
