#pragma once
#include <vector>
#include <istream>
#include <ostream>

/**
 * Klasse zur Darstelung einer Binaerzahl 
 * auf dem Datentyp std::vector<bool>
 */
class BinaerZahlen{
     
      public:
      //Konstruktor, der leere Objekte erstellt.
      BinaerZahlen();
    
      /**
       * Konstruktor erstellt Objekte von einem Vektor, wobei "false" 0
       * ist und "true" 1 ist.  
       * @param newbits Das sind Bits, die die BinaerZahl darstellt.
       */
      BinaerZahlen(std::vector<bool>& newbits);

      std::vector<bool> getVektor(){
            return bits;
            

      }
      std::string to_str(BinaerZahlen& bin);

      unsigned long long int To_unsign(BinaerZahlen n);
      
      



      private:
      std::vector<bool> bits;

};