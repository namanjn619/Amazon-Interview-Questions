#include <bits/stdc++.h>
using namespace std;

int myfunc(string l1){
	int count = 0;
	if(l1.length() == 0){
		return count;
	}else{
		for(int i=0; i<l1.length()-1; i++){
			if(l1[i] == ' '){
				count++;
			}
		}
	}
	return count;
}
int main() {
	// your code goes here
	string l1;
	getline(cin, l1);
	int ans = myfunc(l1);
	cout<<ans+1<<endl;
	return 0;
}