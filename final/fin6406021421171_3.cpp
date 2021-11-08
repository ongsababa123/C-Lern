#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
void matches(string word, string text);

int main()
{
    string text = "";
    string word = "Jules Gabriel Verne was born to Pierre Verne, an attorney (died 1871), and his wife, Sophie-Henriette Allotte de la Fu?e (died 1887), in Nantes. The eldest of five children, he spent his early years at home with his parents in the bustling harbor city of Nantes. The family spent summers in a country house just outside the city, on the banks of the Loire River. Jules and his brother Paul would often rent a boat  for a franc a day. The sight  of the many ships navigating the river  sparked Jules' imagination, as he describes in the autobiographical short story Souvenirs d'Enfance et de Jeunesse. At the age of nine, Jules and Paul, of whom he was very fond, were sent to boarding school at the Saint Donatien College As a child, he developed a great interest in travel and exploration, a passion he showed as a writer of adventure stories and science fiction.";
    matches(word,text);
    return 0;
}

void matches(string word, string text)
{
    char search[word.size() + 1];
    int length, a = 0, count = 0;
    strcpy(search, word.c_str());
    length = strlen(search);
    string word2[length];
    cout << "Please Enter String to find in Array : ";
    cin >> text;
    for (int i = 0; i <= length; i++)
    {
        if (search[i] != ' ')
            word2[a] += search[i];
        else
            a++;
    }
    for (int i = 0; i <= a; i++)
    {
        if (word2[i] == text)
            count++;
    }
    word = text;
    cout << "Word to be search : " << word << endl;
    cout << "Total matches : " << count;
}