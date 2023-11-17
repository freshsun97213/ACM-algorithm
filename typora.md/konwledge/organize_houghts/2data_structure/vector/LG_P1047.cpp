#include<iostream>
#include<algorithm>

using namespace std;

const int N =1e5+10;
struct nod{
    int st,en;
    friend bool operator <(const nod &a,const nod &b){
        if(a.st!=b.st)return a.st<b.st;
        else{return a.en<b.en;}
    }
}tree[N];



int main(){
    int l,m;
    cin >> l >> m;
    for(int i =0;i < m;i ++){
        cin>>tree[i].st>>tree[i].en;
    }
    sort(tree,tree+m);
    int pre = 0,an = 0;
    for(int i =0;i<m;i++){
        an += tree[i].en-max(tree[i].st,pre)+1;
        if(pre >= tree[i].st){
            an --;
        }
        pre = tree[i].en;
    }
    cout << l- an<<endl;


    return 0;
}

