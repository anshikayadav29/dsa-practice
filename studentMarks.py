import pandas as pd

# Create sample dataIR
data = {
    'Name': ['Amit', 'Sneha', 'Ravi'],
    'Maths': [78, 85, 67],
    'Science': [82, 79, 72],
    'English': [74, 88, 70]
}

# Convert to DataFrame
df = pd.DataFrame(data)

# Calculate average
df['Average'] = df[['Maths', 'Science', 'English']].mean(axis=1)

# Show result
print("Student Marks with Average:\n")
print(df)