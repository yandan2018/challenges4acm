#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
static const int Max=INT_MAX;
int main(){
    int n,temp,i=0,max_price=-Max;
    cin>>n;
    int a[n],cnt=n;
    while(n-->0){
        cin>>a[i++];
    }
    int minv=a[0];
    for(int i=1;i<cnt;i++){
        max_price=max(max_price,a[i]-minv);
        minv=min(a[i],minv);
    }
    cout<<max_price;
    return 0;
}
