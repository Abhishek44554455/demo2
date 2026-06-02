
    int rightways=maze(sr+1,sc,er,ec);
    int downways=maze(sr,sc+1,er,ec);
    return rightways+downways;
}
int main(){
    cout