// Write a program for Mathematical Expression Evaluation in
// Calculator: Implement a calculator that supports evaluation of
// complex arithmetic expressions using stacks for operands and
// operators.

#include <bits/stdc++.h>
using namespace std;



bool isoperator(char op)
{
    if (op == '+' || op == '-' || op == '*' || op == '/')
        return true;
    return false;
}

int priority(char op)
{
    if (op == '-')
        return 1;
    else if (op == '+')
        return 2;
    else if (op == '*')
        return 3;
    else if (op == '/')
        return 4;
    return 0;
}

void EvaluateInfix(stack<int> &ist, stack<char> cst, string s)
{
    int n = s.size(), op = 0;
    for (int i = 0; i < n; i++)
    {
        op = priority(s[i]);
        if (isoperator(s[i]))
        {
            cst.push(s[i]);
            int n1 = ist.top()-'0';
            ist.pop();
            int n2 = s[++i]-'0';
            int eval = 0;
            switch (op)
            {
            case 1:
            {
                eval = n1 - n2;
                ist.push(eval);
                break;
            }
            case 2:
            {
                eval = n1 + n2;
                ist.push(eval);
                break;
            }
            case 3:
            {
                eval = n1 * n2;
                ist.push(eval);
                break;
            }
            case 4:
            {
                eval = n1 / n2;
                ist.push(eval);
                break;
            }
            }
        }else if(s[i]>='0' && s[i]<='9'){
            ist.push(s[i]);
        }
    }
}

int main()
{
    stack<int> ist;
    stack<char> cst;
    string s;
    cout << "Enter expression: ";
    getline(cin, s);
    EvaluateInfix(ist, cst, s);
    while(!ist.empty()){
        cout<<ist.top()<<" ";
        ist.pop();
    }
    cout<<endl;
    while(!cst.empty()){
        cout<<cst.top()<<" ";
        cst.pop();
    }
    // cout<<ist.top();
    return 0;
}