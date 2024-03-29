#Second Poisson distribution 
# Input from stdin
#E(X^2)=lambda + lambda^2
#special case for poisson distribution
#E(X)=lambda
averageX, averageY = [float(num) for num in input().split(" ")]

# Cost
CostX = 160 + 40*(averageX + averageX**2)
CostY = 128 + 40*(averageY + averageY**2)

print(round(CostX, 3))
print(round(CostY, 3))