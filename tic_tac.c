#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//defining matrix
char *m[5][5]={};
//filling matrix to make table of game
void fill(){
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{			
//filling odd column and even row by | to make border
		if((j%2!=0) && (i%2==0))
			m[i][j]="|";
//filling odd row by _ to make border
		else if(i%2!=0)
	        m[i][j]="_";
//empty other elements to write o or x
			else
				m[i][j]=" ";
		}
	}
	
	
}

int main(int argc, char const *argv[])
{
	fill();
	return 0;

}
