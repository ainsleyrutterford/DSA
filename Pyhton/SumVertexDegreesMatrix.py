V = [1,2,3]
A = [[0,1,1],[1,0,1],[0,0,0]]

def SumVertexDegreesMatrix(V, A):
    d = 0
    for v in V:
        dv = 0
        for u in V:
            dv = dv + A[V.index(v)][V.index(u)]
        d = d + dv
    return d

print SumVertexDegreesMatrix(V, A)
