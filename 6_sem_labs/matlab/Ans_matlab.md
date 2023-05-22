# Questions

## [Answers ➡️](./CO_ans.md)

1. Find the roots of the equation by bisection method

```m
tol = 1.e-10;
a = 1.0;
b = 2.0;
nmax = 100;
% Initialization
itcount = 0;
error = 1.0;
% Graph
xval = linspace(a,b,100);
for i=1:100
    fval(i) = func(xval(i));
end
plot(xval,fval);
grid on;
hold on;
% iteration
while (itcount <= nmax && error >= tol)
    itcount = itcount + 1;
    x = a + (b-a)/2;
    z(itcount) = x;
    fa = func(a);
    fb = func(b);
    fx = func(x);
    error = abs(fx);
    if (error < tol)
        x_final = x;
    else
        if (fa*fx < 0)
            b = x;
        else
            a = x;
        end
    end
    plot(z(1:itcount),zeros(itcount,1),'r+');
    pause(5)
end
if (itcount < nmax);
    fprintf(1,'Converged solution after %5d iterations',itcount);
    fprintf(1,' is %15.7e, %e \n',x_final, val);
else fprintf(1,'Not converged after %5d iterations',nmax);
end
function val = func(x)
    val = x^3 - x - 3;
end
```

2. Find the roots of the equation by secant/Regula-Falsi method

```m
clc
x0 = input('enter the value of x0 = ');
x1 = input('enter the value of x1 = ');
tolerance=input('inter the tolerance = ');
f =@(x) sin(2*pi*x)+ exp(1.2*x) + x - 2.5;
for i=0:inf
    x2= x1 - (f(x1)* (x1-x0)/(f(x1)-f(x0)))
    c = f(x2)
    absolute_c= abs(c);
    if absolute_c < tolerance
        break
    end
    if f(x0)*c <0
        x1=x2;
        continue
    else
        x0=x2;
        continue
    end
end
```

3. Find the roots of the equation by Newton’s method

```m
x = -2;
Tol = 0.0000001;
count = 0;
dx=1;
f=-13;
fprintf('step x dx f(x)\n')val = func(x);
fprintf('---- ----------- --------- ----------\n'
fprintf()'%3i %12.8f %12.8f %12.8f\n',count,x,dx,f)
xVec=x;fVec=f;
while dx >( Tol || absf)(>Tol
    count = count + 1;
    fprime = 3*x^2 + 3;
    xnew = x - ()f/fprime;
    dx=abs()x-xnew);
    x = xnew;
    f = x^3 + 3*x + 1;
    fprintf('%3i %12.8f %12.8f %12.8f\n',count,x,dx,f)
end
```

4. Find the solution of a system of nonlinear equation using Newton’s method

```m
fun = @(x)x^3 - 0.165*x^2 + 3.993e-4;
x_true = fzero(fun,[0.01 0.1],optimset("Display","iter"));
x = 0.1;
x_old = 100;
iter = 0;
while abs(x_old-x) > 1e-10 && iter <= 10 % x ~= 0
    x_old = x;
    x = x - (x^3 - 0.165*x^2 + 3.993e-4)/(3*x^2 - 0.33*x);
    iter = iter + 1;
    fprintf('Iteration %d: x=%.18f, err=%.18f\n', iter, x, x_true-x);
    pause(1);
end
x = linspace(0,0.1);
f = x.^3 - 0.165*x.^2 + 3.993*10^-4;
figure;
plot(x,f,'b',x,zeros(size(x)),'r--')
grid on
```

5. Find the solution of tri-diagonal system using Gauss Thomas method

```m
n=input('enter the order for the matrix');
for(i=1:n)
    for(j=1:n)
        a(i,j)=input('enter the element of coefficient matrix');
    end
end
for i=1:n
    r(i)=input('enter the RHS');
end
R(1)=0;
P=zeros(1,n);
Q=zeros(1,n-1);
R=zeros(1,n);
Y=zeros(1,n-1);
for i=1:n
    P(i)=a(i,i);
end
for i=1:n-1
    Q(i)=a(i,i+1);
end
for i=1:n-1
    R(i+1)=a(i+1,i);
end
Y(1)=Q(1)/P(1);
for i=2:n-1
    Y(i)=Q(i)/(P(i)-R(i)*Y(i-1));
end
W(1)=r(1)/P(1);
for i=2:n
    W(i)=(r(i)-R(i)*W(i-1))/(P(i)-R(i)*Y(i-1));
end
x(n)=W(n);
for i=n-1:-1:1
    x(i)=W(i)-Y(i)*x(i+1);
end
```

6. Find the solution of system of equations using Jacobi/Gauss-Seidel method

```m
clear ; clc ; close all
n = input('Please Enter the size of the equation system n = ') ;
C = input('Please Enter the elements of the Matrix C ' ) ;
b = input('Please Enter the elements of the Matrix b ' ) ;
dett = det(C)
if dett == 0
    print('This system unsolvable because det(C) = 0 ')
else
    b = b'
    A = [ C b ]
    for j = 1:(n-1)
        for i= (j+1) : n
            mult = A(i,j)/A(j,j) ;
            for k= j:n+1
                A(i,k) = A(i,k) - mult*A(j,k) ;
                A
            end
        end
    end
    for p = n:-1:1
        for r = p+1:n
            x(p) = A(p,r)/A(p,r-1)
        end
    end
end
```

7. Find the cubic spline interpolating function

```m
x = [0 1 2.3 3.6 5 7.5 8.1 10];
y = sin(x);
xx = 0:.25:10;
yy = spline(x,y,xx);
plot(x,y,'o',xx,yy)
```

8. Evaluate the approximate value of finite integrals using Gaussian/Romberg integration

```m
function romberg_value = IntegrationRomberg (expression, a, b, m)
    f = inline (expression);

h = b-a;
r (1,1) = (f (a) + f (b)) / 2 * h;
fprintf('\nRomberg integration table:\n')
fprintf ('\n %7.2f \n\n', r (1,1));
for i = 2: m
    romberg_value = 0;
    for k = 1: 2 ^ (i-2)
        romberg_value = romberg_value + f (a + (k-0.5) * h);
    end
    r(2,1) = (r(1,1) + h * romberg_value) / 2;

    for j = 2: i
        l = 2 ^ (2 * (j-1));
        r (2, j) = r (2, j-1) + (r (2, j-1) -r (1, j-1)) / (l-1);
    end
    for k = 1: i
        fprintf ('% 7.5f', r (2, k));
    end
    fprintf ('\n\n');
    h = h / 2;
    for j = 1: i
        r (1, j) = r (2, j);
    end
end
```

9. Solve the boundary value problem using finite difference method

```m
x=0:0.25:1
n=length(x);
y=zeros(1,n);
y(1,1)=0.2; y(1,n)=0.8;
y

A=zeros(n-2);
B=zeros(1,n-2);
for i=1:n-2
    A(i,i)=-31;
end
A(i,i-1)=12;
A(i-1,i)=20;
end
A
B(1,1)=x(1,2).^2-(12*y(1,1));
B(1,n-2)=x(1,n-1).^2-(20*y(1,n));
for i=2:n-3
    B(1,i)=(x(1,i+1)).^2;
end
B;
BB=B'

X=A\BB;
XX=X';
y(1,2:n-1)=XX(1,1:n-2);
y
plot(x,y,'-*');
```
