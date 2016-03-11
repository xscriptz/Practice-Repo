#include <iostream>
using namespace std;

int main()
{
float arr[]={20,10,4,50,100,2,1,18,11,22};
int n=10;
int temp;
for(int i=0;i<n;i++)
{
	for(int j=i+1;j<n;j++)
	{
		if(arr[i]>arr[j])
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;

		}
	}

}
for(int i=0;i<n;i++)
{
	cout << arr[i] <<',';
}
return 0;	
}