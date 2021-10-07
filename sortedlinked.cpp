#include<iostream>
using namespace std;
struct nod {
   int d;
   nod *n, *p;
}
*p = NULL, *head = NULL, *r = NULL, *np = NULL, *tail = NULL;
int c = 0;
void createnode(int n) {
   np = new nod;
   np->d = n;
   np->n = NULL;
   np->p = NULL;
   if (c == 0) {
      tail = np;
      head = np;
      p = head;
      p->n = head;
      p->p = head;
      c++;
   } else if (c == 1) {
      p = head;
      r = p;
      if (np->d < p->d) {
         np->n = p;
         p->p = np;
         head = np;
         p->n = np;
         np->p = p;
         tail = p;
      } else if (np->d > p->d) {
         p->n = np;
         np->p = p;
         np->n= head;
         p->p = np;
      }
      c++;
   } else {
      p = head;
      r = p;
      if (np->d < p->d) {
         np->n = p;
         p->p = np;
         head = np;
         do {
            p = p->n;
         }
         while (p->n != r);
            tail = p;
            p->n = np;
            np->p = p;
      } else if (np->d > p->d) {
         while (p->n != head && np->d > p->d) {
            r = p;
            p = p->n;
            if (p->n == head && (p->d < np->d)) {
               p->n = np;
               np->p = p;
               np->n = head;
               tail = np;
               head->p = np;
               break;
            } else if (np->d< p->d) {
               r->n= np;
               np->p = r;
               np->n= p;
               p->p= np;
               if (p->n != head) {
                  do {
                     p = p->n;
                  }
                  while (p->n != head);
               }
               tail = p;
               break;
            }
         }
      }
   }
}
void display_head(int i) {
   nod *t = head;
   int c = 0;
   while (c <= i) {
      cout<<t->d<<"\t";
      t = t->n;
      c++;
   }
   cout<<endl;
}
void display_tail(int i) {
   nod *t = tail;
   int m = 0;
   while (m <= i) {
      cout<<t->d<<"\t";
      t = t->p;
      m++;
   }
   cout<<endl;
}
int main() {
   int i = 0, n, a, ch;
   cout<<"enter the no of nodes\n";
   cin>>n;
   while (i < n) {
      cout<<"\nenter value of node\n";
      cin>>a;
      createnode(a);
      i++;
   }
   cout<<"\nsorting Doubly Linked List head first\n";
   display_head(n);
   cout<<"\nsorting Doubly Linked List tail first\n";
   display_tail(n);
}
