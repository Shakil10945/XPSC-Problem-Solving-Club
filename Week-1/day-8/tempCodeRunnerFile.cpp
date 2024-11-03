for(int i=0;i<n; i++)
    {
        auto it = myset.find(vec.back());

        if(it != myset.end())
        {
            myset.erase(it);
            cout<<vec.back()<<endl;
        }
        vec.pop_back();
    }