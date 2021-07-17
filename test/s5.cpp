vector<int> uoc, cou;
            uoc.push_back(1);
            cou.push_back(n);
            for(int i = 2; i*i <= n; i++){
                if(n%i==0) {uoc.push_back(i);
                    if(i*i!=n)
                        cou.push_back(n/i);
                }
            }
            // 2*uocsize > vt cout -1
            int S = uoc.size();
            if(vt > 2*S) cout << -1 <<endl;
            else if(vt > S){
                int l = vt-S;
                cout << cou[S-l] << endl;
            }
            else cout << uoc[vt-1] << endl;