void dfs(int** M, int *visit, int* MColSize, int j){

    if(/*i<0||i>=MSize || */j<0||j>=MColSize[0] || visit[j]!=0)  return;

    visit[j] = 1;
    for(int i=0; i<MColSize[0]; i++) { 
        if(M[j][i]) {
            // visit[j] = 1;
            dfs(M, visit, MColSize,i);
        }
    }
}

int findCircleNum(int** M, int MSize, int* MColSize){
    
    if(M==NULL|| MSize==0 || MColSize==NULL) return 0;
    int visit[*MColSize];
    memset(visit, 0, sizeof(visit));
    
    int cnt = 0;
    for(int i=0; i< MSize; i++) {
        if(visit[i]==0) {
            cnt++;
            dfs(M, visit, MColSize, i);
        }
    }
    
    return cnt;
}
