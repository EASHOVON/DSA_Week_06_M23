#include <bits/stdc++.h>
#include "MYSTACK.h"
using namespace std;
int main()
{
    Stack<string> st;

    st.Push("Shovon");
    st.Push("Rakib");
    st.Push("Rubel");
    st.Push("Shohel");

    while (!st.Empty())
    {
        cout << st.Pop() << endl;
    }

    cout << st.Size() << endl;
    if (!st.Empty())
        cout << st.Top() << endl;
    return 0;
}