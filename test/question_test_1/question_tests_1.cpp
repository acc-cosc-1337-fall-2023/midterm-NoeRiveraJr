#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Testing get_cookie_ingredients function")
{
	std::vector<double> test1 = get_cookie_ingredients(48);
	std::vector<double> test2 = get_cookie_ingredients(96);
	std::vector<double> test3 = get_cookie_ingredients(24);
	REQUIRE(test1[0] == 1.5);
	REQUIRE(test1[1] == 1);
	REQUIRE(test1[2] == 2.75);
	REQUIRE(test2[0] == 3);
	REQUIRE(test2[1] == 2);
	REQUIRE(test2[2] == 5.5);
	REQUIRE(test3[0] == 0.75);
	REQUIRE(test3[1] == 0.5);
	REQUIRE(test3[2] == 1.375);
}
