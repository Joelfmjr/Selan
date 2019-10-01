#include "../include/bigint.h"

BigInt::BigInt(const string & s)
{
	//TODO: inverter os caracteres de s e armazenar
	// em m_digits.
	for (int i = s.length() - 1; i >= 0; i--)
	{
		m_digits.push_back(s[i]);
	}
}

BigInt BigInt::operator+(const BigInt & n) const
{
	//TODO: somar e retornar...
}

string BigInt::toString( )
{
	//TODO: Converter de vector para string.
	string s;
	int aux = 0;
	auto x = m_digits.end();
	while(x != m_digits.begin())
	{
		s[aux++] = *x;
	}
	cout << s << endl;
}