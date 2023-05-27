for (int i = row; i >=0; i--)
    {
        for (int j = 0; j < row - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout<<endl;
    }