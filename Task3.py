import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import r2_score
import matplotlib.pyplot as plt

df = pd.read_csv("cars.csv")
df = df.dropna()

features = df[['Year', 'Engine_Power', 'Mileage']]
target = df['Price']

X_train, X_test, y_train, y_test = train_test_split(features, target, test_size=0.2, random_state=42)

model = LinearRegression()
model.fit(X_train, y_train)

predictions = model.predict(X_test)
accuracy = r2_score(y_test, predictions) * 100

new_car = pd.DataFrame([[2019, 120, 18.5]], columns=['Year', 'Engine_Power', 'Mileage'])
predicted_price = model.predict(new_car)[0]

print(f"Accuracy: {accuracy:.2f}%")
print(f"Predicted Price: ₹{int(predicted_price)}")

plt.figure(figsize=(8, 5))
plt.scatter(y_test, predictions, color='purple')
plt.plot([min(y_test), max(y_test)], [min(y_test), max(y_test)], color='green')
plt.xlabel("Actual Price")
plt.ylabel("Predicted Price")
plt.title("Actual vs Predicted Car Prices")
plt.grid(True)
plt.tight_layout()
plt.show()