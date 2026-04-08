#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <sstream>
#include <bitset>
#include <stack>
#include <cctype>
#include <limits>

using namespace std;

class Calculator
{
private:
    double memory = 0;

public:

// ---------------- BASIC OPERATIONS ----------------

    double add(double a,double b){ return a+b; }
    double sub(double a,double b){ return a-b; }
    double mul(double a,double b){ return a*b; }
    double divi(double a,double b)
    {
        if(b==0)
        {
            cout<<"Division by zero error\n";
            return 0;
        }
        return a/b;
    }

// ---------------- POWER FUNCTIONS ----------------

    double square(double x){ return x*x; }
    double cube(double x){ return x*x*x; }
    double squareroot(double x){ return sqrt(x); }

// ---------------- FACTORIAL ----------------

    long long factorial(int n)
    {
        long long fact=1;
        for(int i=1;i<=n;i++)
        fact*=i;
        return fact;
    }

// ---------------- TRIG FUNCTIONS ----------------

double sine(double x){ return sin(x * M_PI / 180); }
double cosine(double x){ return cos(x * M_PI / 180); }
double tangent(double x){ return tan(x * M_PI / 180); }
double cot(double x){ return 1 / tan(x * M_PI / 180); }
double sec(double x){ return 1 / cos(x * M_PI / 180); }
double cosec(double x){ return 1 / sin(x * M_PI / 180); }

// ---------------- LOG FUNCTIONS ----------------

double log10calc(double x){ return log10(x); }
double ln(double x){ return log(x); }

// ---------------- PRIME CHECK ----------------

bool isPrime(int n)
{
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return false;
    return true;
}

// ---------------- MEMORY ----------------

void memoryAdd(double x)
{
    memory+=x;
}

double memoryRecall()
{
    return memory;
}

void memoryClear()
{
    memory=0;
}

// ---------------- STATISTICS ----------------

double mean(vector<double> data)
{
    double sum=0;

    for(double x:data)

        sum+=x;
    return sum/data.size();
}

double variance(vector<double> data)
{
    double m=mean(data);
    double sum=0;
    for(double x:data)
        sum+=(x-m)*(x-m);
    return sum/data.size();
}

// ---------------- MATRIX ADDITION ----------------

void matrixAddition()
{
    int r,c;
    cout<<"Rows: ";
    cin>>r;
    cout<<"Columns: ";
    cin>>c;
    vector<vector<int>> A(r,vector<int>(c));
    vector<vector<int>> B(r,vector<int>(c));
    cout<<"Enter Matrix A\n";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>A[i][j];
    cout<<"Enter Matrix B\n";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>B[i][j];
    cout<<"Result Matrix\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cout<<A[i][j]+B[i][j]<<" ";
        cout<<endl;
    }
}

// ---------------- MATRIX SUBTRACTION ----------------

void matrixSubtraction()
{
    int r,c;
    cout<<"Rows: ";
    cin>>r;
    cout<<"Columns: ";
    cin>>c;
    vector<vector<int>> A(r,vector<int>(c));
    vector<vector<int>> B(r,vector<int>(c));
    cout<<"Enter Matrix A\n";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>A[i][j];
    cout<<"Enter Matrix B\n";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>B[i][j];
    cout<<"Result Matrix\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cout<<A[i][j]-B[i][j]<<" ";
        cout<<endl;
    }
}

// ---------------- MATRIX MULTIPLICATION ----------------

void matrixMultiplication()
{
    int r1,c1,r2,c2;
    cout<<"Rows of A: ";
    cin>>r1;
    cout<<"Columns of A: ";
    cin>>c1;
    cout<<"Rows of B: ";
    cin>>r2;
    cout<<"Columns of B: ";
    cin>>c2;
    if(c1!=r2)
    {
        cout<<"Matrix multiplication not possible\n";
        return;
    }
    vector<vector<int>> A(r1,vector<int>(c1));
    vector<vector<int>> B(r2,vector<int>(c2));
    vector<vector<int>> C(r1,vector<int>(c2,0));
    cout<<"Enter Matrix A\n";
    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
            cin>>A[i][j];
    cout<<"Enter Matrix B\n";
    for(int i=0;i<r2;i++)
        for(int j=0;j<c2;j++)
            cin>>B[i][j];
    for(int i=0;i<r1;i++)
        for(int j=0;j<c2;j++)
            for(int k=0;k<c1;k++)
                C[i][j]+=A[i][k]*B[k][j];
    cout<<"Result Matrix\n";
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
            cout<<C[i][j]<<" ";
        cout<<endl;
    }
}

// ---------------- MATRIX TRANSPOSE ----------------

