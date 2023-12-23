#include<iostream>
using namespace std;
class xyz{
    public:
    int data;
    xyz *next;

    xyz(int number){
        this->data=number;
        this->next=NULL;
    }

};
int find_lenght(xyz *head){
    xyz *temp=head;
    int count=0;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
        count++;
    }
    cout<<endl;
    return count;
}
void athead(xyz* &head , int number){
    xyz *temp=head;
    xyz *new_nord= new xyz(number); 
    while(temp!=NULL){
        if(head==NULL){
            head=new_nord;
        }
        else{
            
        }
    }
}
void inserting(xyz * &head , int number , int position , xyz * &tail){

}
void printl(xyz* &head){
    xyz *temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main(){
    xyz *a= new xyz(10);
    xyz *b=new xyz(20);
    xyz *c= new xyz(30);
    xyz *d= new xyz(40);

    xyz *head=a;
    xyz *tail=d;

    a->next=b;
    b->next=c;
    c->next=d;
    printl(head);
    int number, position;
    cout<<"enter the number :- ";
    cin>>number>>position;
    find_lenght(head);
    inserting(head , number , position , tail);
    printl(head);
}