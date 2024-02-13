#include <bits/stdc++.h>

using namespace std;


bool open(char x) {
    if(x =='('||x=='{'||x=='[')
        return true;
    else
        return false;
}

bool same(char past, char temp)
{
    if(past == '(' && temp ==')')
        return true;
    if(past == '[' && temp ==']')
        return true;
    if(past == '{' && temp =='}')
        return true;
    else
        return false;
}


string isBalanced(string s) {
        stack<char> a;
        bool flag = false;
        string l;
        cin >> l;
        if (l.length()%2)
            return "NO";
        for (auto temp: l) {
            if (open(temp))
                a.push(temp);
            else {
                char past = a.top();
                if (!a.empty())
                    a.pop();
                else {
                    flag = true;
                    break;
                }
                if (same(past,temp))
                    continue;
                else {
                    flag = true;
                    break;
                }
            }
        }
        if (!a.empty())
            flag = true;
        if (flag)
            return "NO";
        else
            return "YES";
}

int main() {
    string a = isBalanced("[{[{}}]}]");
    cout << a << endl;
}