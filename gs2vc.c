#include <stdio.h>
#include <string.h>

#define showArgsOnStart 0 //Set to 0 if you want a list of all given parameters. 

int main(int argc, char *argv[])
{
	#ifdef showArgsOnStart

	printf("Given arguments:\n");
	for (int showArgs = 0; showArgs < argc; showArgs++)
	{
		printf("Argument %i: %s\n", showArgs, argv[showArgs]);
	}
	printf("-- End of given arguments list --\n");

	#endif

	if (argc < 3)
	{
		printf("There are some arguments missing! Cant continue!");
		return -1;
	}

	if (argc > 3)
	{
		printf("You entered too much arguments! The only thing that is needed is your code!");
		return -1;
	}

	int cheatBytes;
	cheatBytes = strlen(argv[2])/2;

	printf(";Converted with the gs2vc tool by EnterpriseFreak.\n");
	printf("[Cheat]\n");
	printf("Cheat0_Address=0x%s\n", argv[1]);
	printf("Cheat0_Value=0x%s\n", argv[2]);
	printf("Cheat0_Bytes=%i\n", cheatBytes);

	return 0;
}