void matrixTranspose()
{
    int r,c;
    cout<<"Rows: ";
    cin>>r;
    cout<<"Columns: ";
    cin>>c;
    vector<vector<int>> A(r,vector<int>(c));
    cout<<"Enter Matrix\n";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>A[i][j];
    cout<<"Transpose Matrix\n";
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
            cout<<A[j][i]<<" ";
        cout<<endl;
    }
}

// ---------------- MATRIX INVERSE (2x2) ----------------

void matrixInverse()
{
    double a,b,c,d;
    cout<<"Enter 2x2 Matrix\n";
    cin>>a>>b>>c>>d;
    double det = a*d - b*c;
    if(det==0)
    {
        cout<<"Inverse not possible\n";
        return;
    }
    cout<<"Inverse Matrix\n";
    cout<<d/det<<" "<<-b/det<<endl;
    cout<<-c/det<<" "<<a/det<<endl;
}

// ---------------- MATRIX DIVISION ----------------

void matrixDivision()
{
    cout<<"Matrix Division implemented as A * inverse(B)\n";
    double a,b,c,d;
    double e,f,g,h;
    cout<<"Enter Matrix A (2x2)\n";
    cin>>a>>b>>c>>d;
    cout<<"Enter Matrix B (2x2)\n";
    cin>>e>>f>>g>>h;
    double det = e*h - f*g;
    if(det==0)
    {
        cout<<"Division not possible\n";
        return;
    }
    double invB[2][2] =
    {
        {h/det , -f/det},
        {-g/det , e/det}
    };
    cout<<"Result Matrix\n";
    cout<<(a*invB[0][0] + b*invB[1][0])<<" "
        <<(a*invB[0][1] + b*invB[1][1])<<endl;
    cout<<(c*invB[0][0] + d*invB[1][0])<<" "
        <<(c*invB[0][1] + d*invB[1][1])<<endl;
}

// ---------------- MATRIX DETERMINANT ----------------

double determinant(vector<vector<double>> matrix, int n)
{
    if(n==1)
        return matrix[0][0];
    if(n==2)
        return matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0];
    double det = 0;
    for(int p=0;p<n;p++)
    {
        vector<vector<double>> submatrix(n-1, vector<double>(n-1));
        for(int i=1;i<n;i++)
        {
            int colIndex = 0;
            for(int j=0;j<n;j++)
            {
                if(j==p) continue;
                submatrix[i-1][colIndex] = matrix[i][j];
                colIndex++;
            }
        }
        det += matrix[0][p] * pow(-1,p) * determinant(submatrix,n-1);
    }
    return det;
}

void matrixDeterminant()
{
    int n;
    cout<<"Enter matrix size (n x n): ";
    cin>>n;
    vector<vector<double>> matrix(n, vector<double>(n));
    cout<<"Enter matrix elements:\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>matrix[i][j];
    double det = determinant(matrix,n);
    cout<<"Determinant = "<<det<<endl;
}

// ---------------- CONVERSIONS ----------------

int binaryToDecimal(string bin)
{
    return stoi(bin,0,2);
}

string decimalToBinary(int dec)
{
    return bitset<16>(dec).to_string();
}

string decimalToHex(int dec)
{
    stringstream ss;
    ss<<hex<<dec;
    return ss.str();
}

int hexToDecimal(string hex)
{
    int dec;
    stringstream ss;
    ss<<std::hex<<hex;
    ss>>dec;
    return dec;
}

string binaryToHex(string bin)
{
    int dec = stoi(bin,0,2);
    stringstream ss;
    ss<<hex<<dec;
    return ss.str();
}

string hexToBinary(string hex)
{
    int dec;
    stringstream ss;
    ss<<std::hex<<hex;
    ss>>dec;
    return bitset<16>(dec).to_string();
}

int octalToDecimal(string oct)
{
    return stoi(oct,0,8);
}

string decimalToOctal(int dec)
{
    stringstream ss;
    ss<<oct<<dec;
    return ss.str();
}

string binaryToOctal(string bin)
{
    int dec = stoi(bin,0,2);
    stringstream ss;
    ss<<oct<<dec;
    return ss.str();
}

string octalToBinary(string oct)
{
    int dec = stoi(oct,0,8);   
    return bitset<16>(dec).to_string();  
}

string hexToOctal(string hex)
{
    int dec;
    stringstream ss;
    ss<<std::hex<<hex;
    ss>>dec;
    stringstream ss2;
    ss2<<oct<<dec;
    return ss2.str();
}

string octalToHex(string oct)
{
    int dec = stoi(oct,0,8);   
    stringstream ss;
    ss<<hex<<dec;              
    return ss.str();
}

