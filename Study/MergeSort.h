#ifndef _MERGESORT_H_
#define _MERGESORT_H_

#include "TestBase.h"
#include <iostream>

using namespace std;

class MergeSort : public TestBase {
	const char* GetTestName() { return "MergeSort"; }

	void DoRun() {
		cout << "TEST" << endl;
	}
};

#endif // End of _MERGESORT_H_