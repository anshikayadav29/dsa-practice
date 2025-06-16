import pandas as pd
import re
import string
from sklearn.feature_extraction.text import CountVectorizer
from sklearn.naive_bayes import MultinomialNB
from sklearn.metrics import accuracy_score, classification_report

df = pd.read_csv("emails.csv")

df['label'] = df['label'].astype(str).str.strip().str.lower()
df['label'] = df['label'].map({'ham': 0, 'spam': 1})
df = df.dropna()

def clean(text):
    text = str(text).lower()
    text = re.sub(r'\d+', '', text)
    text = text.translate(str.maketrans('', '', string.punctuation))
    return text.strip()

df['message'] = df['message'].apply(clean)

X = df['message']
y = df['label']

cv = CountVectorizer()
X_cv = cv.fit_transform(X)

model = MultinomialNB()
model.fit(X_cv, y)

y_pred = model.predict(X_cv)

print("Accuracy:", accuracy_score(y, y_pred))
print(classification_report(y, y_pred))

def check_spam(text):
    text = clean(text)
    vec = cv.transform([text])
    pred = model.predict(vec)
    return "SPAM " if pred[0] == 1 else "NOT SPAM "

print(check_spam("Win a free iPhone now!"))
print(check_spam("Meeting is confirmed at 2 PM"))