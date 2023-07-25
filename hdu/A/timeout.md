

# 7-15   第一周



## questions

-   审题问题（英文）
    -   由于是英文的，在不使用翻译的情况下会导致翻译不准，将原本审题逻辑不好的问题暴露出来了
-   代码问题 ---->>导致编码速度实在是太慢了
-   心态问题



卡题 ： 

入门练习 J，L 全部是快排的题目，（因为qsort用习惯了，quick sort 好久没有再写过了）





## slove

### 入门练 

$==I==$

````C++
#include<iostream>

using namespace std;

const int N =1e6 + 10;
double a[N],per[N];

int main(){
  int t,n,b;
  int round =1;
  //t 是 数据量  n是parallel可以进行的个数，
  //b是数据量  也就是bandwidth  带宽
  
  while(~scanf("%d %d %d",&t,&n,&b)){
    if(!n && !t && !b){break;}
    double sum=0.0;
    int ss = 0;
    while(ss < t){
      cin >> a[ss] >> per[ss];
      sum += a[ss] *(100 - per[ss]) / 100.00;
      //cout.precision(3);
      ss++;
  
    }
  
    double time = sum / b;
    printf("Case %d: %.2lf\n\n",round,time);


    /*
    cout << "Case " << round << ": ";
    cout.precision(2);	在cout里这个是可以调节小数的精度的，和print但是可以一样的但是就是i有麻烦，
并且debug（）用cerr输出应该就也可以使用了;
    cout << time <<endl<<endl;
      */
      round++;

  }
return 0;

}

````

i提其实很奇怪，就是这类体型总是有时候会想的很复杂，然后浪费很多时间，再次读题目或者是，别人谈论到之后，才发现不是我们所想的样子，可能跟英文题目有关，但是在中问题目里这些问题也是常见的情况。



==审题情况比较严重==



$==J==$

````c++
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

//cout 与 printf 在大数据量下，大概会差300ms吗？

````





$==L==$

`````	c++
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
        int aa[N]={0};//忘记了标记数组需要从新初始化
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


`````

## 

### atcoder

$==A==$

````c ++
#include<iostream>

using namespace std;

const int N = 1e5 + 10;

int d[N];

int main(){
  int n,p,q,min;
  cin >> n >> p >> q;
  min = p;
  while(n --){
    cin >> d[n];
    if(d[n]+q < min){min = d[n]+q;}
  }
  cout << min;
  return 0;
}
````



$==B==$  还没补题

```
```



### newcoder

$==A==$

````c ++
#include<iostream>
#define ll long long
using namespace std;
int main(){
  ll a,i;
  cin >> a;
  for( i = a*10;i <= a*10 + 9;i ++){
    if( i % 7 == 0){cout << i;return 0;}
  }
  return 0;
}
````





$==B==$

````c ++

#include<climits> //我这个头文件可以去看一眼。
#include<iostream>
#include<string>
#include<cmath>
#define ll long long
#define INF 0x3f3f3f3f3f

using namespace std;

string str;

int mmin(int a,int b){
  if(a <= b){return a;}
  else {return b;}

}

int main(){
  cin >> str;
  ll len=str.size();
  ll sum = 0,min = INT_MAX;
  
  for(int i = 'a';i <= 'z'; i ++ ){
    sum = 0;    
    for(int j = 0;j < len; j ++){
      sum += mmin( abs(i-str[j]),26-abs((i-str[j])));  
    }
    if(sum < min ){min = sum;}
 }
  cout << min;

  return 0;
}
  
//  for(int i = 0;i < len;i ++){

````

















### small tips



```c++
while(~scanf("%d %d",&a,&b) && (a || b)) 可能会导致超时相较于将条件判断放在while内
```

这是为啥么呢？

```c++
int a[N] ={0};//只有在初始化的值是0的时候，数组才能够被初始化，也就是才能够将，整个数组的值变成零;
```





quick sort

low 是 数组的下边界 high 是数组的上边界（从最大的范围开始操作，逐渐缩小范围）

-   找pivot 中心轴 也就是比较的点
-   依次比较，将小于pivot的数字和的放在前面，从数组第一个开始
-   然后第一次循进程束的话，开启下一次的进程，缩小范围，将以上一次的pivot作为分界点，这个时候的pivot该点，其实已经坐对了它该坐的位子，所以可以不用放在下一次的排序里。
-   然后逐渐将快速排序的范围缩小到1
-   别忘了 突出条件 right <= left (low >= high); 



````c++
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
    if(arr[pivot] > arr[j]){
      i ++;//i ++ 放在前面是为了避免放在后面的话导致将pivot值插入的位置不对;
      swap(&arr[j],&arr[i]);//数组加上其地址符之后才代表的是指针
    }
  }  
  swap(arr[high],arr[i+1]);//这个需要用low 后者 high 不能是用pivot因为pivot是比较的值而非 下标
  quick_sort(arr,low,i);
  quick_sort(arr,i+2,high);
  return ;
}
int a[10000];
int main(){
  int n,m;
  cin >> n;
  for(int i = 0;i < n;i ++){cin >>a[i];}
  quick_sort(a, 0,n-1);
  for(int i = 0;i < n;i ++){  cout << a[i] << " ";}
  return 0;
}

````







[quicksort](https://www.geeksforgeeks.org/quick-sort/)



### 下周计划





 



