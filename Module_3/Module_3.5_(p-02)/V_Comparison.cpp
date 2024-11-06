#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
   int n, m;
   char a;
   cin >> n >> a >> m;

   if (a == '<' && n < m) {
      cout << "Right" << endl;
   } else if (a == '<' && n > m) {
      cout << "Wrong" << endl;
   } else if (a == '>' && n > m) {
      cout << "Right" << endl;
   } else if (a == '>' && n < m) {
      cout << "Wrong" << endl;
   } else if (a == '=' && n == m) {
      cout << "Right" << endl;
   } else {
      cout << "Wrong" << endl;
   }

   return 0;
}
