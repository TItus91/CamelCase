#include <string>


std::string to_camel_case(std::string text) {
 
  for (int i=0; i<text.size(); i++)
  {
     if (text[i]=='-' || text[i]=='_')
     {  text.erase(i,1);
    if (text[i]>96) text[i]-=32;
      }
  }
  
  return text;
}
