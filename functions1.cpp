#include <bits/stdc++.h>

using namespace std;

int suum(int a){
    int result = 0;
    for(int i =1; i<=a; i++){
        
        result = result + i;
        
    }
    return result;
}

int main(){
 int a;
 cin>>a;
  cout<<suum(a);
}
