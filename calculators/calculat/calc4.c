#include <stdio.h> 

#include <windows.h>        //For function Sleep()

#include <math.h>           //For functions like pow(), sin(), cos(), tan()

#include <time.h>           //For time based modules and functions

#include <conio.h>          //For kbhit, input detector

#define PI 3.14159265358979323846

Exit_0(); //Function Prototype
main() {
  system("COLOR F1");
  char Opt, oper, H;
  int i = 1, Oof, Check, N, K, Numbering, F, Choice, a, b, c, d;
  float Num1, Num2, ans, CheckF, A, B, C, A1, A2, Z;
  double x, xy, y;


  system("cls"); //Clears terminal screen
  printf("Welcome to calculator HeX.\n");
  while (1) { //While loop that never ends, unless exit(0) is used
    Start: printf("\n\nWhich mode do you want to use?\n[1] Normal maths operations\n[2] Special Functions\n[3] Fibonacci Series\n[4] Random Mathematical Question\n[5] Exit\n\nYour input: ");
    scanf(" %c", & Opt);
    if (Opt == '1') {
      printf("Welcome to Normal maths operation Mode.\n\nYour two numbers: ");
      scanf("%f%f", & Num1, & Num2);
      printf("\nAVAILABLE SYMBOLS:\n\n+ for Addition\n- for Subtraction\n/ for Division\n* for Multiplication\n^ for Power function\n\\ for Rooting\nYour input: ");
      scanf(" %c", & oper);
      if (oper == '+') {
        ans = (Num1 + Num2);
        printf("Here is your answer:\n%f  %c %f = %.5f (To 5 decimal places)\n\n", Num1, oper, Num2, ans);
          
      } else if (oper == '-') {
        ans = (Num1 - Num2);
        printf("Here is your answer:\n%f  %c %f = %.5f (to 5 decimal places)\n\n", Num1, oper, Num2, ans);
          
      } else if (oper == '/') {
        ans = (Num1 / Num2);
        printf("Here is your answer:\n%f  %c %f = %.5f (to 5 decimal places)\n\n", Num1, oper, Num2, ans);
          
      } else if (oper == '*') {
        ans = (Num1 * Num2);
        printf("Here is your answer:\n%f  %c %f = %.5g (to 5 decimal places)\n\n", Num1, oper, Num2, ans);
          
      } else if (oper == '^') {
        ans = (pow(Num1, Num2));
        printf("Here is your answer:\n%f  %c %f = %.5g (to 5 decimal places)\n\n", Num1, oper, Num2, ans);
          
      } else if (oper == '\\') {
        ans = pow(Num2, 1 / Num1);
        Check = Num1;
        Oof = Check % 2;
        if (Num2 < 0) {
          system("COLOR B4");
          printf("Cannot root a negative number; ERROR 1 Sintek\a\n");
          system("pause");
          system("cls");
          system("COLOR F1");
        } else if (Oof == 0) {
          printf("Here is your answer:\n%f root(%f) = - %.5f or + %.5f (to 5 decimal places)\n\n", Num1, Num2, ans, ans);
            
        } else if (!Oof == 0) {
          printf("Here is your answer:\n%f root(%f) = + %.5f (to 5 decimal places)\n\n", Num1, Num2, ans);
            
        }
      } else {
        system("COLOR B4");
        printf("\n\nYour input operator is incorrect; ERROR 1 Sintek\n");
        printf("\a\n");
        system("pause");
        system("cls");
        system("COLOR F1");
      }
    } else if (Opt == '2') {
      printf("Welcome to Special Functions Mode.\n\n[1] Sine Function\n[2] Cosine Function\n[3] Tangent Function\n[4] Log (With base 10)\n[5] Log (With base e)\n[6] Log (With user defined base)\n[7] Sine Inverse Function\n[8] Cosine Inverse Function\n[9] Tangent Inverse Function\n[10] Quadratic Equation Solver\n\nWhich mode do you want: ");
      scanf("%d", & N);
      if (N == 1) {
        printf("Your angle: ");
        scanf("%f", & Num1);
        ans = (sin(Num1 * PI / 180));
        printf("\nHere is your answer:\nSine(%f) = %.5f (to 5 decimal places)\n\n", Num1, ans);
          
      } else if (N == 2) {
        printf("Your angle: ");
        scanf("%f", & Num1);
        ans = (cos(Num1 * PI / 180));
        printf("Here is your answer:\nCosine(%f) = %.5f (to 5 decimal places)\n\n", Num1, ans);
          
      } else if (N == 3) {
        printf("Your angle: ");
        scanf("%f", & Num1);
        ans = (tan(Num1 * PI / 180));
        printf("Here is your answer:\nTangent(%f) = %.5f (to 5 decimal places)\n\n", Num1, ans);
          
      } else if (N == 4) {
        printf("Your number: ");
        scanf("%f", & Num1);
        ans = log10(Num1);
        if (Num1 < 0) {
          system("COLOR B4");
          printf("Cannot log a negative number; ERROR 1 Sintek\a\n");
          system("pause");
          system("cls");
          system("COLOR F1");
        } else if (Num1 == 0) {
          system("COLOR B4");
          printf("Cannot log(0); ERROR 1 Sintek\a\n");
          system("pause");
          system("cls");
          system("COLOR F1");
        } else if (Num1 > 0) {
          printf("Here is your answer:\nLg(%f) = %.5f (to 5 decimal places)\n\n", Num1, ans);
            
        }
      } else if (N == 5) {
        printf("Your number: ");
        scanf("%f", & Num1);
        ans = log(Num1);
        if (Num1 < 0) {
          system("COLOR B4");
          printf("Cannot ln a negative number; ERROR 1 Sintek\n\a");
          system("pause");
          system("cls");
          system("COLOR F1");
        } else if (Num1 == 0) {
          system("COLOR B4");
          printf("Cannot ln(0); Error 1 Sintek\n\a");
          system("pause");
          system("cls");
          system("COLOR F1");
        } else if (Num1 > 0) {
          printf("Here is your answer:\nLn(%f) = %.5f (to 5 decimal places)\n\n", Num1, ans);
            
        }
      } else if (N == 6) {
        printf("Enter the base number, followed by the number: ");
        scanf("%f%f", & Num1, & Num2);
        ans = (log(Num2) / log(Num1));
        if (Num1 <= 0 || Num2 <= 0) {
          system("COLOR B4");
          printf("Cannot log a negative/zero base/number; ERROR 1 Sintek\n\a");
          system("pause");
          system("cls");
          system("COLOR F1");
        } else if (Num1 > 0 && Num2 > 0) {
          printf("Here is your answer:\nLog[base %f]%f = %.5f (to 5 decimal places)\n\n", Num1, Num2, ans);
            
        }
      } else if (N == 7) {
        printf("[1] Entering hypotenuse and opposite of triangle\n[2] Entering the value directly\n\nYour option: ");
        scanf("%d", & K);
        if (K == 1) {
          printf("Enter hypotenuse and opposite sides of the triangle: ");
          scanf("%f%f", & Num1, & Num2);
          CheckF = Num2 / Num1;
          if (CheckF < -1 || CheckF > 1) {
            system("COLOR B4");
            printf("The opposite side should not be larger than the hypotenuse side. Please recheck your values!\nERROR 1 Sintek\n\a");
            system("pause");
            system("cls");
            system("COLOR F1");
          } else {
            ans = (asin(CheckF));
            printf("Sine inverse %f/%f =\n%f (In radians)", Num2, Num1, ans);
            ans = ans * 180 / PI;
            printf("\n%f (In degrees)", ans);
              
          }
        } else if (K == 2) {
          printf("Enter your value: ");
          scanf("%f", & CheckF);
          if (CheckF < -1 || CheckF > 1) {
            system("COLOR B4");
            printf("Value cannot be higher than 1/lower than -1. Please recheck your input!\nERROR 1 Sintek\n\a");
            system("pause");
            system("cls");
            system("COLOR F1");
          } else {
            ans = (asin(CheckF));
            printf("Sine inverse %f =\n%f (In radians)", CheckF, ans);
            ans = ans * 180 / PI;
            printf("\n%f (In degrees)", ans);
              
          }
        } else if (K != 1 || K != 2) {
          system("COLOR B4");
          printf("Your input option is not found! ERROR 404\a\n");
          system("pause");
          system("cls");
          system("COLOR F1");
        }
      } else if (N == 8) {
        printf("[1] Entering adjacent and hypotenuse of triangle\n[2] Entering the value directly\n\nYour option: ");
        scanf("%d", & K);
        if (K == 1) {
          printf("Enter adjacent and hypotenuse sides of the triangle: ");
          scanf("%f%f", & Num1, & Num2);
          CheckF = Num1 / Num2;
          if (CheckF < -1 || CheckF > 1) {
            system("COLOR B4");
            printf("The adjacent side should not be larger than the hypotenuse side. Please reckeck your values!\nERROR 1 Sintek\n\a");
            system("pause");
            system("cls");
            system("COLOR F1");
          } else {
            ans = (acos(CheckF));
            printf("Cosine inverse %f/%f =\n%f (In radians)", Num1, Num2, ans);
            ans = ans * 180 / PI;
            printf("\n%f (In degrees)", ans);
              
          }
        } else if (K == 2) {
          printf("Enter your value: ");
          scanf("%f", & CheckF);
          if (CheckF < -1 || CheckF > 1) {
            system("COLOR B4");
            printf("Value cannot be higher than 1/lower than -1. Please recheck your input!\nERROR 1 Sintek\n\a");
            system("pause");
            system("cls");
            system("COLOR F1");
          } else {
            ans = (acos(CheckF));
            printf("Cosine inverse %f = \n%f (In radians)", CheckF, ans);
            ans = ans * 180 / PI;
            printf("\n%f (In degrees)", ans);
              
          }
        } else if (K != 1 || K != 2) {
          system("COLOR B4");
          printf("Your input option is not found! Error 404\a\n");
          system("pause");
          system("cls");
          system("COLOR F1");
        }
      } else if (N == 9) {
        printf("[1] Entering opposite and adjacent of triangle\n[2] Entering the value directly\n\nYour option: ");
        scanf("%d", & K);
        if (K == 1) {
          printf("Enter opposite and adjacent sides of the triangle: ");
          scanf("%f%f", & Num1, & Num2);
          CheckF = Num1 / Num2;
          ans = (atan(CheckF));
          printf("Tangent inverse %f/%f =\n%f (In radians)", Num1, Num2, ans);
          ans = ans * 180 / PI;
          printf("\n%f (In degrees)", ans);
            
        } else if (K == 2) {
          printf("Enter your value: ");
          scanf("%f", & CheckF);
          if (CheckF < -1 || CheckF > 1) {
            system("COLOR B4");
            printf("Value cannot be higher than 1/lower than -1. Please recheck your input!\nERROR 1 Sintek\n\a");
            system("pause");
            system("cls");
            system("COLOR F1");
          } else {
            ans = (atan(CheckF));
            printf("Tangent inverse %f =\n%f (In radians)", CheckF, ans);
            ans *= 180 / PI;
            printf("\n%f (In degrees)", ans);
              
          }
        } else if (K != 1 || K != 2) {
          system("COLOR B4");
          printf("Your input option is not found! ERROR 404\a\n");
          system("pause");
          system("cls");
          system("COLOR F1");
        }
      } else if (N == 10) {
        printf("Welcome to Quadratic Equation solver. Enter the coefficient of X^2, followed by\nthe coefficient of X, followed by the integer value.\n\nEnter values: ");
        scanf("%f%f%f", &A, &B, &C);
        CheckF = (B * B - 4 * A * C);
        if (A == 0) {
          ans = -C/B;
          printf("Root of equation is %f \n", ans);
            
      } else if (CheckF < 0) {
          system("COLOR B4");
          printf("This calculator HeX, currently cannot handle complex numbers.\nPlease pardon my developer. I will now redirect you to the main menu.\n");
          system("pause");
          system("cls");
          system("COLOR F1");
          goto Start;
        } else if (CheckF >= 0) {
            Z  = pow(CheckF, 0.5);
            A1 = (-B + Z)/(A+A);
            A2 = (-B - Z)/(A+A);
          if (A1 == A2) {
            ans = A1;
            printf("\nRoot of equation is %f (Repeated root)\n", ans);
              
          } else if (A1 != A2) {
            printf("Roots of equation are %f and %f \n", A1, A2);
              
          }
        }
      } else {
        system("COLOR B4");
        printf("Your input option is not found! ERROR 404\a\n");
        system("pause");
        system("cls");
        system("COLOR F1");
      }
    } else if (Opt == '3') {
      printf("Welcome to Fibonacci Series Mode.\n\nPress any key to stop while printing the numbers, to pause.\nEnter how many numbers do you want from the series, from the start: ");
      scanf("%d", & N);
      x = 0;
      y = 1;
      F = 3;
      Numbering = 3;
      printf("Here is Your Series:\n\n");
      if (N == 1) {
        printf("[1] 0\n");
        Sleep(1000);
      }
      if (N == 2) {
        printf("[1] 0\n");
        Sleep(75);
        printf("[2] 1\n");
        Sleep(1075);
      }
      if (N == 3) {
        printf("[1] 0\n");
        Sleep(75);
        printf("[2] 1\n");
        Sleep(75);
        printf("[3] 1\n");
        Sleep(1075);
      }
      if (N > 3) {
        printf("[1] 0\n");
        Sleep(75);
        printf("[2] 1\n");
        Sleep(75);
      }
      while (N > 3 && F <= N) {
        xy = x + y;
        printf("[%.0d] %.5g\n", Numbering, xy);
        Sleep(75);
        x = y;
        y = xy;
        F++;
        Numbering++;
        while (kbhit()) {
          system("COLOR B4");
          printf("\n\n[+] Interrupted\n\nE to exit\nC to continue printing\n\nOption: ");
          scanf(" %c", & H);
          if (H == 'E') {
            printf("Exiting to main menu, in 2 seconds.");
            Sleep(2000);
            system("COLOR F1");
            goto Start;
          } else if (H == 'C') {
            system("COLOR F1");
            continue;
          }
        }
      }
      Sleep(1000);
    } else if (Opt == '4') {
      srand(time(NULL));
      Choice = rand() % 3;
      if (Choice == 0) {
        a = rand() % 5001;
        b = rand() % 5001;
        c = a + b;
        printf("What is %d + %d?\nYour answer: ", a, b);
        scanf("%d", & d);
        if (d == c) {
          system("COLOR 2F");
          printf("Yes. You are right; Congratulations\n\n");
          system("pause");
          system("COLOR F1");
        } else {
          system("COLOR B4");
          printf("No. The correct answer is %.0d. Need to practice more!\n\n", c);
          system("pause");
          system("cls");
          system("COLOR F1");
        }
      }
      if (Choice == 1) {
        a = rand() % 5001;
        b = rand() % 5001;
        c = a - b;
        printf("What is %d - %d?\nYour answer: ", a, b);
        scanf("%d", & d);
        if (d == c) {
          system("COLOR 2F");
          printf("Yes. You are right; Congratulations\n\n");
          system("pause");
          system("COLOR F1");
        } else {
          system("COLOR B4");
          printf("No. The correct answer is %.0d. Need to practice more!\n\n", c);
          system("pause");
          system("cls");
          system("COLOR F1");
        }
      }
      if (Choice == 2) {
        a = rand() % 20;
        b = rand() % 20;
        c = a * b;
        printf("What is %d times %d?\nYour answer: ", a, b);
        scanf("%d", & d);
        if (d == c) {
          system("COLOR 2F");
          printf("Yes. You are right; Congratulations\n\n");
          system("pause");
          system("COLOR F1");
        } else {
          system("COLOR B4");
          printf("No. The correct answer is %.0d. Need to practice  more!\n\n", c);
          system("pause");
          system("cls");
          system("COLOR F1");
        }
      }
    } else if (Opt == '5') {
      Exit_0();
    } else if (Opt < '1' || Opt > '5') {
      system("COLOR B4");
      printf("Your option is not found! ERROR 404");
      printf("\a\n");
      system("pause");
      system("cls");
      system("COLOR F1");
    }
  }
}


Exit_0() {
  printf("Thank you for using my calculator. Hope to see you again!!");
  Sleep(1250);
  system("cls");
  system("COLOR 0F");
  exit(0);
}