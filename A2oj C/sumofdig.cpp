#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,s;
    cin>>m>>s;
    if(m==0){
        cout<<"-1 -1";
        return 0;
    }
    if(s==0){
        if(m==1)cout<<"0"<<" 0";
        else cout<<"-1 -1";
        return 0;
    }
    vector<int>mx(m);
    int sum=0,org=s;
    for(int i=0;i<m;i++){
        mx[i]=min(9,s);
        sum+=mx[i];
        s-=mx[i];
    }
    //cout<<sum<<" "<<s<<' ';
    if(sum<org){
        cout<<"-1 -1";
        return 0;
    }
    vector<int>ms(m);
    ms=mx;
    sort(ms.begin(),ms.end());
    
    if(ms[0]==0){
        ms[0]=1;
        int i=1;
        while(ms[i]==0)i++;
        ms[i]--;
    }
    for(int i=0;i<m;i++)cout<<ms[i];
    cout<<" ";
     for(int i=0;i<m;i++)cout<<mx[i];
}