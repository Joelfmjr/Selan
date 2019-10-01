template < typename Itr >
void reverse(Itr first, Itr last)
{
	auto aux = (last - first)/2;

	while (aux--) std::iter_swap(first++, --last);
}

template < typename Itr, typename Compare >
std::pair<Itr, Itr> minmax( Itr first, Itr last, Compare cmp )
{
	Itr min = first;
	Itr max = first;

	if(first == last) return std::make_pair(first, first);

	++first;
	while (first != last)
	{
		if(cmp(*first, *min)) min = first;
		if(cmp(*max, *first) or (!cmp(*first, *max) and !cmp(*max, *first))) max = first;
		first++;
	}

	return std::make_pair(min, max);
}

template < typename Itr >
Itr copy( Itr first, Itr last, Itr d_first )
{
	while (first != last) *(d_first++) = *(first++);
	return last;
}

template < typename Itr, typename Predicate >
Itr find_if( Itr first, Itr last, Predicate p )
{
	while (first != last) if( p( *first++ ) ) return --first;
	return last;
}

template < typename Itr, typename T, typename Equal >
Itr find( Itr first, Itr last, const T & value, Equal eq )
{
	while (first != last) if( eq( *(first++), value ) ) return --first;
	return last;
}

template < typename Itr, typename Predicate >
bool all_of(Itr first, Itr last, Predicate p)
{
	while (first != last) if( !p( *(first++) ) ) return false;
	return true;
}

template < typename Itr, typename Predicate >
bool any_of(Itr first, Itr last, Predicate p)
{
	bool aux = false;
	if(first == last) return !aux;
	while (first != last) if( p( *(first++) ) ) return !aux;
	return aux;
}

template < typename Itr, typename Predicate >
bool none_of(Itr first, Itr last, Predicate p)
{
	while (first != last) if( p( *(first++) ) ) return false;
	return true;
}

template < typename Itr, typename Equal >
bool equal( Itr first, Itr last, Itr first2, Equal eq )
{
	while (first != last) if( !eq( *(first++), *(first2++) ) ) return false;
	return true;
}

template < typename Itr, typename Equal >
bool equal( Itr first, Itr last, Itr first2, Itr last2, Equal eq )
{
	if(last - first != last2 - first2) return false;
	while (first != last) if( !eq( *(first++), *(first2++) ) ) return false;
	return true;
}

template < typename Itr, typename Predicate >
Itr partition( Itr first, Itr last, Predicate p )
{
	Itr aux = first;
	while (first != last)
	{
		if( p( *first ) ) std::iter_swap(first, aux++);
		first++;
	}
	return aux;
}
