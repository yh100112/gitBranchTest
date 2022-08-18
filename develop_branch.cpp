#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int16_t> a;
  a.push_back(3);

  for (auto v : a)
    cout << v << endl;

  //update branch에서 업데이트만 해결
  cout << "update 해결!!" << endl;
}
