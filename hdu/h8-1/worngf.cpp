
#include <iostream>
#include <map>
#include <vector>

#define ll long long

using namespace std;

ll len; // 二叉树-----元素个数
/*
struct node{
  int w = 0;
  node *l = NULL,*r = NULL;
}nod;
*/
const int N = 1e5 + 10;
int tree[N];
void push(int x) {
  tree[++len] = x;
  int i = len;
  if (tree[i] < tree[i / 2] && i > 1) {
    swap(tree[i], tree[i / 2]);
    i /= 2;
  }
}
void pop() {
  tree[1] = tree[len--];
  int i = 1;
  while (i * 2 < len) {
    if (tree[i * 2] < tree[i]) {
      swap(tree[i * 2], tree[i]);
      i *= 2;
    } else if (tree[i] > tree[i * 2 - 1]) {
      swap(tree[i * 2], tree[i]);
      i = i * 2 - 1;
    } else {
      return;
    }
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
