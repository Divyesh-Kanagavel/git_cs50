def eval_loop():
    while True:
        expr = input("Enter an expression")
        if expr == 'done':
            break

        print(eval(expr))


eval_loop()
