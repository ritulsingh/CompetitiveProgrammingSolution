#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class bank {
char name[20];
int ano;
char atype[20];
float bal;
public:
void get(int no,char *n,char *t,float b) {
strcpy(name,n);
ano=no;
strcpy(atype,t);
bal=b;
}
float deposit() {
float amt;
cout<<"\nDeposit amount: ";
cin>>amt;
bal=bal+amt;
return bal;
}
float withdrw() {
float amt;
cout<<"\nHow many Rupees withdraw: ";
cin>>amt;
bal=bal-amt;
return bal;
}
void disp() {
cout<<"\n\nAccount number: "<<ano;
cout<<"\n\nName: "<<name;
cout<<"\n\nAccount type: "<<atype;
cout<<"\n\nTotal Amount In Your Bank: "<<deposit();
cout<<"\n\nAfter Withdraw Amount balnace: "<<withdrw();
}
};
int main() {
int n;
char nm[20],t[20];
float a;
bank bk;
cout<<"\nEnter Account no.: ";
cin>>n;
cout<<"\nEnter Name: ";
cin>>nm;
cout<<"\nEnter account type: ";
cin>>t;
cout<<"\nEnter balance amount: ";
cin>>a;
bk.get(n,nm,t,a);
bk.disp();
getch();
}
