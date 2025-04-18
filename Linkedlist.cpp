#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node()
    {
        data = 0;
        next = nullptr;
    }
};

class LinkedList{
    Node *head;
    Node *tail;
    int size;
public:
    LinkedList()
    {
        head = nullptr;
        tail = nullptr;
        size=0;
    }
    ~LinkedList(){delete head;}
    void insert(int data)
    {
        Node *newNode = new Node;
        newNode->data = data;
        newNode->next = nullptr;
        if(head == nullptr)
            head = newNode;
        else
            tail->next = newNode;
        tail = newNode;
        size++;
    }
    void print()
    {
        Node *temp = head;
        if(temp == nullptr)
        {
            cout<<"List is Empty"<<endl;
            return;
        }
        else
        {
            cout<<endl<<"Size: "<<size<<endl;
        }
        cout<<":: ";
        while(temp != nullptr)
        {
            cout<<temp->data<<"-->";
            temp = temp->next;
        }
        cout<<" ::"<<endl;
    }
    void deleteData(int index)
    {
        if(size == 0)
        {
            cout<<"List is empty"<<endl;
            return;
        }
        if(index > size)
        {
            cout<<"Index is out of range"<<endl;
        }
        else if(index ==1)
        {
            Node *temp1 = head;
            head = head->next;
            delete temp1;
            return;
        }
        else if(index>1 && index<=size)
        {
            Node *temp1 = head;
            Node *temp2;
            for(int i=0;i<index-1;i++)
            {
                temp2 = temp1;
                temp1 = temp1->next;
            }
            
            temp2->next = temp1->next;
            delete temp1;
        }
        size--;
    }
};

int main()
{
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);
    list.insert(60);
    list.insert(70);
    list.insert(80);
    list.insert(90);
    list.insert(100);
    list.print();
    list.deleteData(10);
    list.print();
    return 0;
}