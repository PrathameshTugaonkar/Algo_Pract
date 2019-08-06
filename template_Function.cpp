#include<iostream>
#include<string>
#include<cmath>

using namespace std;
template <typename M>
inline M const& Max(M const& a, M const& b) {return (a<b? b:a);}

int main(){
int i=200;
int j=20;
cout<<"Max is "<<Max(i,j)<< endl;
double f=13.5;
double f2=20.7;

cout<<"Max is "<<Max(f,f2)<<endl;
cout<<"Floor is "<<floor(f2)<<" \nCeil "<<ceil(f2);

return 0;
} 