/**
 * ObjectsTest.cpp
 */
extern "C"
{
#include "common/types.h"
#include "common/List.h"
#include "common/Enviroment.h"
#include "file/FilePath.h"
#include "file/File.h"
#include "file/RomFile.h"
#include "asar/asardll.h"
#include "unko/ParseList.h"
#include "unko/LibsInsertMan.h"
#include "unko/Objects.h"
}

#include "CppUTest/TestHarness.h"

TEST_GROUP(Objects)
{
	void setup()
	{
	}

	void teardown()
	{
	}
};

/**
 * Test for InsertObjects method
 */
TEST(Objects, InsertObjects)
{
	/* TODO: Insert */

	/* TODO: Uninstall */
}

/**
 * Test for UninstallObjects method
 */
TEST(Objects, UninstallObjects)
{
	/* tested in InsertObjects, so nothing to do here */
}

