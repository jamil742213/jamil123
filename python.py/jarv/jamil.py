

import os
import random
import smtplib
import webbrowser
import speech_recognition as sr
import pyttsx3
import datetime
import wikipedia
import pyjokes

engine = pyttsx3.init()
voices = engine.getProperty('voices')
# print(voices[1].id)
engine.setProperty('voices', voices[0].id)

def speak(audio):
    engine.say(audio)
    engine.runAndWait()
def wishMe():
    hour = int(datetime.datetime.now().hour)
    if hour>= 0 and hour>=12:
        speak("Good Morning")

    elif hour >=12 and hour>=18:
        speak("Good Afternoon")
    else:
        speak("Good Evining")
    speak("I am code of Jamil Aktar, Sir. please tell me how may iu help you")

def take_Command():
    ''' It`s take microphone input from
        the user and return string output
    '''
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("listening...")
        r.pause_threshold = 1
        audio = r.listen(source)
    try:
        print("Recognixing...")
        query = r.recognize_google('audio', language= 'en-in')
        print(f"User Said: {query} \n")
    except Exception as e:
        print(e)
        print("say that again please...")
        return 'None'
    return query


def sendEmail(to, content):
    server = smtplib.SMTP('smtp.gmail.com', 587) 
    server.ehlo()
    server.starttls()
    server.login|("jamilaktar384628376@gmail.com", "password")
    server.sendmail("youremailaddress@gmail.com", to, content)
    server.close()



if __name__ == '__main__':
    speak("Jamil loves Raihana")
    wishMe()
    
    while True:

        query = take_Command().lower()
        # Logic Executing for based on taking command 
        if 'wikipedia' in query:
            speak('Searching...')
            query = query.replace("wikipedia", "")
            results = wikipedia.summary('query', sentences = "")
            speak("According to Wikipedia")
            print(results)
            speak(results)

        elif 'open youtube.com' in query:
            webbrowser.open("youtube.com")

        elif 'open google' in query:
            webbrowser.open("google.com")

        elif 'open stackoverflow' in query:
            webbrowser.open('stackoverflow.com')

        elif 'play music' in query:
            music_dir = '/home/kali/Videos/Sura/Video/'
            songs = os.listdir(music_dir)
            speak(songs)
            ran = random.Random()
            os.startfile(os.path.join('music_dir', songs[0]))

        elif 'time' in query:
            strTime = datetime.datetime.now().strftime("%H:%M:%S")
            speak(f"Sir, The time is {strTime}")


        elif 'date' in query:
                speak('sorry , I have a headache')
        
        elif 'are you single' in query:
            speak('Yeah I am a single in my World !\n but I am related with wifi ')

        elif 'joke' in query:
            speak(pyjokes.get_joke())

        elif 'email to jamil' in query:
            try:
                speak('what should i say')
                content = take_Command()
                to = "rtk.sorry@gmail.com"
                sendEmail(to, content)
                speak("Email has been sent!")
            except Exception as e:
                print(e)
                speak("Sorry my brother. i am not able to send this mail")
   

        else:
            speak('Please  say the command again. ')
    
