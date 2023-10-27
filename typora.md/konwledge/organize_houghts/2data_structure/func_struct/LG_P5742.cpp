#include<iostream>
#define dd double

using namespace std;
const int N =1e5+10;
struct stu{
    string s;
    dd a,b,res;
    void in(string s,dd x ,dd y){
        this->s = s;
        this->a = x;
        this->b = y;
    }
    dd outsum(){
        return this->a+this->b;
    }
    dd outres(){
        return this->res = this->a * 7 + this->b * 3;
    }
}stu[N];


int main(){
    int n;
    cin >> n;
    for(int i =0 ;i < n ;i ++){
        string s;
        dd  a,b;
        cin >> s >> a >> b;
        stu[i].in(s,a,b);
        if(800.0 <= stu[i].outres() && 140.0<stu[i].outsum()){
            cout << "Excellent"<<endl;
        }else{
            cout << "Not excellent"<<endl;
            
        }

    }





    return 0;
}