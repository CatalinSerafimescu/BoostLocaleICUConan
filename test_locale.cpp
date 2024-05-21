#include <iostream>
#include <boost/locale.hpp>


using namespace boost::locale;
int main()
{
    generator gen;
    // Create locale generator 
    std::locale::global(gen("")); 
    // "" - the system default locale, set
    // it globally
    //boost::locale::info l;

    std::locale loc=gen("");

    std::cout << "The language code is " << std::use_facet<boost::locale::info>(loc).encoding() << std::endl;
    
}


