def rightrotate(arr, k):
    n = len(arr)
    k = k % n
    arr[:k] = reversed(arr[:k])
    arr[k:] = reversed(arr[k:])
    arr[:] = reversed(arr)

def main():
    n = int(input())
    k = int(input())
    arr = list(map(int, input().split()))
    
    rightrotate(arr, k)
    
    print(" ".join(map(str, arr)))

if __name__ == "__main__":
    main()