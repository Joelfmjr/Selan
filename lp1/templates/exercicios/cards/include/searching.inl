template < typename T >
const T * lsearch( const T * first, const T *last,
                   const T &target,
                   bool (*eq)( const T &, const T & ) )
{
	while( first != last )
	{
		if ( eq( *first, target ) ) return first;
		first++;
	}
	return last;
}