// ---------------- EXPRESSION PARSER ----------------

int precedence(char op)
{
    if(op=='+'||op=='-') return 1;
    if(op=='*'||op=='/') return 2;
    return 0;
}

double applyOperation(double a,double b,char op)
{
    if(op=='+') return a+b;
    if(op=='-') return a-b;
    if(op=='*') return a*b;
    if(op=='/')
    {
        if(b==0)
        {
            cout<<"Division by zero error\n";
            return 0;
        }
        return a/b;
    }
    return 0;
}

double parseExpression(string exp)
{
    stack<double> values;
    stack<char> ops;
    for(int i=0;i<exp.length();i++)
    {
        if(exp[i]==' ')
            continue;
        if(isdigit(exp[i]))
        {
            double val=0;
            while(i<exp.length() && isdigit(exp[i]))
            {
                val = (val*10) + (exp[i]-'0');
                i++;
            }
            values.push(val);
            i--;
        }
        else if(exp[i]=='(')
            ops.push(exp[i]);
        else if(exp[i]==')')
        {
            while(!ops.empty() && ops.top()!='(')
            {
                double val2=values.top(); values.pop();
                double val1=values.top(); values.pop();
                char op=ops.top(); ops.pop();
                values.push(applyOperation(val1,val2,op));
            }
            ops.pop();
        }
        else
        {
            while(!ops.empty() && precedence(ops.top())>=precedence(exp[i]))
            {
                double val2=values.top(); values.pop();
                double val1=values.top(); values.pop();
                char op=ops.top(); ops.pop();
                values.push(applyOperation(val1,val2,op));
            }
            ops.push(exp[i]);
        }
    }
    while(!ops.empty())
    {
        double val2=values.top(); values.pop();
        double val1=values.top(); values.pop();
        char op=ops.top(); ops.pop();
        values.push(applyOperation(val1,val2,op));
    }
    return values.top();
}

// ---------------- EQUATION SOLVER ----------------

// Linear equation ax + b = 0
void solveLinear()
{
    double a,b;
    cout<<"Enter a and b for ax + b = 0\n";
    cin>>a>>b;
    if(a==0)
    {
        cout<<"No unique solution\n";
        return;
    }
    double x = -b/a;
    cout<<"Solution x = "<<x<<endl;
}

// Quadratic equation ax^2 + bx + c = 0
void solveQuadratic()
{
    double a,b,c;
    cout<<"Enter a b c for ax^2 + bx + c = 0\n";
    cin>>a>>b>>c;
    double d = b*b - 4*a*c;
    if(d>0)
    {
        double x1 = (-b + sqrt(d))/(2*a);
        double x2 = (-b - sqrt(d))/(2*a);
        cout<<"Two Real Roots\n";
        cout<<"x1 = "<<x1<<endl;
        cout<<"x2 = "<<x2<<endl;
    }
    else if(d==0)
    {
        double x = -b/(2*a);
        cout<<"Equal Roots\n";
        cout<<"x = "<<x<<endl;
    }
    else
    {
        cout<<"Complex Roots\n";
        double real = -b/(2*a);
        double imag = sqrt(-d)/(2*a);
        cout<<"x1 = "<<real<<" + "<<imag<<"i\n";
        cout<<"x2 = "<<real<<" - "<<imag<<"i\n";
    }
}

// ---------------- DERIVATIVE (NUMERICAL) ----------------

string replaceX(string exp, double val)
{
    string result = "";
    for(int i = 0; i < exp.size(); i++)
    {
        if(exp[i] == 'x')
            result += to_string(val);
        else
            result += exp[i];
    }
    return result;
}
double derivative(string exp,double x)
{
    double h = 0.00001;

    string exp1 = replaceX(exp, x + h);
    string exp2 = replaceX(exp, x - h);

    double f1 = parseExpression(exp1);
    double f2 = parseExpression(exp2);

    return (f1 - f2) / (2 * h);
}

// ---------------- INTEGRATION (TRAPEZOIDAL RULE) ----------------

double integrate(string exp,double a,double b,int n)
{
    double h = (b-a)/n;
    double sum = 0;
    for(int i=0;i<=n;i++)
    {
        double x = a + i*h;
        string temp = replaceX(exp, x);
        double fx = parseExpression(temp);
        if(i==0 || i==n)
            sum += fx;
        else
            sum += 2*fx;
    }
    return (h/2)*sum;
}

// ---------------- HISTORY ----------------

void saveHistory(string entry)
{
    ofstream file("history.txt",ios::app);
    file<<entry<<endl;
}

