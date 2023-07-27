// map::find
#include <iostream>
#include <map>

int main() {
  std::map<int, int> mymap;
  // std::map<char, int>::iterator it;
  mymap.emplace(1, 1);

  mymap.emplace(5, 2);
  mymap.emplace(4, 3);
  mymap.emplace(3, 4);
  mymap.emplace(2, 5);

  // mymap['a'] = 50;
  // mymap['b'] = 100;
  // mymap['c'] = 150;
  // mymap['d'] = 200;
  //
  // auto it = mymap.find('b');
  // if (it != mymap.end())
  // myma.erase(it);

  // print content:
  std::cout << "elements in mymap:" << '\n';
  std::cout << "a => " << mymap.find(1)->second << '\n';
  std::cout << "c => " << mymap.find(2)->second << '\n';
  std::cout << "d => " << mymap.find(3)->second << '\n';

  return 0;
}

// #include <iostream>
// #include <map>
//
// using namespace std;
//
// int main() {
//   map<int, int> mp;
//   mp.emplace(1);
//
//   mp.emplace(9);
//   mp.emplace(8);
//   mp.emplace(7);
//   mp.emplace(6);
//   mp.emplace(5);
//   mp.emplace(4);
//   mp.emplace(3);
//   mp.emplace(2);
//
//   if (mp.find(7) != mp.end()) {
//     auto a = mp.find(7);
//     cout << a->first << a->second << endl;
//   }
//
//   return 0;
// }
