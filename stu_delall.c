
#include"header.h"
void delall(sll**p)
{
	sll *del=*p;
	while(del)
	{
		*p=del->next;
		free(del);
		del=*p;
	}
	printf("Deleting all records from memory must not automatically delete student.dat\n");
}
