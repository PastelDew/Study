#include "TestIncludes.h"

int main(void) {
	TEST_CASE_IMPORT

	Ptr<TestBase> testCase;
	while (TestCases.Size()) {
		TestCases >> testCase;
		testCase->Run();
	}
	system("pause");
	return 0;
}