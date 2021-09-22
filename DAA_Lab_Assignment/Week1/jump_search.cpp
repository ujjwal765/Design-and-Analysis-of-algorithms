#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int cmp=0;

int jump_search(int a[],int key,int n)
{
	float jump=sqrt(n);
	float steps=jump;
	float prev=0;
	while(a[min((int)steps,n)-1]<key)
	{
		cmp++;
		prev=steps;
		steps+=jump;
		if(prev>=n)
		return -1;
	}
	while(a[(int)prev]<key)
	{
		cmp++;
		prev++;
		if((int)prev==min((int)steps,n))
			return -1;
	}
	if(a[(int)prev]==key)
	{
		cmp++;
		return prev;
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
		if(jump_search(array,key,size)>=0)
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
