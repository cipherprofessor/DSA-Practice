
#include <iostream>
using namespace std;


bool isVowel(char ch)
{
	return ( ch == 'a' || ch == 'e' ||
			ch == 'i' || ch == 'o' ||
			ch == 'u');
}


int calcDiff(string str)
{

	int count_vowels = 0, count_conso = 0;
	int hard_words = 0, easy_words = 0;
	int consec_conso = 0;


	for (int i = 0; i < str.length(); i++)
	{
		
		if (str[i] != ' ' && isVowel(tolower(str[i])))
		{
		
			count_vowels++;
			consec_conso = 0;
		}

	
		else if (str[i]!= ' ')
		{
			count_conso++;
			consec_conso++;
		}

		
		if (consec_conso == 4)
		{
			hard_words++;

			
			while (i < str.length() && str[i]!= ' ')
				i++;

			
			count_conso = 0;
			count_vowels = 0;
			consec_conso = 0;
		}

		else if ( i < str.length() &&
				(str[i] == ' ' || i == str.length()-1))
		{
			
			count_conso > count_vowels ? hard_words++
									: easy_words++;

			
			count_conso = 0;
			count_vowels = 0;
			consec_conso = 0;
		}
	}

	
	return 5 * hard_words + 3 * easy_words;
}


int main()
{
	string str = "I am a geek";
	string str2 = "We are geeks";
	cout << calcDiff(str) << endl;
	cout << calcDiff(str2) << endl;

	return 0;
}