void viewHistory()
{
    ifstream file("history.txt");
    string line;
    cout<<"\n----- CALCULATION HISTORY -----\n";
    while(getline(file,line))
        cout<<line<<endl;
    file.close();
}

// ---------------- EXPRESSION EVALUATION ----------------

double evaluateExpression()
{
    double a,b;
    char op;
    cout<<"Enter expression (a operator b): ";
    cin>>a>>op>>b;
    if(op=='+') return add(a,b);
    if(op=='-') return sub(a,b);
    if(op=='*') return mul(a,b);
    if(op=='/')
        {
            if(b == 0)
            {
                cout<<"Error: Division by zero is not allowed!\n";
                return 0; 
            }
            return divi(a,b);
        }
    cout<<"Invalid operator\n";
    return 0;
}

};

// ---------------- MENU ----------------

void mainMenu()
{
cout<<"\n=====================================\n";
cout<<"     ADVANCED SCIENTIFIC CALCULATOR\n";
cout<<"=====================================\n";

cout<<"1 Basic Operations\n";
cout<<"2 Trigonometric Functions\n";
cout<<"3 Logarithmic Functions\n";
cout<<"4 Statistics\n";
cout<<"5 Matrix Operations\n";
cout<<"6 Number Conversions\n";
cout<<"7 Memory Operations\n";
cout<<"8 Expression Parser\n";
cout<<"9 Equation Solver\n";
cout<<"10 Calculus\n";
cout<<"11 Prime Check\n";
cout<<"12 View History\n";
cout<<"0 Exit\n";
}

void basicMenu()
{
cout<<"\n--- BASIC OPERATIONS ---\n";
cout<<"1 Expression (a+b)\n";
cout<<"2 Square\n";
cout<<"3 Cube\n";
cout<<"4 Square Root\n";
cout<<"5 Factorial\n";
cout<<"0 Back\n";
}

void trigMenu()
{
cout<<"\n--- TRIG FUNCTIONS ---\n";
cout<<"1 Sin\n";
cout<<"2 Cos\n";
cout<<"3 Tan\n";
cout<<"4 Cot\n";
cout<<"5 Sec\n";
cout<<"6 Cosec\n";
cout<<"0 Back\n";
}

void logMenu()
{
cout<<"\n--- LOG FUNCTIONS ---\n";
cout<<"1 Log10\n";
cout<<"2 Natural Log\n";
cout<<"0 Back\n";
}

void statsMenu()
{
cout<<"\n--- STATISTICS ---\n";
cout<<"1 Mean\n";
cout<<"2 Variance\n";
cout<<"0 Back\n";
}

void matrixMenu()
{
cout<<"\n--- MATRIX OPERATIONS ---\n";
cout<<"1 Addition\n";
cout<<"2 Subtraction\n";
cout<<"3 Multiplication\n";
cout<<"4 Division\n";
cout<<"5 Transpose\n";
cout<<"6 Inverse\n";
cout<<"7 Determinant\n";
cout<<"0 Back\n";
}

void conversionMenu()
{
cout<<"\n--- NUMBER CONVERSIONS ---\n";
cout<<"1 Binary to Decimal\n";
cout<<"2 Decimal to Binary\n";
cout<<"3 Decimal to Hex\n";
cout<<"4 Hex to Decimal\n";
cout<<"5 Binary to Hex\n";
cout<<"6 Hex to Binary\n";
cout<<"7 Octal to Decimal\n";
cout<<"8 Decimal to Octal\n";
cout<<"9 Binary to Octal\n";
cout<<"10 Hex to Octal\n";
cout<<"11 Octal to Binary\n";
cout<<"12 Octal to Hex\n";
cout<<"0 Back\n";
}

void memoryMenu()
{
cout<<"\n--- MEMORY ---\n";
cout<<"1 Memory Add\n";
cout<<"2 Memory Recall\n";
cout<<"3 Memory Clear\n";
cout<<"0 Back\n";
}

// ---------------- MAIN ----------------

