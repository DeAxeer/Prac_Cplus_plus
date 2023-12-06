#include <iostream>

using namespace std;

int main()
{
    string str = "Hello, $name, how are you doing, $name?";
    string from = "$name";
    string to = "Eric";
    while (str.rfind(from) != string::npos)
        str.replace(str.find(from), from.size(), to);
    cout << str << std::endl;
    return 0;
}
