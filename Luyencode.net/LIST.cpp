#include <bits/stdc++.h>
// danhsach lien ket don
// queue
// stack
using namespace std;
struct node{
	int infor;
	node *next;
};
struct danhsach{
	node *p_first;
};
void Initialization(danhsach &d){
	d.p_first = NULL;
}
void Add_to_First(danhsach &d, int x){
	node *p = new node;
	p -> infor = x;
	p -> next = d.p_first;
	d.p_first = p;
}
void Delete_to_First(danhsach &d){
	if(d.p_first == NULL)
		return;
	node *p = d.p_first;
	d.p_first = d.p_first -> next;
	delete p;
}
void Print_to(danhsach d){
	if(d.p_first == NULL)
		return;
	node *p = d.p_first;
	while (p != NULL){
		cout << " " << p -> infor;
		p = p -> next;
	}
}
int main(){
	danhsach d;
	Initialization (d);
	int x;
	cin >> x; Add_to_First(d, x);
	cin >> x; Add_to_First(d, x);
	cin >> x; Add_to_First(d, x);
	Print_to(d);
	Delete_to_First(d);
	Print_to(d);
	return 0;
}
