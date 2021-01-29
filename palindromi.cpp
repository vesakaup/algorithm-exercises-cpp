#include <iostream>
#include<bits/stdc++.h>

using namespace std;
string sortString(string &str)
	{sort(str.begin(),str.end());
	return str;
}
int main(){
	string word ="";
	cin >> word;
	int l = word.size();
	
	set<char> checker(word.begin(), word.end());
	if(checker.size() > l/2 + l%2){
	
		cout << "NO SOLUTION";
	
	}
	string palindromi(" ",l);
	string sorted = sortString(word);
	cout << "here";

		for(int i = 0;i<=l/2;i){
			if(i%2==0){
			palindromi[i]=sorted[i];
			}
			else{
				palindromi[l-i]=sorted[i];
			}
				
			}
			
		
		
		cout << palindromi << "\n";
	}


