 x = input("").split(' ');
 f = int(x[0])
 s = int(x[1])
 r = int(x[2])
 r-=2;
 for g in range(r):
     z = f
     zz  = s
     s = zz*zz+z
     f = zz
printf(s)
