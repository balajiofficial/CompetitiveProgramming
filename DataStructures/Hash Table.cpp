#include<bits/stdc++.h>
using namespace std;

// One possible implementation of a HashTable with average case O(1) and absolute worst case O(n)
// Space is O(1)
 class HashTable {
 public:
     vector<pair<string, int>> table[260][27];

     void insert(string key, int value) {
         int ans = 0;
         for (char e : key) {
             ans += (e - 'a' + 1);
         }
         table[ans%260][key[0] - 'a' + 1].emplace_back(key, value);
     }

     int get(string key) {
        int ans = 0;
        for (char e: key) {
            ans += (e - 'a' + 1);
        }
        vector<pair<string, int>> v = table[ans%260][key[0] - 'a' + 1];
        for (const auto& e : v) {
            if (e.first == key) {
                return e.second;
            }
        }
        return -1;
     }
 };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    auto ht = HashTable();
    ht.insert("million", 1000000);
    ht.insert("quartet", 4);
    ht.insert("fifty", 50);
    ht.insert("dozen", 12);
    cout << ht.get("million") << "\n";
    cout << ht.get("fifty") << "\n";
    cout << ht.get("dozen") << "\n";
}
