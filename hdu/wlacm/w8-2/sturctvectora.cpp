#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

typedef struct array : vector<int> {
  array append(int n) {
    array t(*this);
    t.push_back(n);
    return t;
  }
  array remove(int i) {
    array t(*this);
    t.erase(t.begin() + i);
    return t;
  }
} aa;

void f(aa l, aa r) {
  if (!r.size()) {
    for (int i = 0; i < l.size(); i++) {
      printf("%5d", l[i]);
    }
    cout << endl;
    return;
  }
  for (int i = 0; i < r.size(); i++) {
    f(l.append(r[i]), r.remove(i));
  }
  return;
}

int main() {
  int n;
  ios::sync_with_stdio(false);
  cin.tie(0);
  scanf("%d", &n);
  aa l, r;
  long start = clock();
  for (int i = 0; i < n; i++) {
    r.push_back(i + 1);
  }
  f(l, r);
  long end = clock();
  cout << double(end - start) * 1000 / CLOCKS_PER_SEC << "ms" << endl;
  // f(n);

  return 0;
}
