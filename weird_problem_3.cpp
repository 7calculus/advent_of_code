#include<bits/stdc++.h>
#define brr cin.tie(0);cout.tie(0);ios::sync_with_stdio(false);
using namespace std;

int main(){
    freopen("input_3.txt","r",stdin);
    brr
    string s;
    int count=0;
    while(getline(cin,s)){
        s+=" ";
        cout<<s<<"\n";
        int i=0,j=0,t=-9999;
        bool increasing,first_time=true;
        for(;j<s.size();j++){
            if(s[j]==' '){
                int ele=stoi(s.substr(i,j-i));
                i=j+1;
                if(t==-9999){
                    t=ele;
                } else if(first_time){
                    if(!(abs(ele-t)>=1 && abs(ele-t)<=3))break;
                    increasing = (ele>t)?true:false;
                    if(ele==t){
                        cout<<"no1"<<"\n";
                        break;
                    }
                    first_time = false;
                    t=ele;
                } else {
                    if(increasing){
                       if(!(ele>t && abs(ele-t)>=1 && abs(ele-t)<=3)){
                        cout<<"not increasing"<<"\n";
                            break;
                        } else {
                            t=ele;
                        }
                    } else{
                       if(!(ele<t && abs(ele-t)>=1 && abs(ele-t)<=3)){
                        cout<<"not decreasing"<<"\n";
                            break;
                        } else{
                            t=ele;
                        }
                    } 
                }
            } if(j==s.size()-1){
                cout<<"safe"<<"\n";
                count++;
            } 
        }
    }
    cout<<count;
    return 0;
}