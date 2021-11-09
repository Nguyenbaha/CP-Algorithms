void build(int id, int l, int r)
{
    if(l ==  r)
        st[id] = a[l];
    else
    {
        int mid  = (l+r)/2;
        build(id*2,l,mid);
        biuld(id*2+1,mid+1,r);
        st[id] = st[id*2] + st[id*2+1];

    }
}
call : build(1,0,n-1);
//ham update
.// truy van a[i] = v;
// ham update trên cây ST, cập nhật cây con gốc id quản lý đoạn [l,r]
void update(int id, int l, int r, int i, int v)
{
    if(i < l || i>r)
        return;
    if(i==l || i==r)
    {
        st[i] = v;
        return;
    }
    int mid =(l+r)/2;
    update(id*2,l,mid,i,v);
    update(id*2+1,mid+1,r,i,v);
    st[id] =st[id*2] +st[id*2+1];
}
// truy vấn a[i] = v;
// hàm update trên cây ST, cập nhật gốc id quản lý đoạn [l,r];
void update(int id, int l, int r, int i, int v)
{
    if( i <l || i > r)
        return;
    if(i==l || i==r)
    {
        st[i] = v;
        return;
    }
    int mid =(l+r)/2;
    build(id*2,l,mid,i,v);
    build(id*2+1,mid+1,i,v);
    st[id] = st[id*2]+st[id*2+1];
}
// call: update(1,0,n-1,i,v);
// ham tính tổng trong đoạn [l,r] áp dụng cây ST:
int getSum(int id, int l,int r, int ql, int qr)
{
    if(ql <l || qr > r)
        return 0;
    if(ql==l && ql==r)
        return st[v];
    int mid = (l+r)/2;
    return getSum(id*2,l,mid,ql,qr)+setSum(id*2+1,mid+1,r,ql,qr);
}
