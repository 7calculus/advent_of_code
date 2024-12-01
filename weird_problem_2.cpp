#include<bits/stdc++.h>
#define brr cin.tie(0);cout.tie(0);ios::sync_with_stdio(false);
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    vector<int> l,r;
    int x,y;
    while(cin>>x && cin>>y){
        l.push_back(x);
        r.push_back(y);
    }
    int sum=0;
    for(int i=0;i<l.size();i++){
        int temp_sum=0;
        for(int j=0;j<r.size();j++){
            if(l[i]==r[j]){
                temp_sum++;
            }
        }
        l[i]=l[i]*temp_sum;
        sum+=l[i];
    }   
    cout<<sum;
    return 0;
}