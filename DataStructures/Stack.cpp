#include<bits/stdc++.h>
using namespace std;

struct Node {
    int value{};
    Node* next = nullptr;
};

class Stack {
public:
   Node* root = nullptr;

   explicit Stack(int val) {
       root = new Node();
       root->value = val;
   }

   void add(int val) {
       if (root == nullptr) {
           root = new Node();
           root->value = val;
           return;
       }
       Node* newNode = new Node();
       newNode->value = root->value;
       root->value = val;
       newNode->next = root->next;
       root->next = newNode;
   }

   int pop() {
       if (root->next == nullptr) {
            int val = root->value;
            root = nullptr;
            return val;
       }
       int val = root->value;
       root = root->next;
       return val;
   }

   void printInOrder() const {
       Node* curr = root;
       while(curr != nullptr) {
           cout << curr->value << " ";
           curr = curr->next;
       }
       cout << "\n";
   }

   int length() const {
       int ans = 0;
       Node* curr = root;
       while(curr != nullptr) {
           ans++;
           curr = curr->next;
       }
       return ans;
   }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    auto s = Stack(63);
    s.add(12);
    s.add(91);
    s.add(57);
    s.add(34);
    s.add(79);
    cout << s.pop() << "\n";
    cout << s.pop() << "\n";
    s.printInOrder();
}
