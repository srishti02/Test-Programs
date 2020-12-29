#include<iostream>
#include<vector>
#include<algorithm>

std::string getLargestNumber( std::vector<std::string>& numbers )
{
  sort(begin(numbers),end(numbers), []( std::string num1, std::string num2){ return num1+num2>num2+num1 ; } ) ;
  std::vector<std::string>::iterator itr = numbers.begin() ;
  std::string num("");
  while( itr != numbers.end() )
  {
    std::cout << *itr << std::endl ;
    num += *itr ;
    ++itr ;
  }
  return num ;
}

int main()
{
  std::vector<std::string> numbers ;
  std::cout << "Enter Elements to form largest number : ( type '=' to stop )" << std::endl ;
  std::string num("") ;
  std::cin >> num ;
  while( num != "=" )
  {
    numbers.push_back(num);
    num.clear();
    std::cin >> num ;
  }
  std::cout << "Largest Number is : " << getLargestNumber(numbers) << std::endl ;
  return 1;
}
