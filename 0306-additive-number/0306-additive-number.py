class Solution:
    def isAdditiveNumber(self, num: str) -> bool:
        n = len(num)

        def check(i, a, b, count):
            if i == n:
                return count >= 3

            c = a + b
            s = str(c)

            if not num.startswith(s, i):
                return False

            return check(i + len(s), b, c, count + 1)

        for i in range(1, n):
            if num[0] == '0' and i > 1:
                break

            a = int(num[:i])

            for j in range(i + 1, n):
                if num[i] == '0' and j - i > 1:
                    break

                b = int(num[i:j])

                if check(j, a, b, 2):
                    return True

        return False