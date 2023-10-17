#include<iostream>
using namespace std; 

class stacks{
    int *arr;
    int front;
    int rear;
    int top;
    int size;

    public:

    stacks(int data){
        size = 5;
        arr = new int[size];
        top = front = rear = -1;
        
        
    }

    void push(int data){
        if(front > rear){
            cout << "stack is full"<<endl;
        }
        front++;
        rear++;
        arr[rear] = data;
    }
};