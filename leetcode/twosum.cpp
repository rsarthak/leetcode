#include<iostream>
#include<unordered_map>
using namespace std;
int twosum(vector<int>v){
vector<int>s;
unordered_map<int,int>m;
int target;
for(int i=0;i<v.size();i++){
if(m[target-v[i]]!=m.end()){
s.push_back(m[target-v[i]]);
s.push_back(i);
return s;
}
m[v[i]]=i;
}
return s;
}
int main(){
    int n;
    cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    v.push_back(x);
}
cout<<twosum(v);



}