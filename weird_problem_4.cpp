#include<bits/stdc++.h>
#define brr cin.tie(0);cout.tie(0);ios::sync_with_stdio(false);
using namespace std;

bool safe(vector<int> v){
    bool isdec=true;
    bool isinc=true;
    bool yup=true;
    for(int i=0;i<v.size()-1;i++){
        if(v[i]-v[i+1]>0){
            isinc=false;
        }else if(v[i]-v[i+1]<0){
            isdec=false;
        } 
        if(!(abs(v[i]-v[i+1])>=1 && abs(v[i]-v[i+1])<=3)){
            yup=false;
            break;
        }
    }
    if(yup && (isdec || isinc)){
        return true;
    } else return false;
}
bool check(vector<int> v,int i){
        v.erase(v.begin()+i);
        if(safe(v)){
            return true; 
        }else return false;
}
int main(){
    freopen("input_3.txt","r",stdin);
    brr
    string s;
    int count=0;
    
    while(getline(cin,s)){
        s+=" ";
        int j=0;
        vector<int> v;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                v.push_back(stoi(s.substr(j,i-j)));
                j=i+1;
            }
        }
        if(safe(v)){
            count++;
            continue;
        }else{
            for(int i=0;i<v.size();i++){
                if(check(v,i)){
                    count++;
                    break;
                }
            }
        }
    }
    cout<<count;
    return 0;
}