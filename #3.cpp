#include<iostream>
using namespace std;



int main(){
     int n;
     cin>>n;
     int *p=new int[n];
     for(int i=0;i<n;++i){
             cin>>p[i];
     }  
     
     int shor=p[0];
        int count;
       for(int i=1;i<n;++i){
               if(shor>p[i]){
                       shor=p[i];
               }
       }
       cout<<n<<endl;
       while(count!=1){
               count=0;
       for(int i=0;i<n;++i){
               p[i]-=shor;
               if(p[i]>0){
                       ++count;
               }
       }cout<<count<<endl;
       }
}