#include<iostream>
#include<string>

using namespace std;

int value[11][11];
void init(){
    for(int i = 1;i < 6;i ++){
        for(int j = 1;j < 6;j ++){
            value[i][j] = min(i,j) ;
        }
    }

    for(int i = 6;i <= 10 ;i ++){
        for(int j = 1;j <= 5;j ++){
            value[i][j] = value[6-((i-1)%5+1)][j] ;
        }
    }

    for(int i = 1;i < 11;i ++){
        for(int j = 6;j <= 10;j ++){
            value[i][j]= value[i][6-((j-1)%5+1)];
        }

    }

}


int main(){
    init();
    // for(int i =1 ;i < 11;i ++){
    //     for(int j = 1;j < 11;j ++){
    //         cout << value[i][j] <<" ";
    //     }
    //     cout << endl;
    // }
    int t;
    cin >> t;
    while(t --){
        string s[10];
        for(int i =0 ;i < 10;i ++){
            cin >> s[i];
        }
        int sum = 0;
        for(int i =0 ;i < 10;i ++){
            for(int j = 0;j < 10;j ++){    
                if(s[i][j] == 'X'){
                    sum += value[i+1][j+1];
                }
            }
        }
        cout << sum << endl;


    } 




    return 0;
}