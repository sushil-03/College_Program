#include <bits/stdc++.h>

using namespace std;

void solve(vector<int>v,int n,int key){
    int h=1;
    int l=0;
    int comp=0;
    while(h<n){
        if(v[h]<=key){
            comp++;
           l=h; 
           h=h*2;
        }else{
            break;
        }
    }
    bool flag=false;
    for( int i=l;i<=h;i++){
        if(v[i]>key)
            break;       
        if(v[i]==key){
            flag=true;
            break;
        }
        comp++;
    }
    if(flag){
        cout<<"Present "<<comp<<endl;
    }else{
        cout<<"Not Present "<<comp<<endl;
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
        solve(v,n,key);
        
    }
}


/*

5 
12 23 36 39 41         41

8
21 39 40 45 51 54 68 72  69

10
101 246 438 561 796 896 899 4644 7999 8545     7999



*/








