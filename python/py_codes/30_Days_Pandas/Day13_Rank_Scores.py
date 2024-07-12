import pandas as pd

def order_scores(scores: pd.DataFrame) -> pd.DataFrame:
    df = pd.DataFrame()
    df['score'] = scores.score.sort_values(ascending=False)
    df['rank'] = scores.score.rank(method='dense',ascending=False)
    return df
data = [[1, 3.5], [2, 3.65], [3, 4.0], [4, 3.85], [5, 4.0], [6, 3.65]]
Scores = pd.DataFrame(data, columns=['id', 'score']).astype({'id':'Int64', 'score':'Float64'})
df = order_scores(Scores)
print(df)