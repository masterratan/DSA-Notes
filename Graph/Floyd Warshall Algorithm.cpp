class Solution {
public:
	const int INF = 1e9;
	void shortestDistance(vector<vector<int>>&matrix) {
		int V = matrix.size();

		for(int i=0; i<V; i++){
			for(int j=0; j<V; j++){
				if(matrix[i][j] == -1) matrix[i][j] = INF;
			}
		}

		for(int via=0; via<V; via++){
			for(int i=0; i<V; i++){
				for(int j=0; j<V; j++){
					matrix[i][j] = min(matrix[i][j], matrix[i][via] + matrix[via][j]);
				}
			}
		}

		for(int i=0; i<V; i++){
			if(matrix[i][i] < 0){
				cout<<"Negative edge weight cycle detected\n";
				return;
			}
		}

		for(int i=0; i<V; i++){
			for(int j=0; j<V; j++){
				if(matrix[i][j] == INF) matrix[i][j] = -1;
			}
		}
	}
};