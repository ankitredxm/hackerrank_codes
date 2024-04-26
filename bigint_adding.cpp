#include<iostream>
using namespace std;
int main(){
    string s1="46";
    string s2="46";
    for(int i=s1.length()-1;i>=0;--i){
        int carry=0,add;
        int t=(s1[i]-'0')+(s2[i]-'0')+carry;
        if(t>9){
           add=t%10;
           carry=t/10;
        }else{
            add=t;
        }

       
        s1[i]=add+'0';
    }
    for(int i=0;i<s1.length();++i){
        cout<<s1[i];
    }
}