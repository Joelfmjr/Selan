#ifndef BIG_INT_H
#define BIG_INT_H

#include <algorithm>
#include <cassert>
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::max;
using std::string;
using std::vector;
using std::ostream;

class BigInt
{
    public:
        explicit BigInt( int capacity )
            : m_sign{1}, m_digits( capacity )
        { /* empty */ }

        explicit BigInt( )
            : m_sign{1}, m_digits( 1 )
        { m_digits[0] = 0; }

        explicit BigInt( const string &s );

        BigInt operator*( const BigInt &n ) const;
        BigInt operator+( const BigInt &n ) const;
        BigInt operator-( const BigInt &n ) const;

        bool operator<( const BigInt & ) const;

        //==== Modifier

        friend BigInt abs( const BigInt& );

        string toString( void );


    private:
        int m_sign;  // -1 or 1;
        vector< char > m_digits;
};
#endif // BIG_INT_H
