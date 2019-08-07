#include<iostream>
using namespace std;

void leftRotate(int a[],int n)//Shift per iteration by one
{
int temp=a[0],i;
for (i=0;i<n-1;i++)
a[i]=a[i+1];
a[i]=temp;

}

void print_arr(int a[],int n)//Prints the array
{
int i;
for(i=0;i<n;i++)
cout<<"["<<a[i]<<"]"<<endl;
}
void rotation(int a[], int s, int n)//calls the leftRotate() to shift the array
{
int i;
for(i=0;i<s;i++)
leftRotate(a,n);
print_arr(a,n);
}


int main(){
int arr[]={1,2,3,4,5};
int shift=2;
int size=5;
rotation(arr,shift,size);

}
