class Solution {
public:
    
    
    
    
    int n , m ; 
    
    
    int find ( vector<vector<int>>& arr , int i , int j )
    {
        
        
        
        
                    int c = 0 ; 
                    if ( i - 1 >= 0  and abs ( arr [ i - 1  ] [ j ] ) == 1 )
                            c++ ; 
                    if ( j - 1 >= 0 and abs ( arr [ i ] [ j - 1 ] ) == 1 )
                            c++ ; 
                    
                    if ( i + 1 < n and abs ( arr [ i + 1 ] [ j  ] ) == 1 )
                            c++ ; 
                    
                    if ( j + 1 < m and abs ( arr [ i ] [ j + 1 ] ) == 1 )
                            c++ ; 
        
        
        
                        
                    if ( i + 1 < n and j + 1 < m and abs ( arr [ i + 1 ] [ j + 1 ] ) ==1 ) 
                                c++; 
        
                        
                        if ( i + 1 < n and j - 1 >= 0 and abs ( arr [ i + 1 ] [ j - 1 ] ) ==1 )
                                c++;
                        
                        
                        if ( i - 1 >= 0 and j + 1 < m and abs ( arr [ i - 1 ] [ j + 1 ] ) ==1 ) 
                                c++; 
                            
                            
                            
                            if ( i -1 >= 0 and j - 1 >= 0 and abs ( arr [ i - 1 ] [ j - 1 ] ) ==1 )
                                        c++;
                                
                        
                    return c ; 
        
    }
    
    
    
    
    void gameOfLife(vector<vector<int>>& arr )
    {
        
        
        
        n = arr.size() ; 
        m = arr [ 0].size() ; 
        
        
            for ( int i = 0 ; i < n ; i ++ )
            {
                for ( int j = 0 ; j < m ; j ++ )
                {
                    
                    
                    
                    int c = find ( arr , i , j ) ; 
                            
                    if ( arr [ i ] [ j ] == 0 and c == 3 ) 
                        arr [ i ] [ j ] = 2 ; 
                    else if ( arr [ i  ] [ j ] == 1 ) 
                    {
                        if ( c < 2 or c > 3 ) 
                                arr [ i ] [ j ] = -1 ; 
                        else 
                                arr [ i ] [ j ] = 1 ;
                    }
                }
            }
        
        
            for ( int i = 0 ; i < n ; i ++ )
            {
                for ( int j = 0 ; j < m ; j ++ )
                {
                    
                    
                    if ( arr [ i ] [ j ] == -1 )
                            arr [ i ] [ j ] = 0 ; 
                    if ( arr [ i ] [ j ] == 2 )
                            arr [ i ] [ j ] = 1 ; 
                }
            }
        
        
    }
};