#include<bits/stdc++.h>
#define brr cin.tie(0);cout.tie(0);ios::sync_with_stdio(false);
using namespace std;

int main(){
    freopen("input_5.txt","r",stdin);
    brr
    string s;
    int count=0;
    while(getline(cin,s)){
        int k=s.size();
        for(int i=0;i<=k-8;i++){
            if(s.substr(i, 4)=="mul("){
                int j,a,b;
                if(s[i+4]-'0'<=9 && s[i+4]-'0'>=0){
                    i+=4;
                    j=i;            
                    while(s[i]-'0'>=0 && s[i]-'0'<=9){
                        i++;
                        if(i>k-8){

                        }
                    }
                    if(s[i]==','){
                        a=stoi(s.substr(j,i-j));
                        i++;
                        j=i;
                        while(s[i]-'0'>=0 && s[i]-'0'<=9){
                            i++;
                            if(i>k-8){

                            }
                        }
                        if(s[i]==')'){
                            b=stoi(s.substr(j,i-j));
                            // cout<<a<<" "<<b<<"\n";
                            count+=a*b;
                        }
                    }
                }
            }
        }
    }
    cout<<count;    

    return 0;
}
