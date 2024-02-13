#include <bits/stdc++.h>

using namespace std;

template <typename T>

class node {
public:
    T val;
    node<T>* next = nullptr;
};

template <typename T>

class linkedlist {
public:
    node<T>* head;

    linkedlist() {
        head = new node<T>();
    }

    void insert(T val) {
        node<T>* newNode = new node<T>();
        newNode->val = val;
        newNode->next = head->next;
        head->next = newNode;
    }

    void remove(int index) {
        int i = 0;
        node<T>* current = head;
        while (i < index && current) {
            i++;
            current = current->next;
        }
        if (current)
            current->next = current->next->next;
    }

    void print() {
        node<T>* current = head->next;
        while (current) {
            cout << current->val;
            if (current->next)
                cout << " -> ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    linkedlist<int> a;
    a.insert(5);
    a.insert(4);
    a.insert(300);
    a.insert(2);
    a.print();
    a.insert(1);
    a.insert(0);
    a.print();
    a.remove(5);
    a.remove(0);
    a.print();
    return 0;
}
