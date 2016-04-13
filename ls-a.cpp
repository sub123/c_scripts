#include <iostream>
#include <dirent.h>
#include <sys/stat.h>
using namespace std;
int main()
{
	DIR *dir;
	struct dirent *file;
	dir=opendir("/home/bootstrap");
	if(dir != NULL)
	{
		while(file=readdir(dir))
		{
			
			struct stat st;
			//stat(file->d_name,&st);
			//hello
			cout<<file->d_name<<endl;
		}
		closedir(dir);
	}
	else
	{
		cout<<"Could not open directory.";
	}
	return 0;
}
