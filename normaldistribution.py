# Enter your code here. Read input from STDIN. Print output to STDOUT
#having erf function with integration
from math import *

std=2
def cum_def(x,mu):
    erf_ = erf((x-mu) / (std*sqrt(2)))
    p = (1 + erf_) / 2
    return p

print(round(cum_def(19.5,20),3))

print(round(cum_def(22,20)-cum_def(20,20),3))