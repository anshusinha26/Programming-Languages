# -------------------- MODULES -------------------- 
"""imported requests module"""
import requests

"""imported BeautifulSoup class from the bs4 module"""
from bs4 import BeautifulSoup

"""imported lxml module"""
import lxml

"""imported smtplib module"""
import smtplib

"""imported base64 module"""
import base64

"""email modules"""
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
from email.mime.image import MIMEImage


# -------------------- GETTING DATA FROM AMAZON -------------------- 
"""variable to store amazon's endpoint"""
amEndpoint = "https://www.amazon.in/Logitech-Master-Advanced-Wireless-Mouse/dp/B084TFH4BN/ref=pd_ci_mcx_mh_mcx_views_0?pd_rd_w=BCTNC&content-id=amzn1.sym.7938e11a-362b-421f-bd30-8dd8d3c4b65f&pf_rd_p=7938e11a-362b-421f-bd30-8dd8d3c4b65f&pf_rd_r=ZT1V2GJ8TGP3XE9C2SXD&pd_rd_wg=ARALY&pd_rd_r=ae6ca387-e2b2-4eaa-8a1c-2417c06839f4&pd_rd_i=B084TFH4BN&th=1"

"""dictionary to hold the header parameters"""
headers = {
    "User-Agent": "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_7) AppleWebKit/605.1.15 (KHTML, like Gecko) Version/16.4 Safari/605.1.15",
    "Accept-Language": "en-IN,en-GB;q=0.9,en;q=0.8"
}


"""variable to store amazon's response"""
amResponse = requests.get(url=amEndpoint, headers=headers)
amResponse.raise_for_status()

"""variable to store amazon's webpage data"""
amWebpage = amResponse.text

"""created the soup object"""
soup = BeautifulSoup(amWebpage, "lxml")

"""variable to store the name of the product"""
productName = soup.find(name="span", id="productTitle").getText()

"""variable to store the price of the product"""
productPrice = soup.find(name="span", class_="a-price-whole").getText()
productPrice = productPrice.split(",")
productPrice = float(productPrice[0] + productPrice[1])


# -------------------- SENDING EMAIL -------------------- 
"""email details"""
MY_EMAIL = "gpython72@gmail.com"
PASSWORD = "blxfzquksftguoxk"

receiver = "anshujuly2@gmail.com"

"""variable to store the price at which the product should be bought"""
preferredPrice = float(14000)

"""checking for condition and sending an email"""
if productPrice < preferredPrice:
    # Create a multipart message
    message = MIMEMultipart()
    message["Subject"] = "Amazon price alert 🤑"
    message["From"] = MY_EMAIL
    message["To"] = receiver

    # Add body to email
    body = f"{productName} is now priced at ₹{productPrice}"
    message.attach(MIMEText(body, "plain"))

    # Add image to email
    imageURL = "https://m.media-amazon.com/images/I/61VjlQUqQDL._SL1500_.jpg"
    imageResponse = requests.get(imageURL)
    image = MIMEImage(imageResponse.content)
    image.add_header('Content-Disposition', 'attachment', filename='mouse.jpg')
    message.attach(image)

    with smtplib.SMTP("smtp.gmail.com", port=587, timeout=25) as connection:
        connection.starttls()
        connection.login(user=MY_EMAIL, password=PASSWORD)
        connection.sendmail(
            from_addr=MY_EMAIL, 
            to_addrs=receiver,
            msg=message.as_string()
        )
