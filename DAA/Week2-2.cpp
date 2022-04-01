#include <bits/stdc++.h>
using namespace std;
void searching(vector<int>v,int n,int key){
    int i,lo,hi;
    bool flag=false;
    for( i=2;i<n;i++){
        int target=v[i];
         lo=0,hi=i-1;
        while(l<h){
            int sum=v[l]+v[h];
            if(sum==target){
                flag=true;
                break;
            }else if(sum<target){
                lo++;
            }else{
               hi--; 
            }
        }
        if(flag)
        break;
    }
    if(flag){
        cout<<lo<<","<<hi<<","<<i<<endl;
    }else{
        cout<<"No sequence found"<<endl;
    }
}
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        cout<<"Enter key "<<endl;
        int key;
        cin>>key;
        searching(v,n,key);
        
    }
}








