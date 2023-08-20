#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
const int N =3e5+10;

struct cup{
    int id , w;
    friend bool operator < (const cup &a,const cup &b){
        if(a.w != b.w){
            return a.w > b.w;
        }else{
            a.id < b.id;
        }
    }
}c[N];
int main(){
    int n;
    cin >> n;
    for(int i = 0;i < n ;i ++){cin >> c[i].id >> c[i].w;}

    sort(c,c + n);
    int id =c[0].id,w = c[0].w;
    int mx = w;
    for(int i = 1;i < n;i ++){
        if(c[i].id == id){
            if(mx < (w + c[i].w/2)){mx = w+c[i].w/2;}
        }else{
            mx = max (mx,w + c[i].w);
        }
    }
    cout << mx<<endl;
    return 0;
}