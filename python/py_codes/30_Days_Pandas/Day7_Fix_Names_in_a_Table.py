import pandas as pd

def fix_names(users: pd.DataFrame) -> pd.DataFrame:
    users['name'] = users.name.str.capitalize()
    df = users.sort_values(by='user_id',ascending=True)
    return df
data = [[1, 'aLice'], [2, 'bOB']]
Users = pd.DataFrame(data, columns=['user_id', 'name']).astype({'user_id':'Int64', 'name':'object'})
df = fix_names(Users)
print(df)