#include<stdio.h>
#include<malloc.h>
#define null 0
#define SIZE 32
typedef struct node{
        char info[SIZE};
        int count;
	struct node *next;
}NODE;
NODE *head,*p;
/* Getnode will create a new node  */
NODE *getnode()
{
	NODE *p;
	p=(NODE *)malloc(sizeof(NODE));
	return p;
}
/*Can free the node means deallocation */
void freenode(NODE *p)
{
	free((char *)p);		//Typecasting is not necessary
	return ;
}
/* Locate the postion in the linked list */
int locate(char *item)
{
	int i,flag=0;
	for(i=0;i<=head->count;i++)
	{
		if(i==0)
		p=head;
		else if(strcmp(item,p->next->info)==0)
		{
			p->next->count++;
			flag=1;
			break;
		}
		else if(strcmp(item,p->next->info)>0)
		{
			p=p->next;
		}
		else if(strcmp(item,p->next->info)<0)
			break;
	}
	return flag;
}
void insert(char *item)
{
	NODE *q;
	if(!locate(item))
	{
		q=getnode();
		strcpy(q->info,item);
		q->count=1;
		q->next=p->next;
		p->next=q;
		head->count++;
	}
	return ;
}

void display_list()
{
	NODE *q;
	q=head;
	q=q->next;
	while(q!=null)
	{
		printf("%s  count-%d\n",q->info,q->count);
		q=q->next;
	}
	return ;
}

int main()
{
	NODE *p1,*q1,*it;
	/*These are the primary conditions of list*/
	/*Started*/
	head=(NODE *)malloc(sizeof(NODE));
	strcpy(head->info,"00 00000000 0000 0000 0000 0000");
	head->count=0;
	head->next=null;
	p1=head;
	/*End*/
	int i,j;
	int n;
	printf("Enter the String's array size:");
	scanf("%d",&n);
	char str[SIZE];
	fflush(stdin);
	printf("Enter the string and by using \'enter\' jump to other string...");
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		gets(str);
		fflush(stdin);
		insert(str);
	}
	
	display_list();
	return 0;
}
