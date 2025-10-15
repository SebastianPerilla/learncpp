#include <gtest/gtest.h>
#include "io.h"

TEST (ReadUserInput, AddTwoNums) {
    
    // Arrange
    std::istringstream fakeInput("42\n");
    auto cinBackup = std::cin.rdbuf(fakeInput.rdbuf()); // redirect std::cin

    // Act
    int result = io::readNumber();

    // Restore original buffer
    std::cin.rdbuf(cinBackup);

    // Assert
    EXPECT_EQ(result, 42);
}