
//given a n array
// given k querries in form of L and R
// have to compute sum from L to R


#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int arr[N];
int pf[N];



int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        pf[i]=pf[i-1]+arr[i]; // pre-computing using a array
    }

    int  k ;
    
    cin>>k;
    while(k--){
        int l ,r;
        cin>>l>>r;
        cout<< pf[r]-pf[l-1]<<endl;
        // for(int i=l;i<=r;i++){
        //     long long sum=0;
        //     sum+=arr[i];
            
        // }
    }
    cout<<endl;
//               ^
//               |


    //  O(N)+O(k*N) / / time complexity
     






return 0;
}