// Hash-test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "hash.h"
#include "util.h"

int main()
{
	// the stratisx genesis header
	std::vector<char> out;
	out = parse_string("01000000000000000000000000000000000000000000000000000000000000000000000018157f44917c2514c1f339346200f8b27d8ffaae9d8205bfae51030bc26ba265b88ba557ffff0f1eddf21b00");
	
	uint256 res = HashX13(&out[0], &out[79]+1);
	
	// the stratisx genesis hash
	uint256 expexted = uint256("0x0000066e91e46e5a264d42c89e1204963b2ee6be230b443e9159020539d972af");
	assert(res == expexted);

    return 0;
}

