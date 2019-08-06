#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;

int main(){

vector<int> test_vec;
int i;
cout<<"Vector Size= "<< test_vec.size()<< endl; //finds the size of the Vector

//push few values in the vector

for (i=1;i<100;i++){
test_vec.push_back(i);
}
cout<<"Size of the Vector is "<<test_vec.size()<<endl;

//Using Iterator to access the values
vector<int>::iterator iter_vec=test_vec.begin();
while(iter_vec !=test_vec.end()){
cout<<"value of v is : "<<*iter_vec<<endl;
iter_vec++;
}

return 0;

}