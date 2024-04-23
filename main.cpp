void nForest(int n)
{
    // Write your code here.
    if (n >= 1 || n <= 25)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
                cout << "* ";
            cout << "\n";
        }
    }
}
