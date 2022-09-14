#include <bits/stdc++.h>
#include "MYSTACK.h"
using namespace std;

void reverseSentence(string s)
{
    Stack<string> st;

    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (i < s.length() && s[i] != ' ')
        {
            word += s[i];
            i++;
        }

        st.Push(word);
    }

    while (!st.Empty())
    {
        cout << st.Top() << endl;
        st.Pop();
    }
}

int main()
{
    string s = "I am Shovon";
    reverseSentence(s);
    return 0;
}