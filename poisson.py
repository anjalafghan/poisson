import math

lambdap = 0.3
r = 0


def probability(r):
    if r <= 0:
        return math.pow(lambdap, -r) * (math.exp(-lambdap)/ math.factorial(r))
    else:

        return (lambdap/r+1) * probability(r-1)


 for lambdap in :
     print(probability(r))

#print(probability(r))





