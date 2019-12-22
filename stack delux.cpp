#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
int main(){
	struct node* h=(struct node*)malloc(sizeof(struct node));
	h->next=NULL;
	h->data=7000;
	int n,data;
	scanf("%d",&n);
	scanf("%d",&data);
	struct node* p;
	while(data!=-1){
		p=(struct node*)malloc(sizeof(struct node));
		p->data=data;
		//p->next=NULL;
		p->next=h->next;
		h->next=p;
		scanf("%d",&data);
	}
	int cnt=1;
	struct node* p1=h->next;
	while(p1!=NULL){
		if(cnt==n){
			printf("%d",p1->data);
		}
		cnt++;
		p1=p1->next;
	}
	
}

