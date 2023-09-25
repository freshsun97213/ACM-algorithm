#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    (a < b) ? swap(a,b) : swap(b,c);
    if(a < b) {swap(a,b);}
    //cout << a<<b <<c;
    if(b + c <= a)cout << "Not triangle" <<endl;
    else{
        if(b*b + c*c == a*a)cout <<  "Right triangle" <<endl;
        if(b*b + c*c > a*a)cout << "Acute triangle" <<endl;
        if(b*b + c*c < a*a)cout << "Obtuse triangle"<<endl;
        if(b == c || a == c || a == b)cout <<  "Isosceles triangle" <<endl;
        if(b == c && c == a )cout << "Equilateral triangle" <<endl;
    }
    return 0;
}
//好熟悉的错误 ， 就是 ，自己虽然脑子里面过了一遍
// 说 不是三角形的话后面需不需要加上eles
// 原本觉得不是三角形的 ，下面的条件一定不会成立，但是
// 其实条件 并不是完全相互排斥的，是有重合的地方的
// 
// 那么下一次可能需要，对于，条件区间的判定下点功夫了

// 该怎么下呢？？？ 如果进入了思维盲区的话，岂不是一直出不来吗


