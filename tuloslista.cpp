#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    string nimi;
    int pisteet;
    vector<pair<int,string>> v;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> nimi >> pisteet;
       
        v.push_back({-pisteet,nimi});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout << v[i].second << " ";
        cout << -v[i].first << "\n";

    }
}