using namespace std;

int main()
{
    int n,m;
    cin>>n;
    int ar1[n];
    for(int i=0;i<n;i++){
        cin>>ar1[i];
    }
    cin>>m;
    int ar2[m];
    for(int i=0;i<m;i++){
        cin>>ar2[i];
    }
    cout<<endl;
    
    
    	int s = max(n,m);
	int* ans = new int[s]  ;

	int i=n-1;
	int j=m-1;
	int k=s-1;
    int carry = 0;
	while(k>=0){
		int sum = carry;
		if(i>=0){
		   sum += ar1[i];
		}
		if(j>=0){
			sum += ar2[j];
		}

		int q=sum/10;
		int r=sum%10;

		ans[k]=r;
		carry = q;
		
		i--;
		j--;
		k--;
		if(carry !=0){
		sum=sum+carry;}
	
	

	}
	
	if(carry !=0){
		cout<<carry<<", ";}
	for(int i=0; i<s; i++){
		cout<<ans[i]<<", ";
	}
		
    cout<<"END";
	return 0;

    return 0;
}
