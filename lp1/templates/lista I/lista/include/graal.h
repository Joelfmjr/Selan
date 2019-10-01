#ifndef REVERSE_H
#define REVERSE_H

namespace graal
{
  template < typename Itr >
  void reverse(Itr first, Itr last );


  template < typename Itr, typename Compare >
  std::pair<Itr, Itr> minmax( Itr first, Itr last, Compare cmp );

  template < typename Itr >
  Itr copy( Itr first, Itr last, Itr d_first );

  template < typename Itr, typename Predicate >
  Itr find_if( Itr first, Itr last, Predicate p );

  template < typename Itr, typename T, typename Equal >
  Itr find( Itr first, Itr last, const T & value, Equal eq );

  template < typename Itr, typename Predicate >
  bool all_of(Itr first, Itr last, Predicate p);

  template < typename Itr, typename Predicate >
  bool any_of(Itr first, Itr last, Predicate p);

  template < typename Itr, typename Predicate >
  bool none_of(Itr first, Itr last, Predicate p);

  template < typename Itr, typename Equal >
  bool equal( Itr first, Itr last, Itr first2, Equal eq );

  template < typename Itr, typename Equal >
  bool equal( Itr first, Itr last, Itr first2, Itr last2, Equal eq );

  template < typename Itr, typename Predicate >
  Itr partition( Itr first, Itr last, Predicate p );

  #include "graal.inl"
}

#endif
