/*
You are given a number of sticks of varying lengths. You will iteratively cut the sticks into smaller sticks,
 discarding the shortest pieces until there are none left. 
At each iteration you will determine the length of the shortest stick remaining, 
cut that length from each of the longer sticks and then discard all the pieces of that shortest length.
 When all the remaining sticks are the same length, they cannot be shortened so discard them.

Given the lengths of  sticks, print the number of sticks that are left before each iteration until there are none left.
The shortest stick length is , so cut that length from the longer two and discard the pieces of length . Now the lengths are . 
Again, the shortest stick is of length , so cut that amount from the longer stick and discard those pieces.
 There is only one stick left, , so discard that stick. The number of sticks at each iteration are .*/




#include<iostream>
using namespace std;

void arr(int *p,int size){
       int count;
       int shor=0;
       
       while(true){
               
       for(int i=0;i<size;++i){
               if(shor>p[i]&&p[i]>0){
                       shor=p[i];
               }
       }
       int cut=shor;
               count=0;
       for(int i=0;i<size;++i){
               p[i]-=cut;
               if(p[i]>0){
                       ++count;
                       shor=p[i];
               }
               
               
       }if(count==0){
               exit(0);
       }
       cout<<count<<endl;
       
       
       
       }
       
       
}

int main(){
     int n;
     cin>>n;
     int *p=new int[n];
     for(int i=0;i<n;++i){
             cin>>p[i];
     }  
     
     arr(p,n);
}
