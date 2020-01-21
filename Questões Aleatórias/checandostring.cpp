for(int i = 0; i < m; ++i){
    int j = 0;
    while(j<n and p[j] == text[i+j]){
        ++j;
    }
    if(j==n)
        cout<<j<<endl;
}
//z-function
//m = tamanho da palavra

