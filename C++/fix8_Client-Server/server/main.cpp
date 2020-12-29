#include <iostream>
#include "server.h"

int main()
{
  Server::getInstance()->start();
  return 1 ;
}
