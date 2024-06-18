# ---------------- MODULES ---------------- #
# imported webdriver class from the selenium module
from selenium import webdriver

# imported Service class from the selenium module
from selenium.webdriver.chrome.service import Service

# imported By class from the selenium module
from selenium.webdriver.common.by import By

# imported Keys class from the selenium module
from selenium.webdriver.common.keys import Keys

#  imported time module
import time


# ---------------- ACCOUNT DETAILS ---------------- #
email = "your email"
password = "your password"

# ---------------- WORKING WITH SELENIUM WEB DRIVER ---------------- #
# variable to store the path of the chrome driver
chromeDriverPath = "/Users/anshusinha/Documents/Python/Angela Yu/chromedriver_mac64/chromedriver"

# variable to store the path of the website
driver = webdriver.Chrome(service=Service(chromeDriverPath))

# ---------------- WORKING WITH LINKEDIN ---------------- #
# variable to store the path of the website
driver.get("https://www.linkedin.com/")

# variable to store the sign in button
signIn = driver.find_element(By.LINK_TEXT, "Sign in")
signIn.click()

# variable to store the email input field
emailInput = driver.find_element(By.ID, "username")
emailInput.send_keys(email)

# variable to store the password input field
passwordInput = driver.find_element(By.ID, "password")
passwordInput.send_keys(password)
passwordInput.send_keys(Keys.ENTER)

# time to wait for the page to load
time.sleep(5)

messageDialogBoxDown = driver.find_element(By.XPATH, '/html/body/div[5]/aside/div[1]/header/div[3]/button[2]')
messageDialogBoxDown.click()

# time to wait for the page to load
time.sleep(5)

# variable to store the job search input field
jobSearch = driver.find_element(By.CLASS_NAME, 'search-global-typeahead__input')
jobSearch.send_keys("Python developer jobs")
jobSearch.send_keys(Keys.ENTER)

#time to wait for the page to load
time.sleep(5)

# variable to store the jobs button
jobsButton = driver.find_element(By.XPATH, '/html/body/div[5]/div[3]/div[2]/section/div/nav/div/ul/li[1]/button')
jobsButton.click()

# time to wait for the page to load
time.sleep(5)

# variable to store the easy apply button
easyApply = driver.find_element(By.XPATH, '/html/body/div[5]/div[3]/div[4]/section/div/section/div/div/div/ul/li[8]/div/button')
easyApply.click()

# time to wait for the page to load
time.sleep(5)

# variable to store the job type button
jobType = driver.find_element(By.XPATH, '/html/body/div[5]/div[3]/div[4]/section/div/section/div/div/div/ul/li[8]/div/span/button')
jobType.click()

# time to wait for the page to load
time.sleep(5)

# variable to store the remote job button
remoteJob = driver.find_element(By.XPATH, '/html/body/div[5]/div[3]/div[4]/section/div/section/div/div/div/ul/li[8]/div/div/div/div[1]/div/form/fieldset/div[1]/ul/li[2]/label')
remoteJob.click()

# time to wait for the page to load
time.sleep(5)

# variable to store the show results button
showResults = driver.find_element(By.XPATH, '/html/body/div[5]/div[3]/div[4]/section/div/section/div/div/div/ul/li[8]/div/div/div/div[1]/div/form/fieldset/div[2]/button[2]')
showResults.click()

# time to wait for the page to load
time.sleep(5)

# variable to store the easy apply job button
easyApplyJob = driver.find_element(By.XPATH, '/html/body/div[5]/div[3]/div[4]/div/div/main/div/div[2]/div/div[2]/div[1]/div/div[1]/div/div[1]/div[1]/div[3]/div/div/div/button')
easyApplyJob.click()

# time to wait for the page to load
time.sleep(5)

# variable to store the submit application button
submitApplication = driver.find_element(By.XPATH, '/html/body/div[3]/div/div/div[2]/div/div/form/footer/div[3]/button')
submitApplication.click()

# time to wait for the page to load
time.sleep(10)

# quit the browser
driver.quit()


