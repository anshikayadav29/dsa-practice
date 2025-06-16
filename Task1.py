import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.neighbors import KNeighborsClassifier
from sklearn.metrics import accuracy_score

df = pd.read_csv("iris.csv")
x = df.drop("species", axis=1)
y = df["species"]

x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.2)

model = KNeighborsClassifier()
model.fit(x_train, y_train)
pred = model.predict(x_test)

print(accuracy_score(y_test, pred))