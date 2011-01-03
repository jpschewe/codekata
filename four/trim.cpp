#include <string>

const std::string whiteSpaces( " \f\n\r\t\v" );


void trimRight( std::string& str,
                const std::string& trimChars = whiteSpaces ) {
  std::string::size_type pos = str.find_last_not_of( trimChars );
  str.erase( pos + 1 );    
}


void trimLeft( std::string& str,
               const std::string& trimChars = whiteSpaces ) {
  std::string::size_type pos = str.find_first_not_of( trimChars );
  str.erase( 0, pos );
}


void trim( std::string& str, const std::string& trimChars = whiteSpaces ) {
  trimRight( str, trimChars );
  trimLeft( str, trimChars );
}
