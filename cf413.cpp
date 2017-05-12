
/// NAME: ADNAN TURJOY
/// CSE,PUST

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,k,d,i,j,ck,a;
    cin>>n>>t>>k>>d;
    a=d/t;
    a=a+1;
   // cout<<a;
    if(a*k<n){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }



    return 0;
}
