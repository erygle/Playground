import pandas as pd

def calculate_special_bonus(employees: pd.DataFrame) -> pd.DataFrame:
    employees['bonus']=0
    employees.loc[(employees['employee_id']%2 != 0) & (~employees['name'].str.startswith('M')),'bonus'] = employees['salary']
    df = employees[['employee_id','bonus']].sort_values(by='employee_id',ascending=True)
    return df
data = [[2, 'Meir', 3000], [3, 'Michael', 3800], [7, 'Addilyn', 7400], [8, 'Juan', 6100], [9, 'Kannon', 7700]]
Employees = pd.DataFrame(data, columns=['employee_id', 'name', 'salary']).astype({'employee_id':'int64', 'name':'object', 'salary':'int64'})
df = calculate_special_bonus(Employees)
print(df)