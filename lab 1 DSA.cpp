//question 1#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    sum = num1 + num2;
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;

    return 0;
}


//question 2
#include <iostream>
using namespace std;

int main() {
    float centigrade, fahrenheit;
    cout << "Enter temperature in Centigrade: ";
    cin >> centigrade;

    fahrenheit = (centigrade * 9 / 5) + 32;
    cout << centigrade << " Centigrade is equal to " << fahrenheit << " Fahrenheit." << endl;

    return 0;
}
//question 3
#include <iostream>
using namespace std;

int main() {
    char operation;
    float num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero." << endl;
            break;
        default:
            cout << "Invalid operator." << endl;
            break;
    }

    return 0;
}


//question 4
#include <stdio.h>  
  
int main()  
{  
    int n,m=1;  
    printf("Enter the number of columns");  
    scanf("%d",&n);  
for(int i=1;i<=n;i++)  
{  
  for(int j=1;j<=i;j++)  
  {  
    printf("*");  
  }  
  printf("\n");  
}  
 for(int i=n-1;i>=1;i--)  
 {  
   for(int j=1;j<=i;j++)  
   {  
     printf("*");  
   }  
   printf("\n");  
 }    
     
    return 0;  
}  
//question 5
#include <iostream>
using namespace std;

class Average {
public:
    void calculateAverage() {
        float num1, num2, num3, avg;
        cout << "Enter three numbers: ";
        cin >> num1 >> num2 >> num3;

        avg = (num1 + num2 + num3) / 3;
        cout << "The average is: " << avg << endl;
    }
};

int main() {
    Average avgObj;
    avgObj.calculateAverage();
    return 0;
}


//question 6
#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    void input() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    Complex add(const Complex &c) {
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }

    Complex subtract(const Complex &c) {
        Complex result;
        result.real = real - c.real;
        result.imag = imag - c.imag;
        return result;
    }

    Complex multiply(const Complex &c) {
        Complex result;
        result.real = (real * c.real) - (imag * c.imag);
        result.imag = (real * c.imag) + (imag * c.real);
        return result;
    }

    void display() {
        cout << "Result: " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, sum, difference, product;

    cout << "Complex Number 1:\n";
    c1.input();
    cout << "Complex Number 2:\n";
    c2.input();

    sum = c1.add(c2);
    difference = c1.subtract(c2);
    product = c1.multiply(c2);

    cout << "Sum: ";
    sum.display();
    cout << "Difference: ";
    difference.display();
    cout << "Product: ";
    product.display();

    return 0;
}