#include <iostream>
#include <vector>
//Print a vector containing integers, Problem 2
void print_vector(std::vector<int> v){
    for (int i : v){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}

//Problem 4
//Checks if number is Prime
bool isprime(int n) {
    bool result;
    //Loop from 2 to n
    for(int i = 2; i < n; i++){
        //If i divdies n, then n is not prime
        if(n%i == 0){
            return false;
        }
    }
    //We checked all numbers from 2 to n-1, therefore n is prime
    return true;
}
//Test Cases
void test_isprime() {
    std::cout << "isprime(2) = " << isprime(2) << "\n";
    std::cout << "isprime(10) = " << isprime(10) << "\n";
    std::cout << "isprime(17) = " << isprime(17) << "\n";
}

std::vector<int> factorize(int n) {
    std::vector<int> answer;
    for(int i = 1; i <= n; i++){
        //If i divides n, then i is a factor of n
        if(n%i == 0){
            answer.insert(answer.end(),i);
        }
    }
    return answer;
}
//Test cases
void test_factorize() {
    print_vector(factorize(2));
    print_vector(factorize(72));
    print_vector(factorize(196));
}
std::vector<int> prime_factorize(int n) {
    std::vector<int> answer;
    for(int i = 1; i <= n; i++){
        //If i divides n and i is prime, then i is a prime factor
        if(n%i == 0 && isprime(i)){
            answer.insert(answer.end(),i);
        }
    }
    return answer;
}
void test_prime_factorize() {
    print_vector(prime_factorize(2));
    print_vector(prime_factorize(72));
    print_vector(prime_factorize(196));
}

//Problem 5
void pascal(int n) {
    std::vector<int> prev;
    std::vector<int> current = {1,1};
    //This loop prints the row
    for(int i = 0;i < n;i++){
        //print the current row
        print_vector(current);
        //save the current row to be the previous
        prev = current;
        //Clear the current row so we can make a new one
        current.clear();
        //Add 1 at the start
        current.insert(current.end(),1);
        //This loop iterates through the previous row to make a new one
        for(int j = 1; j < prev.size();j++){
            current.insert(current.end(),prev[j] + prev[j - 1]);
        }
        //Add 1 at the end
        current.insert(current.end(), 1);
    }
}
int main(){
    //Problem 3
    int fib1 = 1;
    int fib2 = 2;
    int temp = 0;
    int count = 0; //Just for formatting the output
    while(fib1 < 4000000){
        //Print Fib1
        std::cout<<fib1<< " ";
        //Start a new line every 10 Fib numbers
        if (count%10 == 0){
            std::cout<<std::endl;
        }
        //hold temporary value
        temp = fib1;
        //Fib1 becomes the next fib number
        fib1 = fib2;
        //Calculate the next occuring fib number
        fib2 = temp + fib2;
        count+=1;
    }

    test_isprime();
    test_factorize();
    test_prime_factorize();

    pascal(5);
    return 0;
}