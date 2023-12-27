#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    //   Node(){
    //     this->data = 0;
    //     this-> next = NULL;
    //   }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// insert at head

void insertAtHead(Node *&head, Node* tail, int data)
{
//check for empty linklist
    if(head == NULL){
         Node* newNode = new Node(data);
         head = newNode;
         tail = newNode;
         return;
    }
    Node *Newnode = new Node(data);

    Newnode->next = head;

    head = Newnode;

}

// insert at tail

void insertAtTail(Node *&tail,Node *&head, int data)
{
   // check for empty linklist
    if(tail == NULL){
         Node* newNode = new Node(data);
       
         tail = newNode;
         head = newNode;
         return;
    }

    Node *newNode = new Node(data);

    tail->next = newNode;

    tail = newNode;
//  if(tail == NULL){
//     //first Node aise create hogi
//     tail = newNode;
//     return;
    
// }
   
}

//Insert at positions

 int findLength(Node* &head){
     int len = 0;
     Node* temp = head;
     while (temp != NULL)
     {
        temp = temp->next;
        len ++;
     }
     return len;
        
    }

void insertAtPosition(int data, int position, Node* &head, Node* &tail){
   //check for empty linklist
    if(head == NULL){
         Node* newNode = new Node(data);
         head = newNode;
         tail = newNode;
         return;
    }

    if(position == 0){
        insertAtHead(head,tail,data);
        return;
    }

    int length = findLength(head);
    if(position >= length){
        insertAtTail(tail,head, data);
        return;
    }
     
     int count = 1;
     Node* prev = head;
     while(count < position-1)
{
     prev  = prev ->next;
     count ++;
}
    
     Node* curr = prev->next;
     Node* newNode = new Node(data);
       prev->next = newNode;
     newNode->next = curr;
     
     
}

void print(Node *&head)
{
   

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
     
        
    
}

void deleteAtHead(Node* &head){
 Node* temp = head;
 head = head->next;
 temp->next = NULL;
 delete temp;
 
}

void deleteAtTail( Node* &head, Node* &tail){
int len = findLength(head);
int i = 1;

    //find prev
    Node* prev = head;
    while(i<len-1){
        prev= prev->next;
        i++;
    }
    prev->next = NULL;

    Node* temp = tail;

    tail = prev;

    delete temp;

    return;
}

void deleteMiddle(Node* head, Node* tail, int position){
int i = 1;
Node* prev = head;
while(i < position -1){
     prev = prev->next;
}
Node* curr = prev->next;
prev->next = curr->next;
curr->next = NULL;
delete curr;

}


//check for empty linkliat

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

//  Node *first = new Node(10);
//     Node *second = new Node(20);
//     Node *third = new Node(30);
//     Node *fourth = new Node(40);
//     Node *fifth = new Node(50);

//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;

    // print(first);
    

    // insertAtHead(first, 90);
    //  insertAtTail(head ,100);
    // print(second);
    insertAtPosition(10,0,head,tail);
    insertAtPosition(1011,1,head,tail);
    insertAtPosition(10111,2,head,tail);
    insertAtPosition(1011111,3,head,tail);
    insertAtPosition(10111111,4,head,tail);
    // cout<<endl;
//        print(head);
// cout<<endl;
//        deleteAtHead(head);
//        deleteAtTail(head,tail);
              //print(tail);
              
              deleteMiddle(head,tail,2);
 print(head);
cout<<endl;
    return 0;
}