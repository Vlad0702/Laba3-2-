#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string string1 = "kola lll kkk kikikiki";
	string lastword = string1.substr(string1.find_last_of(' '));
	int nKol = 0;
	for (int nI = 0; nI < lastword.length(); nI++)
	{
		if (lastword[nI] == 'k')
		{
			nKol++;
		}
	}
	cout << "Result: "
		<< nKol
		<< endl;
	system("pause");
	return 0;
}