#include <stdio.h>
#include <gtest/gtest.h>
#include <filesystem>
#include <Windows.h>
#include <string>
#include <queue>
#include "sum.h"


class QueueTestFixture : public ::testing::Test
{
public:
	std::queue<std::string> queValues;

	void SetUp()
	{
		queValues.push("a");
	}

	void TearDown()
	{
		while (!queValues.empty())
		{
			std::string strTop = queValues.front();
			queValues.pop();
			printf("%s\n", strTop.c_str());
		}
	}
};

TEST_F(QueueTestFixture, Test)
{
	queValues.push("b");
}
//TEST(FileSystem, CreateFileTest)
//{
//	HANDLE hFile = CreateFile((LPCWSTR)"Temp.txt", GENERIC_WRITE, 0,(LPSECURITY_ATTRIBUTES)CREATE_ALWAYS, 0, NULL, NULL);
//	ASSERT_EQ((HANDLE)0xFFFFFFFFFFFFFFFF, hFile);
//
//	DWORD dwWritten = 0;
//	EXPECT_TRUE(WriteFile(hFile, "Hello world!", 12, &dwWritten, NULL));
//	EXPECT_EQ(12, dwWritten);
//	CloseHandle(hFile);
//}

GTEST_API_ int main(int argc, char** argv)
{
	printf("Running main() from %s\n", __FILE__);
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}