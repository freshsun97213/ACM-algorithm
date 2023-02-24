#include<iostream>

//归并排序的思想也就是    分治

using namespace std;

const int N = 1000010;

int n;
int q[N],ans[N];


void merge(int q[],int r,int l);

int main(){
    scanf("%d",& n);
    for(int i =0;i < n;i ++){
        scanf("%d",&q [i]);
    }

    merge(q,0,n);

    for(int i =0;i < n;i ++){
        printf("%d ",q [i]);
    }
    return 0;

}

int k =0;

void merge(int q[],int l, int r){
    if(l >= r) return ;
    
    int mid = (r + l) /2 ;
    merge (q,l,mid);
    merge(q,mid,r);
    int i=l,j=mid + 1;
    while(i <= mid && j <= r){
        if(q[i] < q[j]){
            ans[k]=q[i];
            k ++;
            i ++;
        }
        else{
            ans[k]=q[j];
            k ++;
            j ++;
        }
        while(i <= mid){
            ans[k]=q[i];
            k ++;
            i ++;
        }
    while(j <= r){
            ans[k]=q[i];
            k ++;
            j ++;
        }
    }
    for(int i =l,j = 0;i <= r;j++,i++){q[i] = ans[j];}
}