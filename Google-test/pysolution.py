def solve_test():
    n = int(input())
    s = input().strip()
    last = -n * 2
    ans = []
    for i, x in enumerate(s):
        if x == '1':
            ans.append(0)
            last = i
        else:
            ans.append(i - last)

    last = -n * 2
    ans2 = []
    for i, x in enumerate(reversed(s)):
        if x == '1':
            ans2.append(0)
            last = i
        else:
            ans2.append(i - last)
    print(sum([min(x, y) for x, y in zip(ans, reversed(ans2))]))


def main():
    for test in range(int(input())):
        print(f'Case #{test + 1}: ', end='')
        solve_test()


if __name__ == '__main__':
    main()