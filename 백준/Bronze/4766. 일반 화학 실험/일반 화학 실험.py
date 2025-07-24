prev_temp = None

while True:
    temp = input()
    if temp == "999":
        break
    temp = float(temp)
    if prev_temp is not None:
        diff = temp - prev_temp
        print(f"{diff:.2f}")
    prev_temp = temp
