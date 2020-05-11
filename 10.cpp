class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
    vector< pair<int,int> > degrees(N, { 0, 0 } ); 
	for( auto t : trust ) {
		++degrees[ t[1]-1 ].first;
		++degrees[ t[0]-1 ].second;
	}

	for( int i=0; i<N; i++ )
		if( degrees[i].first == N - 1 && degrees[i].second == 0 ) return i+1;
	return -1;
        
    }
};
