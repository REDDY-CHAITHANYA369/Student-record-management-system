exe:stu_main.o stu_add.o stu_del.o stu_delall.o stu_show.o stu_save.o stu_modify.o stu_rev.o stu_sort.o exit.o
	cc stu_main.o stu_add.o stu_del.o stu_delall.o stu_show.o stu_save.o stu_modify.o stu_rev.o stu_sort.o exit.o -o exe
main.o:stu_main.c
	cc -c stu_main.c header.h
add.o:stu_add.c
	cc -c stu_add.c header.h
del.o:stu_del.c
	cc -c stu_del.c header.h
delall.o:stu_delall.c
	cc -c stu_delall.c header.h
show.o:stu_show.c
	cc -c stu_show.c header.h
save.o:stu_save.c
	cc -c stu_save.c header.h
modify.o:stu_modify.c
	cc -c stu_modify.c header.h
rev.o:stu_rev.c
	cc -c stu_rev.c header.h
sort.o:stu_sort.c
	cc -c stu_sort.c header.h
exit.o:exit.c
	cc -c exit.c header.h
clear:
	@echo "cleaning up..."
	@rm -v *.o exe 
