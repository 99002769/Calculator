int main()
{
    int X=1;
    int op;
 
    // Function call 
    calculator_operations();
 
    while(X)
    {
        printf("\n");
        printf( "\nEnter the operation to calculate: ");
 
        scanf("%d", &op);
 
        switch(op)
        {
            case 1: addition();
                      break;
 
            case 2: subtraction();
                      break;
 
            case 3: multiplication();
                      break;
 
            case 4: division();
                      break;
 
            case 5: modulus();
                      break;
 
            case 6: factorial();
                      break;
 
            case 7: power();
                      break;
 
            
            case 8: calculator_operations();
                      break;
 
            case 0: exit(0);
                      break;
            
            case 100: system("cls");
                      calculator_operations();
                      break;
 
            default : system("cls");
 
            calculator_operations();
                      
        }
    }
}
