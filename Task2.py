import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

data = pd.read_csv("unemployment.csv")
print(data.columns)  

data['Date'] = pd.to_datetime(data['Date'], errors='coerce')

plt.figure(figsize=(12, 6))
sns.lineplot(data=data, x='Date', y='Unemployment Rate', hue='Region')
plt.title("Unemployment Trends by Region")
plt.xlabel("Time")
plt.ylabel("Unemployment Rate (%)")
plt.xticks(rotation=45)
plt.tight_layout()
plt.show()