#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool check_odd(int n){
return (n%2!=0);	
}

int main(){
	vector<int> v={1,2,3,4,5,6};
	bool result;
	result=any_of(v.begin(),v.end(),check_odd);
	
	if(result==true)
		cout<<"Vector contains at least one odd number";
	v[6]=110;
	result=any_of(v.begin(),v.end(),check_odd);
	if(result==false){
		cout<<"Contains Odd number"<<endl;
	}
	return 0;
}