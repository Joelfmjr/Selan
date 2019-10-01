#include <iostream>
#include <array>
#include <cassert>
#include "../include/searching.h"

struct Card {
	enum class suit : int
	{
		clubs    = 0,
		diamonds = 1,
		hearts   = 2,
		spades   = 3,
	};

	suit s;     // Naipe (suit)
	unsigned short r;     // rank
};

std::ostream& operator<<( std::ostream& os, const Card & c )
{
	std::string ranks_to_str[]{"as", "2", "3", "4", "5", "6", "7", "8", "9", "10", "jack", "queen", "king", "joker"};
	std::string suits_to_str[]{ "clubs", "diamonds", "hearts", "spades" };
	os << ranks_to_str[c.r];
// Para evitar de associar um naipe ao curinga.
	if ( c.r < 13 ) os << " of " << suits_to_str[static_cast<int>(c.s)];

	return os;
}


/// Retornar true se a carta a for menor do que a carta b.
bool equal_cards( const Card & a, const Card & b )
{
	return a.s == b.s and a.r == b.r;
}
bool equal_ints( const int& a, const int& b )
{
	return a == b;
}

int main(void)
{
	Card hand[] { {Card::suit::clubs, 2}, {Card::suit::hearts, 8}, {Card::suit::spades, 11} };

	Card c1{Card::suit::spades, 11}, c2{Card::suit::diamonds, 10};

	for ( const Card &e : hand )
	{
		std::cout << e << ", ";
	}
	std::cout << std::endl;


	const Card * result = lsearch( std::begin(hand), std::end(hand),                   // onde procurar
	                               c1,                 // o que estou procurando.
	                               equal_cards );                 // Como comparar as coisas

	if ( result == std::end( hand ) )
		std::cout << ">>> Card " << c1 << " não esta na mao.\n";
	else
		std::cout << ">>> Carta encontrada com sucesso!\n";

	int A[] { 2, 3, 4, 7, 0, 2, 12, -3 };
	int target{ 7};

	auto x = lsearch( std::begin(A), std::end(A), target, equal_ints );

	std::cout << ">>> Valor " << target;
	if ( x == std::end( A ) )
		std::cout << " não encontrado.\n";
	else
		std::cout << " encontrada com sucesso!\n";
	return 0;
}
