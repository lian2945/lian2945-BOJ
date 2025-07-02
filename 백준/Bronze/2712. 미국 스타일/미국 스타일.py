def convert_units(value, unit):
    kg_to_lb = 2.2046
    lb_to_kg = 0.4536
    l_to_g = 0.2642
    g_to_l = 3.7854

    if unit == 'kg':
        return value * kg_to_lb, 'lb'
    elif unit == 'lb':
        return value * lb_to_kg, 'kg'
    elif unit == 'l':
        return value * l_to_g, 'g'
    elif unit == 'g':
        return value * g_to_l, 'l'

T = int(input())
for _ in range(T):
    s = input().split()
    value = float(s[0])
    unit = s[1]
    converted_value, converted_unit = convert_units(value, unit)
    print(f"{converted_value:.4f} {converted_unit}")
