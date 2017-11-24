V = [1,2,3]
A = [[2,3],[1,3],[]]

def SumVertexDegreesList(V, A):
    d = 0
    for v in V:
        dv = 0
        for u in A[V.index(v)]:
            dv = dv + 1;
        d = d + dv
    return d

print SumVertexDegreesList(V, A)
