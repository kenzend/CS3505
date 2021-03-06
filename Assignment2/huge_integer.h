#include <string>

/* Declaring huge_integer class for further use in other files*/

class huge_integer
{

 private:
  std::string s;
  std::string value;
  std::string stripzeroes(std::string astring) const;

  std::string add(std::string string1, std::string string2) const;
  std::string sub(std::string left, std::string right) const;
  std::string mul(std::string left, std::string right) const;
  std::string div(std::string dividend, std::string divisor, const bool quotient) const;

 public:
  huge_integer();
  huge_integer(const huge_integer & other);
  huge_integer(std::string);
  ~huge_integer();
  
  std::string get_value () const;
  huge_integer operator+ (const huge_integer & rhs) const;
  huge_integer operator- (const huge_integer & rhs) const;
  huge_integer operator* (const huge_integer & rhs) const;
  huge_integer operator/ (const huge_integer & rhs) const;
  huge_integer operator% (const huge_integer & rhs) const;
  huge_integer & operator= (const huge_integer & rhs);

  void debug();

} ;
