#include <iostream>
#include <stack>
using namespace std;
int precedance(char ch)
{

    if (ch == '^')
    {
        return 3;
    }
    else if (ch == '*' || ch == '/')
    {
        return 2;
    }
    else if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string intopost(string str)
{
    string res;
    stack<char> stc;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {
            res += str[i];
        }
        else if (str[i] == '(')
        {
            stc.push(str[i]);
        }
        else if (str[i] == ')')
        {
            while (!stc.empty() && stc.top() != '(')
            {
                stc.pop();
                if (!stc.empty())
                {
                    stc.pop();
                }
            }
        }
        else
        {
            while (!stc.empty() && precedance(stc.top()) >= precedance(str[i]))
            {
                res += stc.top();
                stc.pop();
            }
            stc.push(str[i]);
        }
    }
    while (!stc.empty())
    {
        res += stc.top();
        stc.pop();
    }
    return res;
}
int main()
{
    string k = "a^b*c-d-e-f/e/(g-h)";
    cout << "The converted postfix expression is" << endl;
    cout << intopost(k);
    return 0;
}