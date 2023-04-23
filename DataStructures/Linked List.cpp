#include<bits/stdc++.h>
using namespace std;

struct Node {
    int value{};
    Node* next = nullptr;
};

class LinkedList {
public:
    Node* head = new Node();

    explicit LinkedList(int val) {
        head->value = val;
    }

    void insertNodeEnd(int val) {
        Node* curr = head;
        while(curr->next != nullptr) {
            curr = curr->next;
        }
        Node* newNode = new Node();
        newNode->value = val;
        curr->next = newNode;
    }

    void insertNodeStart(int val) {
        Node* newNode = new Node();
        newNode->value = head->value;
        head->value = val;
        newNode->next = head->next;
        head->next = newNode;
    }

    void removeNode(int val) {
        if (head->value == val) {
            head->value = head->next->value;
            head->next = head->next->next;
            return;
        }
        Node* curr = head;
        while (curr->next != nullptr && curr->next->value != val) {
            curr = curr->next;
        }
        if (curr->next != nullptr && curr->next->value == val) {
            curr->next = curr->next->next;
        }
    }

    void printInOrder() {
        Node* curr = head;
        while(curr != nullptr) {
            cout << curr->value << " ";
            curr = curr->next;
        }
        cout << "\n";
    }

    void insert(int val, Node* curr) {
        Node* newNode = new Node();
        newNode->value = val;
        newNode->next = curr->next;
        curr->next = newNode;
    }

    void reverse() {
        Node* curr = head;
        Node* temp = curr->next;
        curr->next = nullptr;
        while(temp != nullptr) {
            Node* temp2 = temp->next;
            temp->next = curr;
            curr = temp;
            temp = temp2;
        }
        head = curr;
    }

    int length() {
        int ans = 0;
        Node* curr = head;
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

    auto ll = LinkedList(10);
    ll.insertNodeEnd(100);
    ll.insertNodeEnd(89);
    ll.insertNodeEnd(12);
    ll.insertNodeEnd(138);
    ll.insertNodeEnd(65);
    ll.insertNodeStart(28);
    ll.removeNode(100);
    ll.insert(32, ll.head);
    ll.printInOrder();
    ll.reverse();
    ll.printInOrder();
    cout << ll.length() << "\n";
}