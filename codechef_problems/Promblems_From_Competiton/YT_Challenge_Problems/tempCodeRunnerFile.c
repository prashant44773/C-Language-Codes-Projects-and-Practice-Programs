 for (int i = 0; i <= num1 && i <= num2; i++)
    {

        // Check if i is a Factor of both intgers .......//
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }