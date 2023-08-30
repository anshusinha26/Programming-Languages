# -------------------- MODULES --------------------
"""imported requests module"""
import requests

"""imported Client class from the twilio.rest module"""
from twilio.rest import Client

"""imported os module"""
import os


# -------------------- API AND LOCATION DATA --------------------
"""openweather api endpoint"""
owEp = "https://api.openweathermap.org/data/2.5/onecall"

"""openweather api key"""
owApiKey = "2c7a6cd8fd372cf4b675c1e6059f1863"

"""location data"""
MY_LAT = 21.860285
MY_LONG = 84.034145

"""dictionary to hold the parameters"""
parameters = {
    "lat": MY_LAT,
    "lon": MY_LONG,
    "appid": owApiKey,
    "exclude": "current,minutely,daily"
}


# -------------------- GETTING DATA FROM OPENWEATHER--------------------
"""variable to store the response"""
response = requests.get(url=owEp, params=parameters)
response.raise_for_status()

"""variable to store the condition of rain"""
willRain = False

for i in range(13):
    weatherData = response.json()["hourly"][i]["weather"][0]["id"]
    if weatherData < 700:
        willRain = True
        break


# -------------------- WORKING WITH TWILIO --------------------
"""twilio sid"""
twAccountSid = "AC4756c85ebeda51fdebc6a951242c6f25"

"""twilio token"""
twAuthToken = "aeb19ef48f7bd1fdb29547e1e84bfef9"
"""setting up twilio client"""
client = Client(twAccountSid, twAuthToken)

"""message will be sent when, if willRain holds true"""
if willRain:
    message = client.messages.create(
      body="It's going to rain today. Be sure to bring an umbrella",
      from_="+14407501284",
      to="+918249017941"
    )
    print(message.status)



