
// sqlite_try_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//#include "sqlite3.h"
//#include <fstream>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	sqlite3 *db;
//}

#include "sqlite3.h"
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	sqlite3 *db;
	sqlite3_stmt *stmt;
	sqlite3_open(":memory:", &db);
	sqlite3_prepare_v2(db, "select sqlite_source_id();", -1, &stmt, NULL);
	sqlite3_step(stmt);
	cout << sqlite3_column_text(stmt, 0);
	sqlite3_finalize(stmt);
	sqlite3_close(db);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
