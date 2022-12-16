import os

from matplotlib import image

def createNotExist(folder):
    if not os.path.exists(folder):
        os.makedirs(folder)

def move(foldernames, files):
    for file in files:
        os.replace(file, (f"{foldernames}/{file}"))


if __name__ == "__main__":
    files = os.listdir()
    files.remove('folder_clean.py')

    print(files)
    createNotExist('images')
    createNotExist('Docs')
    createNotExist('media')
    createNotExist('Others')
    imgExts = [".png", ".jgp", ".jpeg"]
    images = [file for file in files if os.path.splitext(file)[1].lower() in imgExts]
    print(images)

    docExts = [".txt", ".docx", ".doc", ".pdf"]
    docs = [file for  file in files if os.path.splitext(file)[1].lower in docExts]
    print(docs)

    mediaExts = [".mp3", ".mp4", ".avi", ".flv"]
    media = [file for  file in files if os.path.splitext(file)[1].lower in mediaExts]
    print(media)


    others = []
    for file in files:
        ext = os.path.splitext(file)[1].lower()
        if (ext not in mediaExts) and (ext not in docExts) and (ext not in imgExts) and os.path.isfile(file):
            others.append(file)

    print(others)

    move("medias", media)
    move("images", images)
    move("docs", docs)
    move("others", others)