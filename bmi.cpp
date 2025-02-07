#include <iostream>

int main() {
  
  double height, weight, bmi;
  
  // Ask user for their height
  
  std::cout << "Type in your height (m): ";
  std::cin >> height;
  
  // Now ask the user for their weight
  
  std::cout << "Type in your weight (kg): ";
  std::cin >> weight;
  
  // Calculate BMI

  bmi = weight / (height * height);
  
  std::cout << "\n Your BMI is: " << bmi << ". \n\n";
  
  if (bmi < 18.5)
  {
    std::cout << "A BMI of less than 18.5 indicates that you are underweight, so you may need to put on some weight. You are recommended to ask your doctor or a dietitian for advice. \n";
  }
  else if (bmi > 18.5 || bmi < 24.9)
  {
    std::cout << "A BMI of 18.5-24.9 indicates that you are at a healthy weight for your height. By maintaining a healthy weight, you lower your risk of developing serious health problems. \n";
  }
  else if (bmi > 25 || bmi < 29.9)
  {
    std::cout << "A BMI of 25-29.9 indicates that you are slightly overweight. You may be advised to lose some weight for health reasons. You are recommended to talk to your doctor or a dietitian for advice. \n";
  }
  else
  {
    std::cout << "A BMI of over 30 indicates that you are heavily overweight. Your health may be at risk if you do not lose weight. You are recommended to talk to your doctor or a dietitian for advice. \n";
  }
  
  return 0;

}