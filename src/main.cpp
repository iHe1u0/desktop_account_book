#include <cstring>
#include <iostream>
#include "sqlitehelper.h"

int main(int, char**) {
    int ret_code = 0;
    const char* dbName = "mydatabase.sqlite";
    std::string sql =
        "CREATE TABLE PERSON("
        "ID INT PRIMARY KEY     NOT NULL, "
        "NAME           TEXT    NOT NULL, "
        "SURNAME          TEXT     NOT NULL, "
        "AGE            INT     NOT NULL, "
        "ADDRESS        CHAR(50), "
        "SALARY         REAL );";

    SqliteHelper* dbHelper = new SqliteHelper(dbName);
    // create a table
    ret_code = dbHelper->exec(sql);
    return ret_code;
}
