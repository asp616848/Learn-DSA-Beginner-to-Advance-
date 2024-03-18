import numpy as np
import matplotlib.pyplot as plt

# Define the range of quantity
quantity = np.linspace(0, 10, 100)

# Define Marginal Revenue (MR) curves
MR1 = np.full_like(quantity, 5)  # Horizontal MR1 curve
MR2 = np.full_like(quantity, 5.5)  # Horizontal MR2 curve (slightly above MR1)

# Define Average Total Cost (ATC) curve
ATC = 0.5 * quantity**2 - 2 * quantity + 10  # U-shaped ATC curve

# Define Marginal Cost (MC) curve
MC = 0.5 * quantity - 2  # Upward sloping MC curve

# Plotting
plt.figure(figsize=(10, 6))

# Plot MR1 and MR2 curves
plt.plot(quantity, MR1, label='MR1', linestyle='--')
plt.plot(quantity, MR2, label='MR2', linestyle='--')

# Plot ATC curve
plt.plot(quantity, ATC, label='ATC', color='red')

# Plot MC curve
plt.plot(quantity, MC, label='MC', color='green')

# Plotting the intersection of MR1, ATC, and MC
intersection_point = np.argwhere(np.diff(np.sign(MC - MR1)) != 0).flatten()
plt.plot(quantity[intersection_point], MR1[intersection_point], 'ro')

# Plotting details
plt.title('Perfectly Competitive Market')
plt.xlabel('Quantity')
plt.ylabel('Price / Cost')
plt.legend()
plt.grid(True)
plt.ylim(0, 12)
plt.xlim(0, 10)

plt.show()
