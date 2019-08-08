#include<iostream>
#include<algorithm>

bool is_Alpha(char x){
	return((x>='A' && x<='Z')||(x>='a' && x<='z'));
}

void reverse(char str[]){
	int r=strlen(str)-1,l=0;
	while(l<r){
		if (!is_Alpha[str[l]){
			l++;
		}
		else if(!is_Alpha(str[r])){
			r--;
		}
		else{
			swap(str[l],str[r]);
			l++;
			r--;
		}
	}
}
int main(){
	char str[]="qwe!!dfg";
	cout<<"Input string"<<str<<endl;
	reverse(str);
	cout<<"Output string "<<str<<endl;
	return 0;
}