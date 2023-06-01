# -------------------- MODULES --------------------
"""imported requests module"""
import requests

"""imported datetime and timedelta class from the datetime module """
from datetime import datetime, timedelta

"""imported Client class from the twilio.rest module"""
from twilio.rest import Client


# -------------------- COMPANY DETAILS --------------------
"""variables to store the company details"""
STOCK = "TSLA"
COMPANY_NAME = "Tesla Inc"


# -------------------- GETTING THE DATES --------------------
"""getting date"""
today = datetime.today()

yesterday = today - timedelta(days=1)
yestDate = yesterday.strftime('%Y-%m-%d')

dayBeforeYesterday = today - timedelta(days=2)
dayBefYestDate = dayBeforeYesterday.strftime('%Y-%m-%d')


# -------------------- ALPHA VANTAGE DATA --------------------
"""variable to store the api key"""
avApiKey = "MXA29SQHVXLW9CLL"

"""variable to store the defined function"""
function = "TIME_SERIES_DAILY_ADJUSTED"

"""variable to store the output size"""
outputsize = "compact"

"""dictionary to hold the parameters"""
avParameters = {
    "function": function,
    "symbol": STOCK,
    "outputsize": outputsize,
    "apikey": avApiKey
}

"""variable to hold the endpoint"""
avEndPoint = "https://www.alphavantage.co/query"

"""getting the data"""
avResponse = requests.get(url=avEndPoint, params=avParameters)
avResponse.raise_for_status()
avData = avResponse.json()

"""variables to store the yesterday's and a day before yesterday's data"""
yestData = float(avData["Time Series (Daily)"][yestDate]["4. close"])
dayBefYestData = float(avData["Time Series (Daily)"][dayBefYestDate]["4. close"])

"""variable to store the max stock price"""
maxStockPrice = max(yestData, dayBefYestData)

"""variable to store the stock price difference"""
stockPriceDiff = yestData - dayBefYestData

"""variable to store the stock price percent"""
stockPricePercent = (int(stockPriceDiff) / 100) * maxStockPrice

"""variable to store stock condition"""
if stockPriceDiff > 0:
    stockPriceCondition = f"TSLA up {stockPricePercent}%"
elif stockPriceDiff < 0:
    stockPriceCondition = f"TSLA down {stockPricePercent}%"


# -------------------- NEWS DATA --------------------
"""variable to store the api key"""
newsApiKey = "36b00ad4b5cb41d1968705d74de5e35a"

"""variable to hold the language"""
language = "en"

"""variable to hold the data sorted by relevancy"""
sortBy = "popularity"

"""dictionary to hold the parameters"""
newsParameters = {
    "q": COMPANY_NAME,
    "from": yestDate,
    "language": language,
    "sortBy": sortBy,
    "apikey": newsApiKey,
}

"""variable to hold the endpoint"""
newsEndpoint = "https://newsapi.org/v2/everything"

"""getting the data"""
newsResponse = requests.get(url=newsEndpoint, params=newsParameters)
newsResponse.raise_for_status()
newsData = newsResponse.json()

"""variable to store the headline"""
newsArticles = newsData["articles"][:3]

"""list to store the titles and description of the articles"""
newsDetails = [f"{stockPriceCondition}\nHeadline: {article['title']}.\nBrief: {article['description']}\nFor more: {article['url']}" for article in newsArticles]


# -------------------- WOrKING WITH TWILIO --------------------
"""twilio sid"""
twAccountSid = "AC4756c85ebeda51fdebc6a951242c6f25"

"""twilio token"""
twAuthToken = "aeb19ef48f7bd1fdb29547e1e84bfef9"

"""setting up twilio client"""
client = Client(twAccountSid, twAuthToken)

"""message will be sent about stock price"""
for article in newsDetails:
    message = client.messages.create(
        body=article,
        from_="+14407501284",
        to="+918249017941"
    )
    print(message.status)




























# -------------------- EXAMPLE --------------------
## STEP 1: Use https://www.alphavantage.co
# When STOCK price increase/decreases by 5% between yesterday and the day before yesterday then print("Get News").

## STEP 2: Use https://newsapi.org
# Instead of printing ("Get News"), actually get the first 3 news pieces for the COMPANY_NAME.

## STEP 3: Use https://www.twilio.com
# Send a seperate message with the percentage change and each article's title and description to your phone number.


#Optional: Format the SMS message like this:
"""
TSLA: 🔺2%
Headline: Were Hedge Funds Right About Piling Into Tesla Inc. (TSLA)?. 
Brief: We at Insider Monkey have gone over 821 13F filings that hedge funds and prominent investors are required to file by the SEC The 13F filings show the funds' and investors' portfolio positions as of March 31st, near the height of the coronavirus market crash.
or
"TSLA: 🔻5%
Headline: Were Hedge Funds Right About Piling Into Tesla Inc. (TSLA)?. 
Brief: We at Insider Monkey have gone over 821 13F filings that hedge funds and prominent investors are required to file by the SEC The 13F filings show the funds' and investors' portfolio positions as of March 31st, near the height of the coronavirus market crash.
"""