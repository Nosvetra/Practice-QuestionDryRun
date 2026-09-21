#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() {
        head = nullptr;
    }

    // Insert at end
    void insert(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
            newNode->next = head;
            return;
        }

        Node* temp = head;

        while (temp->next != head) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = head;
    }

    // Delete by value
    void deleteNode(int value) {
        if (head == nullptr)
            return;

        Node *curr = head, *prev = nullptr;

        // deleting head
        if (head->data == value) {

            // only one node
            if (head->next == head) {
                delete head;
                head = nullptr;
                return;
            }

            Node* last = head;
            while (last->next != head) {
                last = last->next;
            }

            last->next = head->next;

            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        do {
            prev = curr;
            curr = curr->next;
        } while (curr != head && curr->data != value);

        if (curr == head) {
            cout << "Value not found\n";
            return;
        }

        prev->next = curr->next;
        delete curr;
    }

    void display() {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;

        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);

        cout << endl;
    }
};

int main() {
    CircularLinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    cout << "List: ";
    list.display();

    list.deleteNode(30);

    cout << "After deleting 30: ";
    list.display();

    return 0;
}