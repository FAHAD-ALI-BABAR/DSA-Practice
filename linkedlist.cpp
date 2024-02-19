#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int data) {
        value = data;
        next = NULL;
    }
    
};
int insertatstart(Node* &head,int value)
    {
        Node* new_node=new Node(value);
        new_node->next=head;
        head=new_node;
    }
    int insertattail(Node* &head,int value){
        Node* new_node=new Node(value);
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }
    int insertatanypos(Node* &head,int value,int pos){
        Node* new_node=new Node(value);
        Node* temp=head;
        int curr_pos=0;
        while(curr_pos!=pos-1){
            temp=temp->next;
            curr_pos++;
        }
        new_node->next=temp->next;
        temp->next=new_node;
    }
    int updateatpos(Node* &head,int value,int pos){
        Node* temp=head;
        int curr_pos=0;
        while(curr_pos!=pos){
            temp=temp->next;
            curr_pos++;
        }
        temp->value=value;
    }
    int deleteatstart(Node* &head){
        Node* temp=head;
        head=head->next;
        free(temp);
    }
    int deleteatend(Node* &head){
        Node* temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        Node* delet=temp->next;
        temp->next=NULL;
        free(delet);
        
    }
    int deleteatpos(Node* &head,int pos){
        Node* temp=head;
        int curr_pos=0;
        while(curr_pos->next!=pos-1){
            temp=temp->next;
            curr_pos++;
        }
        Node* delet=temp->next;
        curr_pos->next=delet->next;
        delet->next=NULL;
        free(delet);
    }
    int dispaly(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->value<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

int main() {
    Node* head =NULL;
    insertatstart(head,2);
    dispaly(head);
    insertatstart(head,10);
    dispaly(head);
    insertattail(head,100);
    dispaly(head);
    insertatanypos(head,500,2);
    dispaly(head);
    updateatpos(head,3,2);
    dispaly(head);
    deleteatstart(head);
    dispaly(head);
    deleteatend(head);
    dispaly(head);
    deleteatpos(head,2);
    dispaly(head);

    return 0;
}



