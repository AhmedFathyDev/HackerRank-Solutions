
void counterspell(Spell *spell)
{
    if (Fireball *fb = dynamic_cast<Fireball *>(spell))
    {
        fb->revealFirepower();
    }
    else if (Frostbite *fb = dynamic_cast<Frostbite *>(spell))
    {
        fb->revealFrostpower();
    }
    else if (Thunderstorm *ts = dynamic_cast<Thunderstorm *>(spell))
    {
        ts->revealThunderpower();
    }
    else if (Waterbolt *wb = dynamic_cast<Waterbolt *>(spell))
    {
        wb->revealWaterpower();
    }
    else
    {
        string spellN = spell->revealScrollName();
        string spellJ = SpellJournal::read();
        vector<vector<int>> matrix(spellN.length() + 1, vector<int>(spellJ.length() + 1));

        for (size_t i = 1; i <= spellN.length(); i++)
        {
            for (size_t j = 1; j <= spellJ.length(); j++)
            {
                if (spellN[i - 1] == spellJ[j - 1])
                {
                    matrix[i][j] = matrix[i - 1][j - 1] + 1;
                }
                else
                {
                    matrix[i][j] = max(matrix[i][j - 1], matrix[i - 1][j]);
                }
            }
        }

        cout << matrix[spellN.length()][spellJ.length()] << endl;
    }
}