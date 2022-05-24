
03_makefile: 03_makefile.o 03_len.o 03_compare.o 03_concat.o 03_copy.o 03_rev.o
	gcc 03_makefile.o 03_len.o 03_compare.o 03_concat.o 03_copy.o 03_rev.o -o 03_makefile

03_makefile.0: 03_compare.c 03_concat.c 03_copy.c 03_rev.c 03_len.c
	gcc -c 03_compare.c 03_concat.c 03_copy.c 03_rev.c 03_len.c

03_len.o: 03_makefile.o
	gcc -c 03_len.c 

03_compare.o:# 03_makefile.o 03_len.o
	gcc -c 03_compare.c

03_concat.o:# 03_makefile.o 03_len.o
	gcc -c 03_concat.c

03_copy.o:# 03_makefile.o 03_len.o
	gcc -c 03_copy.c

03_rev.o:# 03_makefile.o 03_len.o
	gcc -c 03_rev.c
clean:
	rm *.o 03_makefile




# These are comments and explanation of this makefile \
	# TARGET: Dependencies\
	#	recipe or action
#
#Here "03_makefile.c" is our main file. In which String input is taken through User.
# FILES DEPEND ON "03_len.c" are 03_compare.c, 03_concat.c, 03_copy.c, 03_rev.c, 03_makefile.c
	


