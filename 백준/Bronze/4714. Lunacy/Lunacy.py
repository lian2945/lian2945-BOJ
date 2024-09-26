import sys
l=0
while(l>=0):
    l = sys.stdin.readline()
    l = float(l)
    if(l<0.0):
        break
    print("Objects weighing {:.2f} on Earth will weigh {:.2f} on the moon.".format(l, l*0.167))