import json
import os
import re
import random as rn
#import akasya #animal list

commonAnimals = [
    {
        "name":"Bird",
        "value":19,
        "rarity":"Common"},
    {
        "name":"Cat",
        "value":21,
        "rarity":"Common"},
    {
        "name":"Fish",
        "value":14,
        "rarity":"Common"},
    {
        "name":"Dog",
        "value":28,
        "rarity":"Common"},
    {
        "name":"Squirrel",
        "value":17,
        "rarity":"Common"},
    {
        "name":"Rabbit",
        "value":32,
        "rarity":"Common"},
    {
        "name":"Bee",
        "value":12,
        "rarity":"Common"},
    {
        "name":"Snake",
        "value":23,
        "rarity":"Common"},
    {
        "name":"Fox",
        "value":42,
        "rarity":"Common"},
    {
        "name":"Frog",
        "value":34,
        "rarity":"Common"},
    {
        "name":"Raccoon",
        "value":39,
        "rarity":"Common"},
    {
        "name":"Chicken",
        "value":15,
        "rarity":"Common"},
    {
        "name":"Bat",
        "value":36,
        "rarity":"Common"},
    {
        "name":"Crab",
        "value":29,
        "rarity":"Common"},
    {
        "name":"Giraffe",
        "value":46,
        "rarity":"Common"}
    ]
rareAnimals = [
    {
        "name":"Elephant",
        "value":143,
        "rarity":"Rare"},
    {
        "name":"Zebra",
        "value":112,
        "rarity":"Rare"},
    {
        "name":"Octopus",
        "value":90,
        "rarity":"Rare"},
    {
        "name":"Koala",
        "value":189,
        "rarity":"Rare"},
    {
        "name":"Badger",
        "value":101,
        "rarity":"Rare"},
    {
        "name":"Eagle",
        "value":76,
        "rarity":"Rare"},
    {
        "name":"Bear",
        "value":124,
        "rarity":"Rare"},
    {
        "name":"Lion",
        "value":178,
        "rarity":"Rare"},
    {
        "name":"Jaguar",
        "value":196,
        "rarity":"Rare"}
    ]
    
epicAnimals = [
    {
        "name":"Capybara",
        "value":492,
        "rarity":"Epic"},
    {
        "name":"Duck",
        "value":315,
        "rarity":"Epic"},
    {
        "name":"Panda",
        "value":403,
        "rarity":"Epic"}
    ]
animals=[commonAnimals,rareAnimals,epicAnimals]
class Animal:
    def __init__(self,name,value,rarity):
        self.animalName = name
        self.value = value
        self.rarity = rarity

class Acts:
    def __init__(self):
        self.animals = []
        self.foundAnimal = {}
        
    def hunting(self,num):
        #randomNum = rn.randint(1, 100)
        if num <= 75:
            self.animal = rn.choice(commonAnimals)
        elif 75 < num < 95:
            self.animal = rn.choice(rareAnimals)
        else:
            self.animal = rn.choice(epicAnimals)
        animalinfo = Animal(name = self.animal["name"], value = self.animal["value"] , rarity = self.animal["rarity"])
        

    def huntResult(self , animalInfo : Animal):
        self.animals.append(animalInfo)
        self.saveFile()
    
    def information(self):
        print(f"Name : {self.foundAnimal.name}\nValue : {self.foundAnimal.value}\nRarity : {self.found.rarity}")

    def saveFile(self):
        list1 = []
        
        for anim in self.animals:
            list1.append(json.dumps(anim.__dict__))
        with open("inventory.json","a") as file:
            json.dump(list1 , file)
            print("\n")


acts = Acts()
balance = 0
print("Welcome Hunting Game".center(50))
while True:
    try:
        choice = int(input("1 - Hunting\n2 - Inventory\n3 - Animal Sell\n4 - Buy Badget\n5 - Balance\n6 - Exit\nSelect : "))
        if choice == 6:
            print("Exit...")
            break
        elif choice == 1: #Hunting
            randomNum = rn.randint(1, 100)
            acts.hunting(randomNum)
            animalinfo = Animal(name = acts.animal["name"], value = acts.animal["value"] , rarity = acts.animal["rarity"])
            acts.huntResult(animalinfo)
            print("You found " + acts.animal["name"])
            # print("Animal name = "+acts.animal["name"]+"\nValue = "+int(acts.animal["value"])+"\nRarity = "+acts.animal["rarity"])
        elif choice == 2: #Inventory
            pass
        elif choice == 3: #Animal sell
            print("Your animals : ")
            for i in acts.animals:
                print(i["name"])
        elif choice == 4: #Buy Badget
            pass
        elif choice == 5: #Balance
            pass
        else:
            print("Wrong choice.Choose between 1-6.")
    except:
        print("Wrong choice.\nExit...")
        break

















