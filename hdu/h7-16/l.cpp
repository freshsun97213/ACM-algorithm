#include<iostream>


using namespace std;

#define debug(x) cerr<< #x << ": " << x << endl;
#define debugs(x) cerr<< #x << " " << x <<endl;  

void swap(int *q,int *w){
    int t = *q;
    *q = *w;
    *w = t;
    return ;
}

void quick_sort(int a[],int low,int high){
    if(low >= high) {return ;}
    int pivot = a[high];
    int i = low -1;

    for(int j = low ;j < high;j ++){
        if(a[j] < pivot){
            i ++;
            swap(a[j],a[i]);
        }

    }

    swap(a[i + 1],a[high]);

    quick_sort(a,low,i);
    quick_sort(a,i +2,high);
    return ;
}

const int N = 1e4 + 10;

int a[N],b[N],aa[N];

int main(){
    int n,m;
    while(~scanf("%d %d",&n,&m)){
        int aa[N]={0};
        if(n == 0 && m == 0){return 0;}
        for(int i = 0;i < n;i ++){scanf("%d",&a[i]);}
        for(int i = 0;i < m;i ++){scanf("%d",&b[i]);}
        int j = 0;
        int cnt = 0;
        
        quick_sort(a,0,n-1);
        quick_sort(b,0,m-1);
        for(int i = 0;i < n && j < m;j ++){
            if(a[i] == b[j]){aa[i++] = 1;cnt ++;}
            else if(a[i] < b[j]){i ++;j --;}
        }
        if(cnt == n){printf("NULL");}
        else{
            for(int i=0;i < n;i ++){
                if(aa[i] ==0){printf("%d ",a[i]);}
                
            }
        }
        printf("\n");
    }

    //quick_sort();
  

    //printf();
  return 0;
}

