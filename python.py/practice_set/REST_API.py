from flask import Flask , jsonify

app = Flask(__name__)

@app.route('/')
def hello_world():
    return 'Hello, World!'

@app.route('/armstrong/<int:n>')
def armstrong(n):
    n = int(input("Enter the number "))
    sum = 0
    order = len(str(n))
    copy_n = n
    while n > 0:
        digit = n%10
        sum +=digit **order
        n = n//10

    if sum == copy_n:
        print(f"{copy_n} is an armstrong number")
        result = {
            "Number": n,
            "Armstrong": True,
            "Server IP":"192.168.0.101"
        }
    else:
        print(f"{copy_n} is not an armstrong number")
        result = {
            "Number": n,
            "Armstrong": False,
            "Server IP":"192.168.0.101"
        }
        return jsonify(result)

if __name__ == "__main--":
    app.run(debug=True)