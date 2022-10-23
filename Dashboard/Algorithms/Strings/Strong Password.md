
# Strong Password
### [Back ⬅️](README.md)

## **C++** solution

```cpp
#include <iostream>

#define MAX(X, Y) ((X) > (Y) ? (X) : (Y))

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    std::string numbers = "0123456789";
    std::string specialCharacters = "!@#$%^&*()-+";
    std::string lowerCaseLetters = "abcdefghijklmnopqrstuvwxyz";
    std::string upperCaseLetters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int length;

    std::string password;

    std::cin >> length >> password;

    int number = 0;
    int lowerCaseLetter = 0;
    int upperCaseLetter = 0;
    int specialCharacter = 0;

    int missedCharacters;

    for (size_t i = 0; i < password.size(); ++i)
    {
        if (numbers.find(password[i]) != std::string::npos)
        {
            number = 1;
        }
        else if (specialCharacters.find(password[i]) != std::string::npos)
        {
            specialCharacter = 1;
        }
        else if (lowerCaseLetters.find(password[i]) != std::string::npos)
        {
            lowerCaseLetter = 1;
        }
        else
        {
            upperCaseLetter = 1;
        }
    }

    missedCharacters = 4 - (number + upperCaseLetter + lowerCaseLetter + specialCharacter);

    std::cout << MAX(missedCharacters, 6 - length);

    return EXIT_SUCCESS;
}
```