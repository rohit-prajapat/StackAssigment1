// Remove kth element from top in a given stack.
#include<iostream>
#include<stack>
using namespace std;

void input(stack<int>&s,int size)
{
    for(int i=0; i<size; i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
}

void display(stack<int>s)
{
    cout<<"[";
    while(s.size())
    {
        cout<<s.top()<<",";
        s.pop();
    }
    cout<<"\b]";
}

void remove(stack<int>&s,int key)
{
    stack<int>temp;
    bool flag = 0;

    while(s.size())
    {
        if(s.top() == key)
        {
            flag = 1;
            break;
        }
        temp.push(s.top());
        s.pop();

    }

    if(flag == 0)
    {
        cout<<"Key is not Present in stack ";
        return ;
    }

    s.pop();

    while(temp.size())
    {
        s.push(temp.top());
        temp.pop();
    }
    cout<<endl;
    return ;
}

int main()
{

    stack<int>s;
    cout<<"Enter the size of Stack : ";
    int size;
    cin>>size;

    cout<<"Enter elements : ";
    input(s,size);

    int key;
    cout<<"Enter key Value : ";
    cin>>key;
    display(s);
    remove(s,key);
    display(s);
}