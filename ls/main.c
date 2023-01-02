#include <dirent.h>
#include "obj.h"

/* Commande de base montrant les fichiers présents */

void my_ls(const char *dir,int op_a,int op_1)
{
	struct dirent *d;
	DIR *dh = opendir(dir);
	while ((d = readdir(dh)) != NULL)
	{
		if (!op_a && d->d_name[0] == '.')
			continue;
		my_putstr(d->d_name);
		my_putstr("  ");
		if(op_1) my_putstr("\n");
	}
	if(!op_1)
	my_putstr("\n");
}

int main(int argc, const char *argv[])
{
	if (argc == 1)
	{
		my_ls(".",0,0);
	}
	else if (argc == 2)
	{
		if (argv[1][0] == '-')
		{
			int op_a = 0, op_1 = 0;
			char *p = (char*)(argv[1] + 1);
			while(*p){
				if(*p == 'a') op_a = 1;
				else if(*p == '1') op_1 = 1;
				else{
					my_putstr("Option not available");
					return 0;
				}
				p++;
			}
			my_ls(".",op_a,op_1);
		}
	}
	return 0;
}