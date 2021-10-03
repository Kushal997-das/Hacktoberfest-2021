#include<bits/stdc++.h>
using namespace std ;
#define ll long long 
#define tc int t sc cin >> t sc while(t--)
#define sc ;
#define for(i,j,k) for(int i=j;i<k;i++)
#define vi vector<int> 
#define vl vector<long long
#define pb push_back
#define map map<int,int>
#define mapl map<ll,ll>
ll mod=1e9+7 ; 
int main(){
 
    tc{
        
        string s ; cin >> s ;
       char ch = s[0] ;
        int ans = 0 ;
 
       for(i,0,s.size()){
           if(i==0) continue ;
 
           if(s[i]!=ch){
               if(ch=='0') ans++ ;
               ch = s[i] ;
           }
 
           if(ans>1){
               ans=2 ;
               break;
           }
       }
 
       if(ans<2){
           if(ch=='0') ans++ ;
       }
 
       cout << ans << endl ;
 
    }
    return 0 ;
}
