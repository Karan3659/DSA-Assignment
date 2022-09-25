/* [Question.1] While traversing a single-circular linked list, which condition establishes that the traversing element/variable has reached the first element? */

//[Ans.1]
//Lets take an example to analyse how a circular linked list works
#include <iostream>
using namespace std;
//Creating Node class
class Node{
    //Creating class objects
    public:
    int data;
    Node*next;
    //Calling Node constructor
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
//Function to insert a node at end on linked list
void insert(Node*&head,int data){
    Node*current=head;
    Node*new_node=new Node(data);
    if(current==NULL){head=new_node;new_node->next=head;return;}
    while(current->next!=head){current=current->next;}   //This condition establishes that the traversing element(temp) has reached the first element
    current->next=new_node;
    new_node->next=head;
}
//Function to print elements of linked list from head to the last node.
void printlist(Node*&head){
    Node*current=head;
    do{cout<<current->data<<"->";current=current->next;}
    while(current!=head);
}

int main(){
    Node*head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    printlist(head);
}
/*
With reference to above example of circular linked list.
Line 24 i.e. while(temp->next!=head){temp=temp->next;} establishes that the traversing element/variable has reached the first element.
We Know that in circular linked list last node of linked list points to head of that linked list, hence we can check if any node points to head of linked list then that node is the end of circular linked list.
*/


/*[Question.2]  What are the practical applications of a circular linked list? (Try to find applications in your respective fields).
Practical applications of circular linked list are :

1)Multiplayer Games: All the Players are kept in a Circular Linked List and the pointer keeps on moving forward as a player's chance ends.
2)Circular lists are used in applications where the entire list is accessed one-by-one in a loop.
3)Computing Resources: Circular Linked Lists is used to manage the computing resources of the computer.
4)It is also used by the Operating system to share time for different users, generally uses a Round-Robin time-sharing mechanism.3)Fionacci Heap: Circular Linked List is also used in the implementation of advanced data structures such as a Fibonacci Heap.
5)Computer Networking:Circular linked list is also used in computer networking for token scheduling.
6)Implementation of Advanced data structures like Fibonacci Heap
7)Implementation of Data Structure: Data structures such as stacks and queues are implemented with the help of the circular linked lists.
8)Audio/Video Streaming: Circular linked list is also used in audio and video streaming,for ex. when one copmlete audio list finishes playing in music player then it again starts playing from start.
9)The browser cache which allows you to hit the BACK button
10)Undo functionality in Photoshop or Word
11)Circular linked lists are used in Round Robin Scheduling
12)Circular linked list used Most recent list (MRU LIST)


Karan Nanda
21105054
ECE
*/
