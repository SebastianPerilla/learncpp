#include <gtest/gtest.h>
#include "library.h"
#include <numeric>

auto testVector = {5, 3, 1, 3, 1, 1, 2, 5, 3, 1};


TEST (STDAccumulate, TestVector) {
    EXPECT_EQ(std::accumulate(testVector.begin(), testVector.end(), 0), 25);
}

TEST (OwnFunc, TestVector) {
    EXPECT_EQ(library::produceResult(testVector), 25);
}