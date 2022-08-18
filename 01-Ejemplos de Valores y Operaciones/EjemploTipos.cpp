#include <cassert>
#include <string>

using namespace std::string_literals;
int main()
{
    // TD Int

    assert(23 + 7 == 30);
    assert(85 - 2 == 83);
    assert(9 * 9 == 81);
    assert(4 / 20 != 5);
    assert(20 > -20);
    assert(2 < 7);

    // TD Double

    assert(2.0 == 1.0 + 1.0);
    assert(4.4 - 0.4 == 4.0);
    assert(3.0 == 0.3 * 10.0);
    assert(2.0 != 1.0 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

    // TD Booleano

    assert(true);
    assert(true == true);
    assert(false != true);
    assert(false == not true);
    assert(true and true);
    assert(false or true);
    assert((true and false) == false);

    // TD Char

    assert('N' + 'G' == 149);
    assert('N' - 7 == 'G');
    assert('N' != 'n');
    assert('g' > 'G');
    
    // TD Unsigned

    assert(15u + 8u == 23u);
    assert(15u - 5u == 10u);
    assert(25u < 40u);
    assert(2u * 2u == 4u);
    assert(4u / 2u == 2u);
    
    // TD Float

    assert(2.0f == 1.0f + 1.0f);
    assert(4.4f - 0.4f != 2.0f);
    assert(3.0f == 0.3f * 10.0f);
    assert(2.0f * 2.0f == 4.0f);
    
    // TD String

    assert("Nicolas Gargano" == "Nico"s + "las Gargano"s);
    assert("Nicolas Gargano" != "Nicolas"s + "Gargano"s);
    assert("Nicolas Gargano"s.length() == 15);
}