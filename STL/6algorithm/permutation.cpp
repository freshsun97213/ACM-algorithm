#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>

using namespace std;
template <class Bidirectionaliterator>
bool permutation(Bidirectionaliterator first, Bidirectionaliterator last) {
  if (first == last) {
    return false;
  }
  Bidirectionaliterator i = first;
  ++i; // 单加一次，如果只有一个字符，直接不进行排列
  // 不能是数字，应为指针指向数字的话，会导致
  if (i == last)
    return false;
  i = last;
  --i;
  for (;;) {
    Bidirectionaliterator ii = i;
    --i;
    if (*i < *ii) {
      Bidirectionaliterator j = last;
      while (!(*i < *--j))
        ;
      iter_swap(i, j);
      reverse(ii, last);
      return true;
    }
    if (i == first) {
      reverse(first, last);
      return false;
    }
  }
}

int main() {
  string s;
  int a;

  cin >> a;
  do {
    cout << a << endl;

  } while (permutation(s.begin(), s.end()));
  return 0;
}
