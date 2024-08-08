import math

def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    t = int(data[0])
    index = 1

    results = []

    for _ in range(t):
        l = int(data[index])
        r = int(data[index + 1])
        index += 2

        answer = 0

        answer += 2 * (math.log10(l)// math.log10(3)  +  1)

        for i in range(l + 1, r + 1):
            answer += math.log10(i)// math.log10(3) + 1

        results.append(answer)

    for result in results:
        print(int(result))

if __name__ == "__main__":
    main()
