import matplotlib.pyplot as plt
import numpy as np

# Function for marginal cost curve
def mc(q):
    return 2 + q

# Function for average total cost curve
def atc(q):
    return 3 + q / q

# Function for demand curve
def demand(p):
    return 10 - p

# Function for shifted demand curve
def demand_shifted(p):
    return 15 - p

# Function for supply curve
def supply(p):
    return 2 + p

# Price range
p = np.arange(0, 11, 0.1)

# Quantity demanded at each price
q_demand = demand(p)
q_demand_shifted = demand_shifted(p)

# Quantity supplied at each price
q_supply = supply(p)

# Plotting the first graph (MC, ATC, MR)
plt.figure(figsize=(10, 5))
plt.plot(p, mc(p), label='MC')
plt.plot(p, atc(p), label='ATC')
plt.axhline(y=5, color='r', linestyle='-', label='MR')  # Assuming constant marginal revenue (perfectly elastic demand)

plt.xlabel('Price (P)')
plt.ylabel('Cost/Revenue')
plt.title('MC, ATC, and MR curves for a perfectly competitive firm')
plt.legend()
plt.grid(True)

# Plotting the second graph (Supply and Demand with Demand Curve Shift)
plt.figure(figsize=(10, 5))
plt.plot(p, q_demand, label='Demand')
plt.plot(p, q_demand_shifted, label='Demand (Shifted Right)', linestyle='--')
plt.plot(p, q_supply, label='Supply')

plt.xlabel('Price (P)')
plt.ylabel('Quantity (Q)')
plt.title('Supply and Demand curves with Demand Shift')
plt.legend()
plt.grid(True)

plt.show()
