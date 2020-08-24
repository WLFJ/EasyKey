#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	string help = "Usage: vimek <vim-distro> [options]\nPlease arrange the parameters in order, otherwise it will not be recognized!\n\nOptions:\n    --n: Choose NeoVim\n    --v: Choose Vim\n    -v: Print version & copyright messages\n\n    -n: Non-recursive, like add a 'nore' before 'map'\n    -i: Make the key in INSERT MODE only\n    -n: Make the key in NORMAL MODE only\n    -l: Make the key in VISUAL MODE only";
	bool neovim;
	
	if (argc <= 1)
	{
		cout << help << endl;
		exit(1);
	}
	else if (strcmp(argv[1], "-v") == 0)
	{
		cout << help << endl;
		exit(0);
	}
	
	if (strcmp(argv[1], "--n") == 0)
	{
		neovim = true;
	}
	else if (strcmp(argv[1], "--v") == 0)
	{
		neovim = false;
	}
	else
	{
		cout << help << endl;
		exit(1);
	}
	return 0;
}

