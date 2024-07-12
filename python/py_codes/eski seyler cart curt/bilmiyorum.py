import os
import re
import datetime
import json
import requests
import time
from selenium import webdriver

#-------------------------------------------------------------------------

#                                OS

#print(os.getcwd()) //klasorun nerde oldugunun bilgisi

#os.mkdir("aylin") // klasor olusturma

#os.chdir() //dizin secer

#os.chdir("..") //bir ust dizine gecer

#os.makedirs("xd/xdicinde") //dosya icinde dosya acma

#result = os.listdir() //secilen klasordeki dosyalari gosterir

#os.stat() //belirtilen dosya hakkında bilgi verir
#result = os.stat("helin.py") //secili dosyanin istatistiklerini alır
#result = datetime.datetime.fromtimestamp(result.st_ctime) //olusturlma tarihini belirtir
#result = datetime.datetime.fromtimestamp(result.st_atime) //son eriisilme tarihi
#result = datetime.datetime.fromtimestamp(result.st_mtime) //degistirilme tarihi

#os.system("notepad.exe") // pcdeki seiclen uygulamayi acar

#os.rename("","") //klasor adı degistirmek icin

#os.rmdir("") //klasor silmek icin

#result = os.path.abspath("helin.py") //dosya konumunu verir
#result = os.path.dirname("") //dizin adindan dosya adini cikarir
#result = os.path.exists("") //dosyanin var olup olmadigini kontrol eder
#result = os.path.isdir("") //dizin olup olmadigini kontrol eder
#result = os.path.isfile("") //dosya olup olmadigini kontrol eder

#-------------------------------------------------------------------------

#                              Regular Expression

#result = "str"
#result2 = re.findall("ifade", degisken) //degiskenin icinde istenilen değer adedini liste olarak dondurur

#result = re.split("ifade",degisken) //verilen ifadeleri secip karakterleri ayirir
#strr = "naber bugun nasilsin"
#result = re.split(" ", strr)
#print(result)

#result = re.sub(" ", "+", strr) //ilk verilen degerleri bulup diger degerle degistirir
#print(result)

#strr = "naber bugun nasilsin"
#result = re.search("naber", strr) //istenilen degeri degiskende arar
#result = result.span() //istenilen degerin bas. ve bitis araligini verir
#result = result.start() //degerin baslangici
#result = result.end() //degerin bitisi
#result = result.group() //istenilen degerin ne oldugunu soyler
#result = result.string //degiskenin tamamini verir.
#print(result)

"""
    [] - Köşeli parantezler arasına yazılan bütün karakterler
         aranır.
         [abc] => a      : 1 match
                  ac     : 2 match 
                  Python : No matches
         [a-e]  => [abcde]
         [1-5]  => [12345]
         [0-39] => [01239]   
         [^abc] => abc dışındaki karakterler.
         [^0-9] => rakam olmayan karakterler.
"""

strr = "naber bugun nasilsin"
#result = re.findall("[abc]", strr)
#result = re.findall("[tvh]", strr)
#result = re.findall("[a-g]", strr)
#result = re.findall("[^abc]", strr)
#result = re.findall("[^0-9]", strr)
#print(result)

"""
    . - Her hangi bir tek karakteri belirtir.
        .. => a    : No match
              ab   : 1 match
              abc  : 1 match
              abcd : 2 matches
    
"""

#result = re.findall("...", strr)
#result = re.findall("..a", strr)
#result = re.findall(".a.", strr)
#result = re.findall("a", strr)
#print(result)

"""
    ^ - Belirtilen string karakterlerle başlıyor mu ?
    ^a => a:    1 match
          abc:  1 match
          bac:  No match
"""

#result = re.findall("^n", strr)
#result = re.findall("^a", strr)
#result = re.findall("^bu", strr)
#print(result)

"""
    $ - Belirtilen karakterle bitiyor mu ?
    a$ => a      : 1 match
          lamba  : 1 match
          Python : No match 
"""
#result = re.findall("a$", strr)
#result = re.findall("n$", strr)
#print(result)

"""
     * - Bir karakterin sıfır ya da daha fazla sayıda olmasını 
         kontrol eder.
         ma*n => mn     : 1 match
                 man    : 1 match
                 maaan  : 1 match
                 main   : No match (a' nın arkasına n gelmiyor.) 
"""

#result = re.findall("na*b", strr)
#result = re.findall("na*e", strr)
#print(result)

"""
    \ - Özel karakterleri aramamızı sağlar.
        \$a => $ karakterinin arkasına a karakterinin arar. Yani
               $ regular exp. engine tarafından yorumlanmaz.
    
    \A - Belirtilen karakter string in başında mı ?
         \Athe => the string in başındamı
        result = re.findall("\APython", str)
        result = re.findall("saat\Z", str)
    
    \Z - Belirtilen karakter string in sonunda mı ?
         the\Z => the string in sonunda mı
    
    \b - Belirtilen karakter kelimenin in başında ya da sonunda mı ?
         \bthe => the kelimenin in başında mı?
         the\b => the kelimenin in sonunda mı?
    
    \B - Belirtilen karakter kelimenin in başında ya da sonunda değil mı ?
         \Bthe => the kelimenin in başında değil mi?
         the\B => the kelimenin in sonunda değil mi?
    
    
    \d - [0-9] ile aynı anlama gelir yani rakamları arar.
         \d => 12abc34
    
    \D - [^0-9] ile aynı anlama gelir yani rakam olmayanları arar.
         \D => 1ab44_50
    
    \s - Boşluk karakterlerini arar.  
    
    \S - Boşluk karakterleri dışındakiler.
    
    \w - Alfabetik karakterler, rakamlar ve alt çizgi karakteri.
    
    \W - \w nin tam tersi
    
"""

#-------------------------------------------------------------------------

#                              JSON

person_str = '{"name" : "sahil", "languages" : ["C++","Python"]}'
person_dict = {"name" : "sahil", "languages" : ["C++","Python"]}

'''string to dict'''
#result = json.loads(person_str)
#result = result["languages"][0]
#print(type(result))


#with open("person.json") as f:
#    data = json.load(f)
#    print(data)
#print(data["name"])

'''dict to string'''
#result = json.dumps(person_dict)
#print(result["name"]) //hata vericek
#print(result)
#print(type(result))

#with open("person.json","w") as file:
#    json.dump(person_dict , file)

#result = json.dumps(person_dict, indent=3, sort_keys=True)
#print(result)
#print(person_dict)

#-------------------------------------------------------------------------

#                                 Requests

#result = requests.get("https://jsonplaceholder.typicode.com/todos") //web sitesi bilgisini alır 
#result = result.text //bilgileri yazdirir
#data = json.loads(result) //str to dict
#print(data[198]["title"])
#print(len(data))
#for i in data:
#    print(i["completed"])
#userIdList = []
#for i in data:
#    if i["completed"] == True:
#        print(i["userId"])
#        userIdList.append(i["userId"])
#print(f"\nlistenin uzunlugu : {len(userIdList)}")

'''
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
'''
#-------------------------------------------------------------------------

#                             Selenium

#driver = webdriver.Chrome()

#url = "https://twitter.com/home"
#time.sleep(3) #programin kac saniye sonra baslayacigini belirler
#driver.get(url) #sayfayı acmak icin kullanılır
#driver.maximize_window() #ekranı buyutur
#driver.save_screenshot("ss1.png") #ss aldı
#print(driver.title) #sayfa baslığını yazdırdı
#time.sleep(5)
#driver.forward() #ileri
#driver.back() #geri
#driver.close() #sayfayı kapatır





























