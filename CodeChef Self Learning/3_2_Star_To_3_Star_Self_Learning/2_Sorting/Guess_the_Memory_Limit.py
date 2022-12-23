import sys


def run_program(m):
    print('1 ' + str(m))
    sys.stdout.flush()
    r = int(input())
    if r == 0:
        return False
    elif r == 1:
        return True
    exit()

# ------------------- Do not touch anything above this line -------------------------------------

# complete the function below, use run_program(x) to determine if Chef's program can consume x bytes
# The result will be True if it can and False otherwise
# If you call the function run_program more than 31 times, you will get a wrong answer verdict


def find_memory_limit():
    l = 0
    r = 1000000000
    ans = 35
    while(l <= r):
        mid = (l+r)//2
        if run_program(mid):
            ans = mid
            l = mid+1
        else:
            r = mid-1
    return ans


# ------------------- Do not touch anything below this line -------------------------------------
print('2 ' + str(find_memory_limit()))
