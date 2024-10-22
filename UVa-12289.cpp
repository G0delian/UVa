#include <bits/stdc++.h>

using namespace std;

int main() {
  map<string, int> nums;

  for (int i = 0; i < 26; ++i) {
    string one = char(97 + i) + string("ne");              nums[one] = 1;
           one = string("on") + char(97 + i);              nums[one] = 1;
           one = string("o") + char(97 + i) + string("e"); nums[one] = 1;
  }

  for (int i = 0; i < 26; ++i) {
    string two = char(97 + i) + string("wo");              nums[two] = 2;
           two = string("tw") + char(97 + i);              nums[two] = 2;
           two = string("t") + char(97 + i) + string("o"); nums[two] = 2;
  }

  for (int i = 0; i < 26; ++i) {
    string three = char(97 + i) + string("hree");              nums[three] = 3;
           three = string("t") + char(97 + i) + string("ree"); nums[three] = 3;
           three = string("th") + char(97 + i) + string("ee"); nums[three] = 3;
           three = string("thr") + char(97 + i) + string("e"); nums[three] = 3;
           three = string("thre") + char(97 + i);              nums[three] = 3;
  }

  int tt;

  cin >> tt;

  while (tt--) {
    string digit;
    cin >> digit;
    assert(nums.find(digit) != nums.end());
    cout << nums[digit] << '\n';
  }

  return 0;
}
