#include<bits/stdc++.h>
#define LL long long int
using namespace std;
int main(){
   int na,nb;
   cin>>na>>nb;
   if(na-1>nb||nb>2*(na+1)){
       cout<<-1<<endl;
       return 0;
   }
   if(na==nb||na-1==nb){
      for(int i=0;i<nb;i++)cout<<"01"; 
      if(na-1==nb)cout<<"0";
      return 0;
   }
   else{
       int partitions=na+1;
       int extra=nb%partitions;
       int divi=nb/partitions;
      if(extra==0&&divi>1){
          extra=partitions;
      }
       cout<<"1";
       if(extra){
           cout<<"1";
           extra--;}
           for(int i=0;i<partitions-1;i++){
               //cout<<"0";
               cout<<"01";
               if(extra){
                cout<<"1";
               extra--;}
               
           }
   }
 return 0;  
   
}