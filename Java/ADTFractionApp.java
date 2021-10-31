//Demonnstration of how to do basic operations with ADT Fractions

public class ADTFractionApp {

  /**
   * @author Yashmi Kumarasiri (https://github.com/yashmi110) - ADTFRACTION APP- A fraction is the
   * quotient of two numbers n d, where n and d are both integers and d ≠ 0.
   * n is called the numerator and d is the denominator.This code is to implement
   * some basic operations(addition,multiplication,get the reciprocal and numeric values,
   * display fraction in n/d format) on fractions
   */
  public static void main(String[] args) {
    ADTFraction f1 = new ADTFraction(3, 5);
    f1.display();
    ADTFraction f2 = new ADTFraction(7, 8);
    f2.display();
  }
}

class ADTFraction {

  private int n; //numerator
  private int d; //denomenator

  //default constructor
  public ADTFraction() {
    this.n = 0;
    this.d = 1;
  }

  //parameter constructor
  public ADTFraction(int a, int b) {
    if (b != 0) {
      this.d = b;
      this.n = a;
    } else {
      this.n = 0;
      this.d = 1;
      System.out.println("Denomenator cannot be Zero");
    }
  }

  //set numerator and denomenator
  public void set(int a, int b) {
    if (b != 0) {
      this.d = b;
      this.n = a;
    } else {
      this.n = 0;
      this.d = 1;
      System.out.println("Denomenator cannot be Zero");
    }
  }

  //add two fractions
  public ADTFraction plus(ADTFraction x) {
    int num, den;
    den = this.d * x.d;
    num = this.n * x.d + x.n * this.d;
    ADTFraction f1 = new ADTFraction(num, den);
    return f1;
  }

  //multiply fraction by a number
  public ADTFraction times(int a) {
    int num, den;
    den = this.d;
    num = this.n * a;

    ADTFraction f1 = new ADTFraction(num, den);
    return f1;
    //return times(new ADTFraction(a,1))
  }

  //multiply two fractions
  public ADTFraction times(ADTFraction x) {
    int num, den;
    den = this.d * x.d;
    num = this.n * x.n;

    ADTFraction f1 = new ADTFraction(num, den);
    return f1;
  }

  //reciprocal of a fraction
  public ADTFraction reciprocal() {
    ADTFraction f1 = new ADTFraction(this.d, this.n);
    return f1;
  }

  //numerical value of a fraction
  public float value() {
    return (float) this.n / this.d;
  }

  //display the fraction in the format n/d
  public void display() {
    System.out.println(this.n + "/" + this.d);
  }
}
