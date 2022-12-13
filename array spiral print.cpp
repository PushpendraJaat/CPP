#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cout<<"GIVE M AND N"<<endl;
    cin>>m>>n;
    int ar[m][n];
    int dir=0,t=0,r=n-1,b=m-1,l=0;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>ar[i][j];
        }
    }
    
  
    
    while(t<=b && l<=r){
        
        if(dir==0){
            for(int k=l;k<=r;k++){
                cout<<ar[t][k]<<", ";
            }
            dir=1;
            t++;
        }
        else if(dir==1){
            for(int k=t;k<=b;k++){
                cout<<ar[k][r]<<", ";
            }
            dir=2;
            r--;
        }
        else if(dir==2){
            for(int k=r;k>=l;k--){
                cout<<ar[b][k]<<", ";
            }
            dir=3;
            b--;
        }
        else if(dir==3){
            for(int k=b;k>=t;k--){
                cout<<ar[k][l]<<", ";
            }
             dir=0;
             l++;
        }

    }

    return 0;
}
