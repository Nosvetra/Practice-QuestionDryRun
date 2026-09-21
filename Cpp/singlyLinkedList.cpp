#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = nullptr;
    }
};

node *head = nullptr;

void showLinkedList()
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
};

int main()
{
    int userData, noOfNodes;
    cout << "Enter How many values you want to add : ";
    cin >> noOfNodes;
    for (int i = 0; i < noOfNodes; i++)
    {
        cout << "Enter the data to add in Linked List : ";
        cin >> userData;
        node *newNode = new node(userData);
        if (head == NULL)
        {
            head = newNode;
            continue;
        }
        node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    showLinkedList();

    return 0;
}