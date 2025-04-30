#include <iostream>
using namespace std;

void trans(string &cpy, int &a, int &c){
	char temp;
	temp = cpy[a];
	cpy[a] = cpy[c];
	cpy[c] = temp;
}

bool prog(string word){
	int a = 0;
	int b = word.size() / 2;
	int c = word.size() - 1;
	string cpy = word;
	while(a<b){
		trans(cpy,a,c);
		a++;
		c--;
	}
	if(cpy == word){
		return 1;
	}
	else{
		return 0;
	}
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n>0){
		bool ans;
		string word;
		cin>>word;
		ans = prog(word);
		if(ans == 0){
			cout<<"False"<<endl;
		}else{
			cout<<"True"<<endl;
		}
		n--;
	}
	return 0;
}