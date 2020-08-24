#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	string help = "Usage: vimek <vim-distro> [options]\n\nOptions:\n    --n: Choose NeoVim\n    --v: Choose Vim\n    -v: Print version & copyright messages\n\n    -n: Non-recursive, like add a 'nore' before 'map'\n    -i: Make the key in INSERT MODE only\n    -n: Make the key in NORMAL MODE only\n    -l: Make the key in VISUAL MODE only";
	
	if (argc <= 1)
	{
		cout << help << endl;
		exit(1);
	}
	bool neovim;
	
	
	return 0;
}

