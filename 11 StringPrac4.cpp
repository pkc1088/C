#include <stdio.h>
#include <string.h>
int main(void)
{
	char planet[][6]={"Merch", "Ven", "Ear", "Mar", "Jup"};
	int i,j;
	
	printf("%c\n", planet[0][6]);	//연습장 필기 참고 
	for(i=0;i<5;i++)
		if(planet[i][0] == 'J')
			printf("%s begins with J\n", planet[i]);
	for(j=0;j<100;j++)
		if(planet[3][j] == 'M')
			printf("%s begins with M\n", planet[j]);


	return 0;
}


/*
#include <stdio.h>
#include <string.h>
#define NUM_PLANETS 9 

int main(int argc, char *argv[])
{ 
	char *planets[]={"Mercury", "Venus", "Earth",
					"Mars", "Jupiter", "Saturn",
					"Uranus", "Neptune", "Pluto"};
	int i,j;

	for(i=1;i<argc;i++)
	{
		for(j=0;j<NUM_PLANETS;j++)
			if(strcmp(argv[i], planets[j]) == 0)
			{
			printf("%s is planet %d\n", argv[i], j+1);
			break;
			}	
		if(j==NUM_PLANETS)
			printf("%s is not a planet\n", argv[i]);
	}
	return 0;
}
	*/
