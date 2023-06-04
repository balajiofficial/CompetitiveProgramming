#include<bits/stdc++.h>
using namespace std;

struct Node {
    int val{};
    vector<Node*> neighbors;
};

class Graph {
private:
    set<Node*> visited;
    queue<Node*> temp;

    void dfs(Node*& node) {
        visited.insert(node);
        cout << node->val << " ";
        for (auto e : node->neighbors) {
            if (visited.find(e) == visited.end()) {
                dfs(e);
            }
        }
    }

    void bfs(Node* &node) {
        visited.insert(node);
        cout << node->val << " ";
        for (auto e : node->neighbors) {
            temp.push(e);
        }
        while(!temp.empty()) {
            Node* curr = temp.front();
            temp.pop();
            cout << curr->val << " ";
            visited.insert(curr);
            for (auto e : curr->neighbors) {
                if (visited.find(e) == visited.end()) {
                    temp.push(e);
                }
            }
        }
    }

public:
    vector<Node*> nodes;

    void newNode(int val) {
        for (auto e : nodes) {
            if (e->val == val) {
                return;
            }
        }
        Node* node = new Node();
        node->val = val;
    }

    void join(int val1, int val2) {
        Node* node1;
        Node* node2;
        for (auto e : nodes) {
            if (e->val == val1) {
                node1 = e;
            }
            if (e->val == val2) {
                node2 = e;
            }
        }
        node1->neighbors.push_back(node2);
        node2->neighbors.push_back(node1);
    }

    void join(Node*& node1, Node*& node2) {
        node1->neighbors.push_back(node2);
        node2->neighbors.push_back(node1);
    }

    void printDFS() {
        if (nodes.empty()) return;
        visited = {};
        dfs(nodes[0]);
        cout << "\n";
    }

    void printDFS(Node*& node) {
        visited = {};
        dfs(node);
        cout << "\n";
    }

    void printBFS(Node* &node) {
        visited = {};
        temp = {};
        bfs(node);
        cout << "\n";
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

}
