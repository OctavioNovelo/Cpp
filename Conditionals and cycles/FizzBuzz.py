#FizzBuzz

def Fizz_Buzz(number):
    for i in range(1, number + 1):
        if i % 3 == 0 and i % 5 == 0:
            print('FizzBuzz')
        elif i % 3 == 0:
            print('Fizz')
        elif i % 5 == 0:
            print('Buzz')
        else:
            print(i)

print(Fizz_Buzz(100))

print('Tarde 3 dias pero se pudo :,D !!!')
