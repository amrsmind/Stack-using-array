#include <iostream>

using namespace std;

class Stack{
private:
    int *arr = new int;
    int top;
    int size;
public:
    Stack(){
    cout<<"can't be implemented without determine the size"<<endl;
    }
    Stack(int s){
     top=-1;
     size = s;
     arr = new int[size];
    }
    void push(int value){
    if(top==size-1){
        cout<<"stack is full "<<endl;
        return;
    }
    top++;
    arr[top] = value;
    }
    void pop(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
        return;
    }
    top--;
    }
    void Top(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
        return;
    }
    cout<<arr[top]<<endl;
    }
};

int main()
{
    Stack s(5);
    s.push(3);
    s.push(9);
    s.push(12);
    s.push(100);
    s.push(37);
    s.pop();
    s.pop();
    s.Top();
    s.push(30);
    s.push(45);


    return 0;
}
