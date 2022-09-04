#include <iostream>
#include <sqlite3.h>

int main(int, char **)
{
    const char *version = SQLITE_VERSION;
    std::cout << version << std::endl;
}
