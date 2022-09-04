#pragma once

#include <string>

extern "C" {
#include "sqlite3/sqlite3.h"
}

class SqliteHelper {
   private:
    const char* database_name = nullptr;
    sqlite3* database;

   public:
    SqliteHelper(const char* database_name);
    ~SqliteHelper();

    int exec(const std::string& sql) const;
};