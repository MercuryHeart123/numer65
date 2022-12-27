x0 = 0
E = 100
def func(x):
    return 2*(1-x*x)/3

while E > 0.000001:
    x1 = func(x0)
    E = abs((x1 - x0) / x1)
    x0 = x1

print(x0)