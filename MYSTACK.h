#include <bits/stdc++.h>
using namespace std;

template <typename N>
class Node
{
public:
    N value;
    Node *Prev;
    Node *Next;
    Node(N val)
    {
        this->value = val;
        this->Prev = NULL;
        this->Next = NULL;
    }
};

template <typename S>
class Stack
{
    Node<S> *head;
    Node<S> *top;
    int count = 0;

public:
    Stack()
    {
        head == NULL;
        top = NULL;
    }

    // PUSH
    void push(S value)
    {
        Node<S> *newNode = new Node<S>(value);
        if (head == NULL)
        {
            head = top = newNode;
            count++;
            return;
        }
        top->Next = newNode;
        newNode->Prev = top;
        top = newNode;
        count++;
    }

    // POP

    void pop()
    {
        Node<S> *delNode = top;
        S delVal;
        if (head == NULL)
        {
            cout << "Stack Underflow" << endl;
            return delVal;
        }
        if (head == top)
        {
            head = top = NULL;
        }
        else
        {
            top = delNode->Prev;
            top->Next = NULL;
        }

        delVal = delNode->value;
        delete delNode;
        count--;
        return delVal;
    }

    // SIZE

    int size()
    {
        return count;
    }

    // TOP
    S Top()
    {
        if (top == NULL)
        {
            count << "Stack Underflow | There is no element at the Top" << endl;
        }
        else
        {
            return top->value;
        }
    }

    // Empty
    bool empty()
    {
        if (head == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};