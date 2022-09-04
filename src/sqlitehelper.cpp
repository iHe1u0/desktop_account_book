#include "sqlitehelper.h"
#include <iostream>
#include <string>

SqliteHelper::SqliteHelper(const char* database_name) {
    this->database_name = database_name;
    int ret_code = sqlite3_open(database_name, &database);
    if (ret_code) {
        std::cerr << "open database failed: " << sqlite3_errmsg(database);
        exit(-1);
    }
}

SqliteHelper::~SqliteHelper() {
    sqlite3_close(database);
}

int SqliteHelper::exec(const std::string& sql) const {
    char* errMsg;
    int ret_code = sqlite3_exec(database, sql.c_str(), nullptr, 0, &errMsg);
    return ret_code;
}