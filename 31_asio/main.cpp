#include <boost/asio.hpp>
#include <iostream>

void handler2( const boost::system::error_code &ec )
{
  std::cout << "Activcat has waited for 2 seconds." << std::endl;
}


int main()
{
  boost::asio::io_service sgku_io_service;

  boost::asio::deadline_timer my_timer( sgku_io_service, boost::posix_time::seconds(2) );

  my_timer.async_wait( handler2 );

  sgku_io_service.run();
}
