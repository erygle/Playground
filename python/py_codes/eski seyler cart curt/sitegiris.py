import requests
import json

class GitHub:
    def __init__(self):
        self.api_url = "https://api.github.com"
        self.token = "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"
        
    def getUser(self,username):
        response = requests.get(self.api_url+"/users/"+username)
        return response.json()
    def getRepositories(self,username):
        repos = requests.get(self.api_url+"/users/"+username+"/repos")
        return repos.json()
    def createRepository(self,username):
        response = requests.post(self.api_url+"/users/repos?access_token="+self.token,json = {
            "name": username,
            "description": "This is your first repository",
            "homepage": "https://erygle.com",
            "private": False,
            "has_issues": True,
            "has_projects": True,
            "has_wiki": True
        })
        return response.json()
        
github = GitHub()
while True:
    secim = input('1- Find User\n2- Get Repositories\n3- Create Repository\n4- Exit\nSeçim: ')

    if secim == '4':
        break
    elif secim =='1':
        username = input("İsim giriniz : ")
        result = github.getUser(username)
        print(f"name: {result['name']} public repos: {result['public_repos']}  follower : {result['followers']}")
    elif secim =='2':
        username = input("İsim giriniz : ")
        reposes = github.getRepositories(username)
        for i in reposes:
            print(i["name"])
    elif secim =='3':
        username = input("İsim giriniz : ")
        result = github.createRepository(username)
        print(result)
    else:
        print("Wrong choice.")