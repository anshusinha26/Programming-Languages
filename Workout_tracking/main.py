# -------------------- MODULES --------------------
"""imported requests module"""
import requests

"""imported datetime module as dt"""
import datetime as dt

# -------------------- WORKING WITH NUTRTIONIX --------------------
"""variables to store the id and api key"""
import requests

nuApiId = "61ce24a7"
nuApiKey = "087d55a1d6f2333fa272497e6bd9646e"

"""variable to store the endpoint"""
nuEndpoint = "https://trackapi.nutritionix.com/v2/natural/exercise"

"""dictionary to hold the headers"""
headers = {
    "x-app-id": nuApiId,
    "x-app-key": nuApiKey
}

"""dictionary to hold the parameters"""
nuParameters = {
    "query": input("Tell me which exercise you did: "),
    "gender": "male",
    "weight_kg": 55,
    "height_cm": 170,
    "age": 19
}

"""variable to hold the response"""
nuResponse = requests.post(url=nuEndpoint, json=nuParameters, headers=headers)
nuData = nuResponse.json()


# -------------------- WORKING WITH SHEETY --------------------
"""getting time"""
time = dt.datetime.now().strftime("%X")

"""getting date"""
date = dt.datetime.now().strftime("%d/%m/%Y")

"""variable to store the endpoint"""
shEndpoint = "https://api.sheety.co/ca1f37009612162d30a52c2a7eb8a469/myWorkouts/workouts"

bearerHeaders = {
    "Authorization": "Bearer jkgkjh43r534-df23dxcvw2-vf242"
}

for exercise in nuData["exercises"]:
    sheet_inputs = {
        "workout": {
            "date": date,
            "time": time,
            "exercise": exercise["name"].title(),
            "duration": exercise["duration_min"],
            "calories": exercise["nf_calories"]
        }
    }

    sheet_response = requests.post(url=shEndpoint, json=sheet_inputs, headers=bearerHeaders)

    print(sheet_response.text)


