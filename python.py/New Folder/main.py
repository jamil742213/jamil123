import datetime
import speech_recognition as sr
import pyttsx3
import pywhatkit
import pyjokes
import wikipedia


listener = sr.Recognizer()
engine = pyttsx3.init()
voices = engine.getProperty('voices')
engine.setProperty('voices', voices[1].id)

def talk(text):
    engine.say("I am your Assistant")
    engine.say("What can i do for you")
    engine.runAndWait()

def take_command():
    try:
        with sr.Microphone() as Source:
            print('Listening....')
            voice = listener.listen(Source)
            command = listener.recognize_google(voice)
            command = command.lower()
            if 'alexa' in command:
                command = command.replace('alexa', '')
                talk(command)

    except:
        pass
    return command

def run_alexa():
    command = take_command()
    print(command)
    if 'play' in command:
        song = command.replace('play', '')
        talk('palying...' + song)
        pywhatkit.playonyt(song)
    elif 'time' in command:
            time = datetime.datetime.now().strftime('%I:%M:%p')
            talk('Currnt Time is '+ time)
    elif 'who the heck is' in command:
        person = command.replace('who the heck is ', '')
        info = wikipedia.summary(person, 1)
        print(info)
        talk(info)
    elif 'date' in command:
        talk('sorry , I have a headache')
    elif 'are you single' in command:
        talk('Yeah I am a single in my World !\n but I am related with wifi ')
    elif 'joke' in command:
        talk(pyjokes.get_joke())
    elif 'date' in command:
        talk('sorry, I have a headache ')
    else:
        talk('Please  say the command again. ')



run_alexa