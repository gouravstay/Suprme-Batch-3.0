#include<iostream>
using namespace std;


class Node{
public:
    int data;
    Node* next; 


//constuctor 
Node(int value){
    this->data = value;
    this->next = NULL;
}


};



int main(){
    //stack memory
    // Node first;
    //Dynamic mem
Node* first = new Node(10);

return 0;
}