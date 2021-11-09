
-- Palindrome
bool isPalindrome(string s)
{
	int limit = s.length()/2;
	for(int i =  0 ; i < limit ; i++)
		if(s[i] != s[s.length()-i-1])
			return false;
	return true;
}

--- Prime
bool isPrime(int n)
{
	int root = sqrt(n);
	if(n<2) return 0;
	if(n==2) return 1;
	if(n%2==0) return 0;
	for(int i = 3 ; i <= root ; i++;) if(n%i == 0) return 0;
	return 1;
}
