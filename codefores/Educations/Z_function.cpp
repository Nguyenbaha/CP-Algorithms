vector<int> z_algorithm(const string & s)
	{
		int n = s.size();
		vector<int> z(n);
		int x = 0, y = 0;
		for (int i = 1; i < n; ++i)
		{
			if (i <= y) z[i] = min(z[i - x], y - i);
			while (i + z[i] < n && s[z[i]] == s[i + z[i]]) z[i]++;
			if (i + z[i] > y) x = i, y = i + z[i];
		}
		return z;
	}
