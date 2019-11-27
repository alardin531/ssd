#include<stdio.h>
#include<stdlib.h>
typedef int position;
struct q{
	int*data;
	position front,rear;
	int maxsize;
};
typedef struct q* ptr;
typedef ptr queue;

queue creaq(int maxsize)
{
	queue qq=(queue)malloc(sizeof(struct q));
	qq->data=(int*)malloc(maxsize*sizeof(int));
	qq->front=qq->rear=0;
	qq->maxsize=maxsize;
	return qq; 
}
bool IsFull(queue q)
{
	return ((q->rear+1)%q->maxsize==q->front);
}
bool add(queue q,int x)
{
	if(IsFull(q))
	{
		printf("队列满了\n");
		return false;
	}
	else
	{
		q->rear=(q->rear+1)%q->maxsize;
		q->data[q->rear]=x;
		return true;
	}
}
bool IsEmpty(queue q)
{
	return (q->front==q->rear);
}
int deleteq(queue q)
{
	if(IsEmpty(q))
	{
		printf("队列空\n");
		return false;
	}
	else{
		q->front=(q->front+1)%q->maxsize;
		return q->data[q->front];
	}
}
int main(){
	struct q *qq=creaq(5);
	IsFull(qq);
	IsEmpty(qq);
	deleteq(qq);
	add(qq,1);
	add(qq,3);
	add(qq,3);
	add(qq,3);
	for(int i=1;i<5;i++)
	{
		printf("%d\n",qq->data[i]);
		
	}
	return 0;
}















