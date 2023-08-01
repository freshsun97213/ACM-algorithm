#include <iostream>
#include <map>
#include <vector>

#define ll long long
#define de(x) cerr << #x << " " << x << endl;
using namespace std;

ll len; // 二叉树-----元素个数
/*
struct node{
  int w = 0;
  node *l = NULL,*r = NULL;
}nod;
*/
const int N = 1e6 + 10;
int tree[N];
void push(int x) {
  len++;
  tree[len] = x;
  int i = len;
  // de(tree[len]);
  // de(len);
  //  de(tree[1]);
  while (tree[i] < tree[i / 2] && i > 1) {
    swap(tree[i], tree[i / 2]);
    i /= 2; // 这里除去二 是整除一定几率可以表明的是 小根堆
    // 是在先填入左边 再填入右边的
    // 所以大小根堆删除不了指定的第几小的数字
  }
  //  de(tree[1]);
}
void pop() {
  //   de(tree[1]);
  tree[1] = tree[len];
  // de(tree[1]);
  // de(tree[len]);
  len--;
  // de(len);
  // de(tree[len]);
  int i = 1;
  while (i * 2 <= len) {
    int s = i * 2;
    if (s < len && tree[s + 1] < tree[s]) {
      s++;
    }
    if (tree[s] < tree[i]) {
      swap(tree[i], tree[s]);
      i = s;
    } else {
      break;
    }
    // 这个大小根堆，不需要完全的去符合升序和降序的标准
    //
    // if (tree[i * 2] < tree[i]) {
    //   swap(tree[i * 2], tree[i]);
    //   i *= 2;
    // } else {
    //   if (tree[i] > tree[i + 1]) {
    //     swap(tree[i + 1], tree[i]);
    //     i = i + 1;
    //   } else {
    //     return;
    //   }
    // }
  }
}

int main() {
  int n;
  cin >> n;
  while (n--) {
    int op;
    cin >> op;
    if (op == 1) {
      int x;
      cin >> x;
      push(x);
    } else if (op == 2) {
      cout << tree[1] << endl;
    } else {
      pop();
    }
  }

  return 0;
}
