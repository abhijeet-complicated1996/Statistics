# p(k,lambda) is the poisson probability ,which is the probability of getting exactly
#K successes when the average number of successes is lambda=(lambda^k)*e^(-lambda)/fact(k)
from math import factorial, exp

mean = float(input())
k = int(input())

poisson = ((mean ** k) * exp(-mean)) / factorial(k)

print("%.3f" % poisson)