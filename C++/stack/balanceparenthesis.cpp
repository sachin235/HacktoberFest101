#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool are_pair(char opening,char closing)
{
    if(opening=='(' && closing==')')
    {
        return true;
    }
    else if(opening=='[' && closing==']')
    {
        return true;
    }
    else if(opening=='{' && closing=='}')
    {
        return true;
    }
    return false;

}

bool are_parenthesis_balanced(string exp)
{
    stack <char>s;
    for(int i=0;i<exp.length();i++)
    {
        if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{')
            {
                s.push(exp[i]);
            }
        else if(exp[i]==')' || exp[i]==']' || exp[i]=='}')
        {
            if(s.empty() || !are_pair(s.top(),exp[i]))
            {
                return false;
            }
            else
                s.pop();
        }
    }
    return s.empty()?true:false;
}


int main()
{
    string exp;
    cin>>exp;
    if(are_parenthesis_balanced(exp))
        cout<<"Balanced\n";
    else
        cout<<"Unbalanced\n";
    return 0;
}
