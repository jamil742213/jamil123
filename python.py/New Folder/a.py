if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    d = 0
    for i in student_marks[name]:
        d = d+i
    print("{0:.2f}".format(d/3))
