import pandas as pd
def department_highest_salary(employee: pd.DataFrame, department: pd.DataFrame) -> pd.DataFrame:
    if employee.empty or department.empty:
        return pd.DataFrame(columns=['Department','Employee', 'Salary'])
    df = employee.merge(department, left_on='departmentId', right_on='id', suffixes=('_employee', '_department'))
    df = df.groupby('departmentId').apply(lambda x: x[x['salary'] == x['salary'].max()])
    df = df.reset_index(drop=True)
    df = df[['name_department', 'name_employee', 'salary']]
    df.columns = ['Department', 'Employee', 'Salary']
    return df
data = [[1, 'Joe', 70000, 1], [2, 'Jim', 90000, 1], [3, 'Henry', 80000, 2], [4, 'Sam', 60000, 2], [5, 'Max', 90000, 1]]
Employee = pd.DataFrame(data, columns=['id', 'name', 'salary', 'departmentId']).astype({'id':'Int64', 'name':'object', 'salary':'Int64', 'departmentId':'Int64'})
data = [[1, 'IT'], [2, 'Sales']]
Department = pd.DataFrame(data, columns=['id', 'name']).astype({'id':'Int64', 'name':'object'})
df = department_highest_salary(Employee, Department)
print(df)