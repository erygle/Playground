import pandas as pd

def second_highest_salary(employee: pd.DataFrame) -> pd.DataFrame:
    df = employee['salary'].drop_duplicates()
    if len(df)<2:
        return pd.DataFrame({'SecondHighestSalary' : [None]})
    df = df.sort_values(ascending=False)
    second = df.iloc[1]
    return pd.DataFrame({'SecondHighestSalary' : [second]})
data = [[1, 100], [2, 200], [3, 300]]
Employee = pd.DataFrame(data, columns=['id', 'salary']).astype({'id':'int64', 'salary':'int64'})
df = second_highest_salary(Employee)
print(df)