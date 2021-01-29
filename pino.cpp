#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t =0;
    cin >> t;
    int v[t];
    int o[t];
    for (int i = 0; i<t;i++){
        cin >> v[i];
        cin >> o[i];
       
    }
    
    for (int i=0;i<t;i++){
        if (2*v[i]<o[i] || 2*o[i]<v[i])
            cout << "NO" << "\n";
        else
            if (((v[i]%3+o[i]%3)==3) || ((v[i]%3+o[i]%3)==0))
            cout << "YES" << "\n";
            else
            cout << "NO" << "\n";
        
    }
    
    
}