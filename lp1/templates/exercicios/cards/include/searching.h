#ifndef SEARCH_H
#define SEARCH_H

template < typename T >
const T * lsearch( const T * first, const T *last,
                   const T &target,
                   bool (*eq)( const T &, const T & ) );

#include "searching.inl"


#endif
