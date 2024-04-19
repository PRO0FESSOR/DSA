#include<iostream>
using namespace std;

class Stack {
    //properties

    public:
        int * arr;
        int size;
        int Top;

    //constructors

    Stack(int data)
    {
        cout<<"called"<<endl;
        arr =   new int [size];
        this->size=data;
        Top = -1;
    }

    //functions

    void push(int data){

        if(Top==size-1)
        {
            cout<<"stack overflowed"<<endl;
        }

        Top++;
        arr[Top] = data;

    }

    void pop(){

        if(Top==-1)
        {
            cout<<"No value in stack exist"<<endl;
        }

        Top--;

    }

    int top(){

        if(Top==-1)
        {
            cout<<"no value exist in stack"<<endl;
            return -1;
        }
        else{
            return arr[Top];
        }
    }

    

    void Size(){
        cout<<"size of stack is -->"<<size<<endl;
    }

    bool empty(){

        if(Top==-1)
        {
            return true;
        }
        else{
            return false;
        }

    }

};

int main()
{

    Stack * s = new Stack(5);

    s->push(2);
    s->push(2);
    s->push(2);
    s->push(2);
    s->push(2);

    while(!s->empty())
    {
        cout<<s->top()<<endl;
        s->pop();
    }

    s->Size();
    

    

    return 0;
}