int main()
{    
    Calculator calc;
    int choice;
    while(true)
    {

    mainMenu();
    cout<<"Enter your choice: ";
    cin>>choice;
    if(choice==0) break;

    switch(choice)
    {

    case 1:
    {
        int c;
        basicMenu();
        cout<<"Enter your choice: ";
        cin>>c;

        double x;
        int n;

        switch(c)
        {
            case 1:
            {
                double result=calc.evaluateExpression();
                cout<<"Result = "<<result<<endl;
                break;
            }
            case 2: cin>>x; cout<<calc.square(x)<<endl; break;
            case 3: cin>>x; cout<<calc.cube(x)<<endl; break;
            case 4: cin>>x; cout<<calc.squareroot(x)<<endl; break;
            case 5: cin>>n; cout<<calc.factorial(n)<<endl; break;
        }
        break;
    }

    case 2:
    {
        int c;
        trigMenu();
        cout<<"Enter your choice: ";
        cin>>c;

        double x;

        switch(c)
        {
            case 1: cin>>x; cout<<calc.sine(x)<<endl; break;
            case 2: cin>>x; cout<<calc.cosine(x)<<endl; break;
            case 3: cin>>x; cout<<calc.tangent(x)<<endl; break;
            case 4: cin>>x; cout<<calc.cot(x)<<endl; break;
            case 5: cin>>x; cout<<calc.sec(x)<<endl; break;
            case 6: cin>>x; cout<<calc.cosec(x)<<endl; break;
        }
        break;
    }

    case 3:
    {
        int c;
        logMenu();
        cin>>c;

        double x;

        if(c==1){ cin>>x; cout<<calc.log10calc(x)<<endl; }
        if(c==2){ cin>>x; cout<<calc.ln(x)<<endl; }
        break;
    }

    case 4:
    {
        int c;
        statsMenu();
        cin>>c;
        int size;
        cout<<"Elements: ";
        cin>>size;
        vector<double> data(size);
        for(int i=0;i<size;i++)
        cin>>data[i];
        if(c==1)
        cout<<"Mean = "<<calc.mean(data)<<endl;
        if(c==2)
        cout<<"Variance = "<<calc.variance(data)<<endl;
        break;
    }

    case 5:
    {
        int c;
        matrixMenu();
        cin>>c;
        if(c==1) calc.matrixAddition();
        if(c==2) calc.matrixSubtraction();
        if(c==3) calc.matrixMultiplication();
        if(c==4) calc.matrixDivision();
        if(c==5) calc.matrixTranspose();
        if(c==6) calc.matrixInverse();
        if(c==7) calc.matrixDeterminant();
        break;
    }

    case 6:
    {
        int c;
        conversionMenu();
        cin>>c;

        string s;
        int n;

        if(c==1){cin>>s; cout<<calc.binaryToDecimal(s)<<endl;}
        if(c==2){cin>>n; cout<<calc.decimalToBinary(n)<<endl;}
        if(c==3){cin>>n; cout<<calc.decimalToHex(n)<<endl;}
        if(c==4){cin>>s; cout<<calc.hexToDecimal(s)<<endl;}
        if(c==5){cin>>s; cout<<calc.binaryToHex(s)<<endl;}
        if(c==6){cin>>s; cout<<calc.hexToBinary(s)<<endl;}
        if(c==7){cin>>s; cout<<calc.octalToDecimal(s)<<endl;}
        if(c==8){cin>>n; cout<<calc.decimalToOctal(n)<<endl;}
        if(c==9){cin>>s; cout<<calc.binaryToOctal(s)<<endl;}
        if(c==10){cin>>s; cout<<calc.hexToOctal(s)<<endl;}
        if(c==11){cin>>s; cout<<calc.octalToBinary(s)<<endl;}
        if(c==12){cin>>s; cout<<calc.octalToHex(s)<<endl;}
        break;
    }

    case 7:
    {
        int c;
        memoryMenu();
        cin>>c;

    double x;

        if(c==1){cin>>x; calc.memoryAdd(x);}
        if(c==2){cout<<"Memory = "<<calc.memoryRecall()<<endl;}
        if(c==3){calc.memoryClear();}
    break;
    }

    case 8:
    {
        string exp;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin,exp);
        cout<<"Result = "<<calc.parseExpression(exp)<<endl;
        break;
    }

    case 9:
    {
        cout<<"1 Linear\n2 Quadratic\n";
        int c;
        cin>>c;
        if(c==1) calc.solveLinear();
        if(c==2) calc.solveQuadratic();
        break;
    }

    case 10:
    {
        cout<<"1 Derivative\n2 Integration\n";
        int c;
        cin>>c;

        if(c==1)
        {
            string exp;
            double x;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin,exp);
            cin>>x;
            cout<<calc.derivative(exp,x)<<endl;
        }

        if(c==2)
        {
            string exp;
            double a,b;
            int n;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin,exp);
            cin>>a>>b>>n;
            cout<<calc.integrate(exp,a,b,n)<<endl;
        }
        break;
    }

    case 11:
    {
        int n;
        cin>>n;
        cout<<(calc.isPrime(n)?"Prime":"Not Prime")<<endl;
        break;
    }

    case 12:
    calc.viewHistory();
    break;
    }
    }
    return 0;
}