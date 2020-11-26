
#include <iostream>
#include <map>

using namespace std;

map<string, string> tagMap;

void createMap(int &n, string pretag)
{
    if (!n)
    {
        return;
    }

    string line, tag, attr, value;

    getline(cin, line);

    int i = 1;

    if (line[i] == '/')
    {
        while (line[i] != '>')
        {
            i++;
        }

        if (pretag.size() > (i - 2))
        {
            tag = pretag.substr(0, pretag.size() - i + 1);
        }
        else
        {
            tag = "";
        }
    }
    else
    {
        while (line[i] != ' ' && line[i] != '>')
        {
            i++;
        }

        tag = line.substr(1, i - 1);

        if (pretag != "")
        {
            tag = pretag + "." + tag;
        }

        int j;
        while (line[i] != '>')
        {
            j = ++i;

            while (line[i] != ' ')
            {
                i++;
            }

            attr = line.substr(j, i - j);

            while (line[i] != '\"')
            {
                i++;
            }

            j = ++i;

            while (line[i] != '\"')
            {
                i++;
            }

            value = line.substr(j, i - j);
            i += 1;
            tagMap[tag + "~" + attr] = value;
        }
    }

    createMap(--n, tag);
}

int main(void)
{
    int n, q;
    string attr, value;

    cin >> n >> q;
    cin.ignore();

    createMap(n, "");

    while (q--)
    {
        getline(cin, attr);

        value = tagMap[attr];

        if (value == "")
        {
            value = "Not Found!";
        }

        cout << value << endl;
    }
    
    return EXIT_SUCCESS;
}