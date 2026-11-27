#include"header.h"
int main()
{
	sll *head=0;
	char op;
	while(1)
	{
		printf("\nenter a/A :Add new record d/D: Delete a record s/S : Show the list m/M : Modify a record v/V : Save records e/E : Exit t/T : Sort the list l/L : Delete all the records r/R : Reverse the list\n");
		printf("\nenter your choice\n");
		scanf(" %c",&op);
		switch(op)
		{
			case 'a':
			case 'A':add(&head);break;
			case 'd':
			case 'D':del(&head);break;
			case 's':
			case 'S':show(head);break;
			case 'm':
			case 'M':modify(head);break;
			case 'v':
			case 'V':save(head);break;
			case 'e':
			case 'E':EXIT(&head);break;
			case 't':
			case 'T':sort(head);break;
			case 'l':
			case 'L':delall(&head);break;
			case 'r':
			case 'R':rev(&head);break;
			default:printf("INVALID CHOICE\n");

		}
	}
}
