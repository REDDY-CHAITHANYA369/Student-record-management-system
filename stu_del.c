#include"header.h"
void del(sll**p)
{
	sll*del=*p,*prev,*t=*p;
	int num;
	char name[20],op;
	printf("enter R/r)delete based on rollno N/n)delete based on name\n");
	scanf(" %c",&op);
	switch(op)
	{
		case 'R':
		case 'r':
			del=*p;
			printf("enter which rollno number you want to delete\n");
			scanf("%d",&num);
			while(del)
			{
				if(del->rollno==num)
				{
					if(del==*p)
						*p=del->next;
					else
						prev->next=del->next;
					free(del);
					printf("deletion completed\n");
					return;
				}
				prev=del;
				del=del->next;
			}
			printf("roll no is not found\n");break;
		case 'N':
		case 'n':
			del=*p;
			printf("enter which name you want to delete\n");
			scanf("%s",name);
			int c=0;
			while(t)
			{
				if(strcmp(name,t->name)==0)
					c++;
				t=t->next;
			}
			if(c==1)
			{
				while(del)
				{
					if(strcmp(del->name,name)==0)
					{
						if(del==*p)
							*p=del->next;
						else
							prev->next=del->next;
						free(del);
						printf("deletion completed\n");
						return;
					}
					prev=del;
					del=del->next;
				}
			}
			if(c!=1)
			{
				t=*p;
				while(t)
				{
					if(strcmp(t->name,name)==0)
						printf("%d %s %f",t->rollno,t->name,t->percentage);
					t=t->next;
				}
				printf("enter which rollno you want to delete");
				scanf("%d",&num);
				while(del)
				{
					if(del->rollno==num)
					{
						if(del==*p)
							*p=del->next;
						else
							prev->next=del->next;
						free(del);
						printf("deletion completed\n");
						return;
					}
					prev=del;
					del=del->next;
				}
			}
			printf("No match found\n");break;
	}
}
