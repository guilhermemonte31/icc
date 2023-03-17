import locale
import matplotlib.pyplot as plt
import pandas as pd
import seaborn as sns

df = pd.read_csv("netflix_titles.csv")

print("-------------------coluna")
print(df.columns)
print("-------------------info")
print(df.info())
print("-------------------shape")
print(df.shape)

df['Idade'] = 2023 - df['release_year']

print("\n\n-------------------TESTE--------------------")
print(df.info())


