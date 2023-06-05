// Copyright Epic Games, Inc. All Rights Reserved.


#include "MySqlExampleGameModeBase.h"

#define STATIC_CONCPP
#include "mysql_driver.h"
#include "cppconn/prepared_statement.h"
#include "cppconn/driver.h"
#include "cppconn/exception.h"

void AMySqlExampleGameModeBase::TestMySql()
{
	try
	{
		sql::mysql::MySQL_Driver* driver;
		sql::Connection* con;

		driver = sql::mysql::get_mysql_driver_instance();
		con = driver->connect("tcp://localhost:3306", "root", "abc123456");

		sql::Statement* stamt = con->createStatement();

		stamt->execute("create DATABASE " "Pome");
		stamt->execute("USE " "Pome");
		stamt->execute("DROP TABLE IF EXISTS website");
		stamt->execute("CREATE TABLE website(id INT, name CHAR(100), domain CHAR(200))");
		stamt->execute("INSERT INTO website(id, name, domain) VALUES (1, 'pome', 'htts://pome.cc')");

		delete stamt;
		delete con;

		UE_LOG(LogTemp, Log, TEXT("Create db was succeed!"));
	}
	catch (const std::runtime_error err)
	{
	}
	catch (const sql::SQLException&)
	{
	}
	catch (const std::bad_alloc& )
	{
	}
}
