#include <iostream>
using namespace std;

struct Node
{
    Node* next;
    int data;
};

class LinkedList{
public:
    LinkedList():head(0), tail(0){};
    ~LinkedList();

    void push_back(int val);
    void reverse();
    void display() const;
private:
    Node * head;
    Node * tail;
};

void LinkedList::push_back(int val)
{
    Node * newNode = new Node;

    newNode->data = val;
    newNode->next = 0;

    if(tail==0)
    {
        head = tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

LinkedList::~LinkedList()
{
    Node * tmp;
    while(head)
    {
        tmp = head;
        head = head->next;
        delete tmp;
    }
}
//---------------------------------------//

void LinkedList::display() const
{
    Node * current = head;

    while(current)
    {
        cout<<current->data<<' ';
        current = current->next;
    }
}

void LinkedList::reverse()
{
    if (head == 0)
        return;

    tail = head;

    Node * current = head->next;
    Node * right;

    while(current)
    {
        right = current->next;

        current->next = head;
        head = current;
        current = right;
    }

    tail->next = 0;
}

int main()
{
    LinkedList intList;

    intList.push_back(4);
    intList.push_back(1);
    intList.push_back(7);

    cout << "Normal: ";
    intList.display();

    intList.reverse();

    cout << "\nReversed: ";
    intList.display();

    return 0;
}