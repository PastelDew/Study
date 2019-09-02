#ifndef TEST_INCLUDES_H
#define TEST_INCLUDES_H

#include <pdl/Collection/LinkedList.h>
#include "TestBase.h"

// >> Test Cases belows here <<

#include "MergeSort.h"

// >> Test Cases end point <<

#define TestCases TestCases
#define TEST_CASE_IMPORT \
LinkedList<Ptr<TestBase>> TestCases; \
TestCases \
<< new MergeSort() \
;

#endif