#include <iostream>
using namespace std;

//void insertBeg(int val);

class LL
{

    struct Node {
        int data;
        Node *next;
    };

    struct Node *start;
    public:

    LL(){
        start=NULL;
    }
    void create();
   // void insertBeg(int val,struct Node **ptr);
    int checkPallindrome();
    void show();
};
int main(){
    LL lst;
    lst.create();
    int ans=lst.checkPallindrome();
    if(ans){
        cout<<"Linked list is a pallindrome"<<endl;
    }
    else{
        cout<<"Not a pallindrome"<<endl;
    }
    lst.show();
    return 0;
}

void LL::create(){
    cout<<"Enter elements";
    int num;
    cin>>num;
    while(num!=-1)
    {
        struct Node *ptr=new Node;
        ptr->data=num;
        ptr->next=start;
        start=ptr;
        cin>>num;
    }
}
int LL::checkPallindrome()
{
    struct Node *last=NULL;
    struct Node *temp=start;
    while(temp!=NULL)
    {
     struct Node *newNode=new Node;
     newNode->data=temp->data;
     newNode->next=last;
     last=newNode;
     temp=temp->next;

    }

    //comapare the two linked list
    temp=start;
    int ans=1;
    while(temp!=NULL && last!=NULL)
    {
            if(temp->data!=last->data)
            {
                ans =0;
                return ans;
            }
            temp=temp->next;
            last=last->next;

    }

    return ans;
    //function for insertion at beginning
   

}


void LL::show()
{
    struct Node *display=start;
    while(display!=NULL)
    {
        cout<<display->data<<" ";
        display=display->next;
    }

}