#include <bits/stdc++.h>
#define LL long long int
using namespace std;
int checkforone(vector<LL>A,vector<LL>B){

 set<LL>dif;
 set<LL>prod;
 for(int i=0;i<3;i++){
   dif.insert(B[i]-A[i]);
   if(B[i]%A[i]==0)
   prod.insert(B[i]/A[i]);
   else prod.insert(1e9);
   
 }
 if(dif.size()==2&&dif.find(0)!=dif.end())return 1;
 else if(dif.size()==1)return 1;
 if(prod.size()==2&&prod.find(1)!=prod.end()&&prod.find(1e9)==prod.end())return 1;
 else if(prod.size()==1&&prod.find(1e9)==prod.end())return 1;
 else return 2;
 /*
  int p=0;z=0;
  for(int i=0;i<2;i++){
    if(B[i]%A[i]==0&&B[i+1]%A[i+1]==0){
      if(prod[i]==prod[i+1])p++;
      else if(prod[i]==1)z++;
    }
    
  }
  if(p+z==3)return 1; 
  return 2;*/
  
}
int main() {
	int t;
	cin>>t;
	while(t--){
	  vector<LL>A,B;
	  for(int i=0;i<3;i++){
	    LL a;
	    cin>>a;
	    A.push_back(a);
	  }
	  for(int i=0;i<3;i++){
	    LL a;
	    cin>>a;
	   B.push_back(a);
	  }
	  int ans=checkforone(A,B);
	  if(ans==1){
	    cout<<1<<endl;
	    continue;
	  }
 int mini=INT_MAX;
	  int dif[3];
	  for(int i=0;i<3;i++){
	    dif[i]=B[i]-A[i];
	  }
	  set<int>d;
	  for(int i=0;i<3;i++)d.insert(dif[i]);
	  if(d.size()<3){
	    ans=2;
	    cout<<2<<endl;
	    continue;
	  }
	  vector<LL>tmp(3);
	  for(int i=0;i<3;i++)
	  tmp[i]=B[i];
	  
	  
	  for(int i=0;i<3;i++){
	    tmp[i]=B[i]-dif[i];
	     ans=min(mini,checkforone(A,tmp)+1);
	   if(ans==2){
	     break;
	   }
	    
	    int f=i;
	    for(int j=0;j<3;j++){
	      if(j!=i&&f!=j){
	        tmp[j]=B[j]-dif[i];
	        f=j;}
	       else if (j!=i&&f!=j){
	         tmp[j]=B[j];
	        
	       }
	     }
	   ans=min(mini,checkforone(A,tmp)+1);
	   if(ans==2){
	     
	     break;
	   }
	   for(int j=0;j<3;j++){
	      if(j!=i&&f!=j){
	        tmp[j]=B[j]-dif[i];
	        f=j;}
	       else if (j!=i&&f==j){
	         tmp[j]=B[j];
	        
	       }
	     }
	     ans=min(mini,checkforone(A,tmp)+1);
	     if(ans==2){
	     break;
	   }
	   tmp=B;
	     
	   }
	   
	   int c=0;
	  for(int i=0;i<3;i++){
	    dif[i]=(B[i]%A[i]==0)?B[i]/A[i]:INT_MAX;
	    if(dif[i]==INT_MAX)c++;
	  }
	   if(c==3){
	     cout<<3<<endl;
	     continue;
	   }
	   
	   //vector<LL>tmp(3);
	  for(int i=0;i<3;i++)
	  tmp[i]=B[i];
	  
	  
	  for(int i=0;i<3;i++){
	   
	    if(dif[i]==INT_MAX)continue;
	    tmp[i]=B[i]/dif[i];
	    // cout<<tmp[i]<<" ";
	     ans=min(mini,checkforone(A,tmp)+1);
	     if(ans==2){
	     break;
	   }
	    
	    int f=i;
	    for(int j=0;j<3;j++){
	      if(j!=i&&f!=j){
	       if(B[j]%dif[i]==0) tmp[j]=B[j]/dif[i];
	        f=j;
	        continue;
	      }
	        if (j!=i){
	         tmp[j]=B[j];
	        
	       }
	       cout<<tmp[j]<<" ";
	     }
	    // 
	   ans=min(mini,checkforone(A,tmp)+1);
	   if(ans==2){
	     
	     break;
	   }
	   for(int j=0;j<3;j++){
	      if(j!=i&&f!=j){
	       if(B[j]%dif[i]==0) tmp[j]=B[j]/dif[i];
	        f=j;}
	       else if (j!=i&&f==j){
	         tmp[j]=B[j];
	        
	       }
	     cout<<tmp[j]<<" ";
	     }
	      //cout<<tmp[i]<<" ";
	     ans=min(mini,checkforone(A,tmp)+1);
	     if(ans==2){
	     break;
	   }
	   tmp=B;
	     
	   }
	   
	   
	   
	   
	     cout<<ans<<endl;
	     }
	     
	     
	     	return 0;
	     
	      }
	      
	    

	 
	  
	  
	 

