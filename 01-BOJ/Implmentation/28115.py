import sys


def main() -> None:
    data = list(map(int, sys.stdin.buffer.read().split()))
    n = data[0]
    a = data[1:1 + n]

    # N <= 2 is always an arithmetic sequence by definition.
    ok = True
    if n >= 3:
        d = a[1] - a[0]
        for i in range(2, n):
            if a[i] - a[i - 1] != d:
                ok = False
                break

    if not ok:
        sys.stdout.write("NO\n")
        return

    b = [0] * n
    c = a

    out = ["YES", " ".join(map(str, b)), " ".join(map(str, c))]
    sys.stdout.write("\n".join(out) + "\n")


if __name__ == "__main__":
    main()