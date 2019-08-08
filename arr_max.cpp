#include<iostream>
using namespace std;

int main(){
	
	int a[]={1,10,30,4,51,6,7};
	for (int i=1;i<7;i++){
		if(a[0]<a[i])
			a[0]=a[i];
	}
	cout<<"Max element is: "<<a[0];
	return 0;
}