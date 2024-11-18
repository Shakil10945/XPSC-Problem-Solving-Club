    for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (!(vec_set[i].count(j)))
                {
                    cout << j << " ";
                    break;
                }
            }
        }
        cout << endl;
    }
