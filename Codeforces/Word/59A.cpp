#include<iostream>
#include<string>

void toUpper(char name[]) {
	for(int i=0; name[i]; i++)
	{
		name[i]= name[i] & 95;
	}
}

void toLower(char name[]) {
	for(int i=0; name[i]; i++)
	{
		name[i]= name[i] | 32;
	}
}

bool count(char name[]){
	int uper=0, lower=0;
	for(int i=0; name[i]; i++)
	{
		if(name[i] & 32)
			lower++;
		else
			uper++;
	}
	if(uper<=lower)
		return true;
	else
		return false;
}

int main(int argc, char const *argv[])
{
	char word[101];
	std::cin >> word;
	if(count(word))
		toLower(word);
	else
		toUpper(word);

	std::cout << word <<std::endl;
	return 0;
}