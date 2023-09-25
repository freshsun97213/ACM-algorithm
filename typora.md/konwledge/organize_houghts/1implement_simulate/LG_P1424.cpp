#include<iostream>
#define i64 long long
using namespace std;

int main(){

    i64 x,y;
    cin >> x >> y;
    i64 rest = (y / 7)*2;
    // cout <<"rest" << rest << endl;
    // cout << "sum"<<(y-rest)*250;
    i64 k = (x+(y%7)) ;
    // cout << "k" << (y-1)%7<<endl;
    if(k == 6){rest ++;}
    else if(k >= 7){rest += 2;}//不可能通过计算解决这个问题
    
    //(k == 6) ? rest += k - 5 :rest+= 0; 
    // cout << rest <<endl;
    cout << (y - rest ) * 250<<endl;
    //错误数据是7 543543
    //输出 ： 97061250




    return 0;
}


//    i64 x,y;
//     cin >> x >> y;
//     int sum = 0;
//     for(int i = 0;i < y;i ++){
//         int k = x + i;
//         ((k - 1)% 7 + 1 <= 5) ? sum +=1 : sum += 0; 
//     }
//     cout << sum *250 <<endl;

//     return 0;
// }