#include<iostream>

using namespace std;

void print_sort(int a[],int n){
for (int x=0;x<n;x++)
cout<<" "<<a[x]<<" ";
}
void selectionSort(int a[], int n){
//loop invariant is intuitively decided as the elements
// before i'th location are sorted
for (int i=0;i<n-1;i++){
int min=i;
for (int j=i+1;j<n;j++){//Iterates through all the elements
if(a[min]>a[j])
min=j;
}
int key=a[min];
while(min>i)
{
a[min]=a[min-1];
min--;
}
a[i]=key;//sorted element 
}


}

int main(){
int a[]={4,6,2,66,4,33,7,88,9};
int n=(sizeof(a)/sizeof(a[0]));//calculate the size of an array at compile time
selectionSort(a,n);
print_sort(a,n);
return 0;
}
