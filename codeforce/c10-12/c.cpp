#include<iostream>
#include<string>
#include<algorithm>
#define de(x) cerr << #x <<" "<<x <<endl; 
#define i64 long long
using namespace std;
const int N =1e3+10;
string s[N];
i64 n;

// (i,j)  (n-i+1,n-j+1)  (i,n-j+1)  (n - i+1,j)
i64 judge(){
    i64 cnt = 0;
    for(int i = 0;i < n/2;i ++){
        for(int j  = 0;j < n/2;j++){
            int x=i,y=j;
            int p1 = (int)(s[x][y]-'a');
            int p2 = (int)(s[y][n-x-1]-'a');
            int p3 = (int)(s[n-x-1][n-y-1]-'a');
            int p4 = (int)(s[n-y-1][x]-'a');
            // de(p1)
            // de(p2)
            // de(p3)
            // de(p4)
            int mx = max(p1,p2);
            mx = max(mx,p3);
            mx = max(mx,p4);
            // de(mx)
            cnt += 4 * (i64)mx - p1 -p2-p3-p4; 
        }
    }
    return cnt ;

}

int main(){
    i64 t;
    cin >>t;
    while(t --){
        // i64 a[5]={'0','0','0','0','0'};
        s->clear();
        
        cin >> n;
        for(int i =0 ;i < n;i ++){cin >> s[i];}

       cout << judge()<<endl;



    }




    return 0;
}


// 