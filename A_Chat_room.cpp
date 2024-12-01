#include<bits/stdc++.h>
#define brr cin.tie(0);cout.tie(0);ios::sync_with_stdio(false);
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    brr
    int x,y,sum=0;
    vector<int> left,right;
    while(cin>>x && cin>>y){
        left.push_back(x);
        right.push_back(y);
    }
    sort(left.begin(),left.end());
    sort(right.begin(),right.end());
    for(int i=0;i<left.size();i++){
        sum+=abs(left[i]-right[i]);
    }
    cout<<sum;
    return 0;
}