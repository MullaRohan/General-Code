#include <bits/stdc++.h>
#define null NULL
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = null;
    }
};
void insert_val(Node *&head, int val)
{
    Node *newnode = new Node(val);
    if (head == null)
    {
        head = newnode;
        cout << "Added to List" << endl
             << endl;
        return;
    }
    Node *tmp = head;
    while (tmp->next != null)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
    cout << "Added to List" << endl
         << endl;
}
void print_list(Node *head)
{
    cout << "Your Link List: ";
    Node *tmp = head;
    while (tmp != null)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void insert_at_pos(Node *&head, int pos, int val)
{
    Node *newnode = new Node(val);
    if (pos == 0)
    {
        newnode->next = head;
        head = newnode;
        cout << "Added at the " << pos << "index" << endl;
        return;
    }
    Node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
        if (tmp == null)
        {
            cout << "Invalid Position" << endl;
            return;
        }
    }

    newnode->next = tmp->next;
    tmp->next = newnode;
    cout << "Added at the " << pos << " index" << endl;
}
void delete_node(Node *&head, int pos)
{
    if (pos == 0)
    {
        Node *tmp = head;
        head = head->next;
        delete tmp;
        cout << "Deleted " << pos << " index" << endl;
        return;
    }
    Node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
        if (tmp == null)
        {
            cout << "Invalid Index" << endl;
            return;
        }
    }
    Node *deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
    cout << "Deleted " << pos << " index" << endl;
}
int main()
{
    Node *head = null;
    while (true)
    {
        cout << "1. Insert Value" << endl;
        cout << "2. Insert at position" << endl;
        cout << "3. Delete Value" << endl;
        cout << "4. Print Link List" << endl;
        cout << "5. Terminate Program" << endl;
        cout << "Enter your choice: ";
        int val;
        cin >> val;
        if (val == 1)
        {
            cout << "Enter a value: ";
            int val;
            cin >> val;
            insert_val(head, val);
        }
        else if (val == 2)
        {
            int pos, val;
            cout << "Enter index: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> val;
            insert_at_pos(head, pos, val);
        }
        else if (val == 3)
        {
            int pos;
            cout << "Enter index to delete: ";
            cin >> pos;
            delete_node(head, pos);
        }
        else if (val == 4)
        {
            print_list(head);
        }
        else if (val == 5)
        {
            cout << endl
                 << "___Program___Terminated___" << endl
                 << endl;
            break;
        }
        else
        {
            cout << endl
                 << "Invalid Choice" << endl
                 << endl;
        }
    }
    return 0;
}
