#include <iostream>
using namespace std;
int main(){
    int n = 0;
    
    cin >> n;
    int lista[n];
    if (n !=1 && n<4){
        cout << "NO SOLUTION";
    }
    lista[0] =2;
    lista[n/2+1] = 1;
  
 
    for (int i=1;i<=n/2-1;i++){
        lista[i]=lista[i-1]+2;
      
    }
    
    for (int j=n/2+2;j<n+n;j++){
        lista[j]=lista[j-1]+2;
        
    }
    if (n==1){
        cout << n;
    }
 

    if (n>4){
    for (int i =0;i<n;i++){
    cout << lista[i] << " ";
    }

    }
    
    

}