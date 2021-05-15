#include <stdio.h>
#include <unistd.h>

int main( int argc, char** argv ){
	int x = 0;
	while( 1 ){
		printf( "Daemon application %d!\n", x++ );
		sleep( 5 );
	}

	return 0;
}
