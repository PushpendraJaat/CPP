#include <iostream>

using namespace std;

int main()
{
    int n,s;
    cin>>n>>s;
    
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int st=-1,end=-1,sum=0,j=0, i=0;
    
    
        while(j<n && arr[j]+sum <= s){
            sum= arr[j]+sum;
            j++;
        }
        
        if(sum == s){
            cout<<i+1<<" "<<j<<endl;
            return 0;
        }
      cout<<j<<endl;
        while(j<n){
            sum = sum + arr[j];
            while(sum>s){
                sum =  sum-arr[i];
                i++;
            }
            if(sum == s){
                st=i+1;
                end=j+1;
                break;
            } 
                
            j++;
        }
    
    cout<<st<<" "<<end<<endl;
    return 0;
}
