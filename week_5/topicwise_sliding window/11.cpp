int lenOfLongestSubarr(vector<int>& arr, int k) {
        int n = arr.size();
        long long sum = 0;
        int size = 0;  
        map<long long, int> my_map;
        
        for (int i = 0; i < n; i++) 
        {
            sum += arr[i];
            if (sum == k) 
                size = i + 1;
                
            if (my_map.count(sum - k)) 
                size = max(size, i - my_map[sum - k]);
                
            if (my_map.count(sum) == 0)
                my_map[sum] = i;
        }
        return size;
    }
    
    
int lenOfLongestSubarr(vector<int>& arr, int k) {    
        int n = arr.size();
        long long sum = 0;
        int l =0, r = 0, size = 0;
        vector<long long>ps(arr.size(), 0);
        ps[0] = arr[0];
        for(int i=1; i<n; i++)
            ps[i] = arr[i]+ps[i-1];
        
        map<long long, int> my_map;
        
        for(int i=0; i<n; i++)
            my_map[ps[i]] = i;
        
        for(int i = 0; i<n-1; i++)
        {
            if(my_map.count(ps[i] + k))
                size = max(size, my_map[ps[i] +k] - i +1);
            
            if(my_map.count(ps[i] - k))
                 size = max(size, abs(i- my_map[ps[i] -k]));
        }
        return size;
    }