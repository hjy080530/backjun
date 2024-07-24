 int da[n+1],su[n+1],h[n+1];

    for(i=0; i<n; i++){
        cin>>da[i];
        h[i]=da[i];
    }
    sort(da,da+n);
    for(i=0; i<n; i++)su[i]=i+da[i];
    for(i=0; i<n; i++){
        for(j=0; j<n; i++){
            if(da[i]==h[j]){
            cout<<su[i]-da[i]<<" ";
            }
        }
        
    }
    
    return 0;
}