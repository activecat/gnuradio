#include <boost/asio.hpp>
#include <iostream>

int main()
{
    boost::asio::io_service my_io_service;

    boost::asio::ip::tcp::resolver resolver( my_io_service );

    boost::asio::ip::tcp::resolver::query     query("www.boost.org", "http");

    boost::asio::ip::tcp::resolver::iterator  myiter = resolver.resolve(query);
    boost::asio::ip::tcp::resolver::iterator  myend; // End marker.

    while ( myiter != myend )
    {
        boost::asio::ip::tcp::endpoint myendpoint = *myiter++;
        std::cout << "The endpoint is '" << myendpoint << "'" << std::endl;
    }
}
