#include<iostream>
using namespace std;

int cmp=0;

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
