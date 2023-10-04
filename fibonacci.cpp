#include<algorithm>
#include<iostream>
#include<vector>

std::vector<int> fibo = {0, 1};
std::string x = "";

int main()
{    
    do
    {
        std::cout << "Quer quantos números para a sequência de Fibonacci? "; std::cin >> x;
        if(isdigit(x[0]))
        {
            switch(stoi(x))
            {
                case 0:
                { 
                    std::cout << "A sequência está vazia";
                    break;
                }
                case 1:
                {
                    fibo.pop_back();                
                }
                case 2:
                {
                    // Nada a fazer aqui
                }
                default:
                {            
                    for (int i = 2; i < stoi(x); ++i)
                    {
                        fibo.push_back(fibo[i - 2] + fibo[i - 1]);
                    }
                }
                for_each(fibo.begin(), fibo.end(), [](int n){ std::cout << n << " "; });  
            }
        }
        else std::cout << "Não digitou um número" << std::endl;
    }while(!isdigit(x[0]));    
}