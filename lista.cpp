#include <iostream>
using namespace std;
int main(){
    int n = 0;
    
    cin >> n;
    int lista[n];
    if (n !=1 && n<4){
        cout << "NO SOLUTION" << "/n";
    }

    if(n == 4){
       lista[0]=2;
       lista[1]=4;
       lista[2]=1;
       lista[3]=3;
        for (int i =0;i<n;i++){
        cout << lista[i] << " ";
    }
    }
  
 
    for (int i=0;i<=n/2+n%2-1;i++){
        lista[i]=n-2*i;
      
    }
    
    for (int j=n-1;j>n/2+n%2-1;j--){
        lista[j]=2*n-2*j+1-n%2- (1-n%2)*2;
        
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
