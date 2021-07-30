#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    std::string tajuk = "./sample/input.pdf";

    system( "rm -rfv pdftoppm" );
    system( "mkdir pdftoppm" );
    system( ( "pdftoppm -jpeg -r 300 " + tajuk + " pdftoppm/output" ).c_str() );

    return 0;
}
