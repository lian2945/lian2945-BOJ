birth_year, birth_month, birth_day = map(int, input().split())
curr_year, curr_month, curr_day = map(int, input().split())

if (curr_month > birth_month) or (curr_month == birth_month and curr_day >= birth_day):
    man_age = curr_year - birth_year
else:
    man_age = curr_year - birth_year - 1

korean_age = curr_year - birth_year + 1

year_age = curr_year - birth_year

print(man_age)
print(korean_age)
print(year_age)
