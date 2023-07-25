#include<iostream>


using namespace std;


void swap(int *a,int *b){
  int t = *a;
  *a =*b;
  *b = t;
  return ;
}

void quick_sort(int arr[],int low,int high){
  if( low >= high) {return ;}// 别忘了推出条件
  int pivot = high;
  int i =low -1;//和下面i ++ 共同为了一个作用
  for(int j = low;j < high;j ++){
    if(arr[pivot] < arr[j]){
      i ++;//i ++ 放在前面是为了避免放在后面的话导致将pivot值插入的位置不对;
      swap(&arr[j],&arr[i]);//数组加上其地址符之后才代表的是指针
    }
  }
  
  swap(arr[high],arr[i+1]);//这个需要用low 后者 high 不能是用pivot因为pivot是比较的值而非 下标

  quick_sort(arr,low,i);
  quick_sort(arr,i+2,high);
  return ;
}

int a[100000010];

int main(){
  int n,m;
  while(~scanf("%d %d",&n,&m)){
    //cin >> n >> m;
    for(int i = 0;i < n;i ++){scanf("%d",&a[i]);}
    quick_sort(a, 0,n-1);
    
    for(int i = 0;i < m;i ++){
      if(i == m-1 ){printf("%d",a[i]);break;}
      printf("%d ",a[i]);
    }
    printf("\n");
    //for(int i = 0;i < n;i ++){  cout << a[i] << " ";}
  
  }

  return 0;
}


