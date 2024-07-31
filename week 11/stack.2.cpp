#include<iostream>
using namespace std;


class Stack{
public: // array based contigious based memeory legaa
  
  int* arr;
  int size;
  int top;

  Stack(int capacity){
    arr = new int[capacity];
    size = capacity;
    top = -1;
  }


void push(int val){
    if(top == size-1){
        //Stack overflow
        cout << "Stack overflow" << endl;
    }
    else{
        //normal case
    top++;
    arr[top] = val;
    }
}

void pop(){
if(top == -1){
    //stack is empty
   
    cout << "Stack Underflow"
   }
   else{
    arr(top) = -1;
    top--;
}
}


int getSize(){
return top+1;

}


bool isEmpty(){
if(top == -1){
    return true;

}
else{
    return false;
}

}


int getTop(){
if(top == -1){
    cout << "There is no element at the top, as stack is empty";
    return -1;
}
}

void print(){
    cout << "Print Stack  "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    } cout <<
    
}

};

int main(){

Stack s(5);
s.print();
s.print();
s.push(10);
s.push();
s.push(20);
s.push();
s.push(30);
s.push();
s.push(40);
s.push();
s.push(50);
s.push();
s.push(60);
s.push();

cout << s.getTop() << endl;
cout << s.getSize() << endl;
cout << s.isEmpty() <<endl;

s.pop();
s.print();

s.pop();
s.print();

s.pop();
s.print();

s.pop();
s.print();

s.pop();
s.print();

s.pop();
s.print();
  
   cout << s.getSize();

return 0;
}