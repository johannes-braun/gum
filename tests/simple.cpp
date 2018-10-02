#include "catch.hpp"

#include <gum/gum.hpp>

TEST_CASE("Simple Test")
{
    SECTION("Section 1")
    {
        gfx::vec3 v(1, 1, 1);
        REQUIRE(true);
    }
}