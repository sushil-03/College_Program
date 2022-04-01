#include <bits/stdc++.h>
using namespace std;
void searching(vector<int>v,int n,int key){
    int l=0,h=n-1;
    int mid;
    while(l<h){
         mid=(l+h)/2;
        if(v[mid]==key){
            if(v[mid-1]==key){
                h--;
            }else{
                break;
            }
        }else if(v[mid]<key){
            l=mid+1;
        }else{
            h=mid-1;
        }
    }
    int dup=0;
    while(v[mid]==key){
        dup++;
        mid++;
    }
    cout<<key<<" - "<<dup<<endl;
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












