for G with the grammar with vocabulary V = {S,A,a,b}, set of terminals T = {a,b}, starting symbol S, and productions P = {S->aA, S-> b, A->aa}. What is L(G), the language of this grammar?

					S-> aA
						 /  \ 
					aaa		 --
					/
				 T

					S-> b
						/  \
					T      --
So, L(G) = { aaa,b}




Give a phrase-structure grammar that generates the set {0n1n | n = 0, 1, 2, . . . }.

Should be able to produce 01, 0011, 000111, 00001111, …

S={0S1, }, 0 = { }
