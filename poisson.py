lambdap = float(input("Value of lambda?"))
r = float(input("value of r in P(X=r)"))

def poisson(r):
	
	return 

def probability( r ):
		if r <= 0:
			return lambdap/r+1
		else:
			return (lambdap/r+1)*probability(r-1)
		
probability(r)




