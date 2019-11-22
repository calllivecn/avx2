
CC=gcc

FLAGS="-mavx2"

avx2:
	$(CC) $(FLAGS) -o $&.c $&
