#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};
Node *head = nullptr;

int main()
{
    bool a = true;
    while (a)
    {
        int userChoice;
        cout << "what do you want to do ?" << endl
             << "1. Create a linked list" << endl
             << "2. Display the linked list" << endl
             << "3. Exit" << endl;
        cin >> userChoice;
        switch (userChoice)
        {
        case 1:
        {
            int noOfNodes, userData;
            cout << "Enter the Number of Nodes you want to add : ";
            cin >> noOfNodes;
            for (int i = 0; i < noOfNodes; i++)
            {
                cout << "Enter the No. you want to add: ";
                cin >> userData;
                Node *newNode = new Node(userData);
                if (head == nullptr)
                {
                    head = newNode;
                    continue;
                }
                Node *temp = head;
                while (temp->next != nullptr)
                {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
            break;
        }

        case 2:
        {
            Node *temp = head;
            while (temp != nullptr)
            {
                cout << temp->data << "->";
                temp = temp->next;
            }
            break;
        }
        case 3:
        {
            a = false;
            break;
        }
        }
    }
    return 0;
}