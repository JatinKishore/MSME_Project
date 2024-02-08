import matplotlib.pyplot as plt

# Define x values
x_values = list(range(1, 16))

# Plot each x value with a different marker and color
for x in x_values:
    # Use different markers and colors for each line
    marker = 'o' if x != 7 else 's'  # Use 's' marker for x = 7
    color = 'b' if x != 7 else 'r'  # Use 'r' color for x = 7

    # Set y value
    y_value = 80 if x == 7 else 0

    # Plot the point
    plt.plot(x, y_value, marker=marker, color=color, label=f'Sensor={x}')

# Add labels and title
plt.xlabel('X values')
plt.ylabel('Y values')
plt.title('Time Recognized algorithm on Multiple Sensors')

# Display a legend
plt.legend()

# Show the plot
plt.show()
