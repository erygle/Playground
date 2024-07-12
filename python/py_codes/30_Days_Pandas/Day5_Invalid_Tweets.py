import pandas as pd

def invalid_tweets(tweets: pd.DataFrame) -> pd.DataFrame:
    df = pd.DataFrame()
    df['tweet_id'] = tweets[tweets['content'].str.len() > 15][['tweet_id']]
    return df
data = [[1, 'Vote for Biden'], [2, 'Let us make America great again!']]
Tweets = pd.DataFrame(data, columns=['tweet_id', 'content']).astype({'tweet_id':'Int64', 'content':'object'})
df = invalid_tweets(Tweets)
print(df)